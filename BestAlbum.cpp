//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//// 장르 정렬용 비교 함수
//struct GenreComparator {
//    bool operator()(const pair<string, int>& a, const pair<string, int>& b) const {
//        return a.second > b.second; // 내림차순
//    }
//};
//
//// 곡 정렬용 비교 함수  
//struct SongComparator {
//    bool operator()(const pair<int, int>& a, const pair<int, int>& b) const {
//        if (a.first == b.first) return a.second < b.second; // 인덱스 오름차순
//        return a.first > b.first; // 재생횟수 내림차순
//    }
//};
//
//vector<int> solution(vector<string> genres, vector<int> plays) {
//    // 1. 장르별 총 재생횟수 계산
//    map<string, int> genreTotalPlays;
//    for (int i = 0; i < genres.size(); i++) {
//        genreTotalPlays[genres[i]] += plays[i];
//    }
//
//    // 2. 장르를 총 재생횟수 순으로 정렬
//    vector<pair<string, int> > sortedGenres;
//    map<string, int>::iterator it;
//    for (it = genreTotalPlays.begin(); it != genreTotalPlays.end(); ++it) {
//        sortedGenres.push_back(make_pair(it->first, it->second));
//    }
//    sort(sortedGenres.begin(), sortedGenres.end(), GenreComparator());
//
//    // 3. 각 장르별로 {재생횟수, 인덱스} 저장
//    map<string, vector<pair<int, int> > > bucket;
//    for (int i = 0; i < genres.size(); i++) {
//        bucket[genres[i]].push_back(make_pair(plays[i], i));
//    }
//
//    // 4. 각 장르 내에서 재생횟수로 정렬
//    map<string, vector<pair<int, int> > >::iterator bucketIt;
//    for (bucketIt = bucket.begin(); bucketIt != bucket.end(); ++bucketIt) {
//        sort(bucketIt->second.begin(), bucketIt->second.end(), SongComparator());
//    }
//
//    // 5. 결과 구성: 각 장르에서 최대 2개씩
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
//    cout << "결과: ";
//    for (int idx : result) {
//        cout << idx << " ";
//    }
//    cout << endl;
//
//    return 0;
//}