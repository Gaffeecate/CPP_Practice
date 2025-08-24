//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//// �帣 ���Ŀ� �� �Լ�
//struct GenreComparator {
//    bool operator()(const pair<string, int>& a, const pair<string, int>& b) const {
//        return a.second > b.second; // ��������
//    }
//};
//
//// �� ���Ŀ� �� �Լ�  
//struct SongComparator {
//    bool operator()(const pair<int, int>& a, const pair<int, int>& b) const {
//        if (a.first == b.first) return a.second < b.second; // �ε��� ��������
//        return a.first > b.first; // ���Ƚ�� ��������
//    }
//};
//
//vector<int> solution(vector<string> genres, vector<int> plays) {
//    // 1. �帣�� �� ���Ƚ�� ���
//    map<string, int> genreTotalPlays;
//    for (int i = 0; i < genres.size(); i++) {
//        genreTotalPlays[genres[i]] += plays[i];
//    }
//
//    // 2. �帣�� �� ���Ƚ�� ������ ����
//    vector<pair<string, int> > sortedGenres;
//    map<string, int>::iterator it;
//    for (it = genreTotalPlays.begin(); it != genreTotalPlays.end(); ++it) {
//        sortedGenres.push_back(make_pair(it->first, it->second));
//    }
//    sort(sortedGenres.begin(), sortedGenres.end(), GenreComparator());
//
//    // 3. �� �帣���� {���Ƚ��, �ε���} ����
//    map<string, vector<pair<int, int> > > bucket;
//    for (int i = 0; i < genres.size(); i++) {
//        bucket[genres[i]].push_back(make_pair(plays[i], i));
//    }
//
//    // 4. �� �帣 ������ ���Ƚ���� ����
//    map<string, vector<pair<int, int> > >::iterator bucketIt;
//    for (bucketIt = bucket.begin(); bucketIt != bucket.end(); ++bucketIt) {
//        sort(bucketIt->second.begin(), bucketIt->second.end(), SongComparator());
//    }
//
//    // 5. ��� ����: �� �帣���� �ִ� 2����
//    vector<int> answer;
//    for (int i = 0; i < sortedGenres.size(); i++) {
//        string genre = sortedGenres[i].first;
//        vector<pair<int, int> >& songs = bucket[genre];
//
//        int maxSongs = min(2, (int)songs.size());
//        for (int j = 0; j < maxSongs; j++) {
//            answer.push_back(songs[j].second);
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//    vector<string> genres = { "classic", "pop", "classic", "classic", "pop" };
//    vector<int> plays = { 500, 600, 150, 800, 2500 };
//
//    vector<int> result = solution(genres, plays);
//
//    cout << "���: ";
//    for (int idx : result) {
//        cout << idx << " ";
//    }
//    cout << endl;
//
//    return 0;
//}