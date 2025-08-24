#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;


struct GenresComparator {
    bool operator()(const pair<string, int>& a, const pair<string, int>& b) const {
        return a.second > b.second; 
    }
};

struct SongsComparator {
    bool operator()(const pair<string, int>& a, const pair<string, int>& b) const {
        if (a.first != b.first) {
            return a.first > b.first;
        }
        return a.second > b.second;
    }
};

int main() {
    vector<string> genres = { "classic", "pop", "classic", "classic", "pop" };
    vector<int> plays = { 500, 600, 150, 800, 2500 };

    map <string, int> totalGenresCount;
    // 1. 일단 장르별 총 재생횟수 정리
    for (int i = 0; i < genres.size(); i++) {
        totalGenresCount[genres[i]] = plays[i];
    }

    // map을 vector로 복사
    vector <pair<string, int>> sortedGenresVec;
    map <string, int> ::iterator it;
    for (it = totalGenresCount.begin(); it != totalGenresCount.end(); it++) {
        sortedGenresVec.push_back(*it);
    }
    sort(sortedGenresVec.begin(), sortedGenresVec.end(), GenresComparator()); // 자 이제 장르별 플레이 횟수대로 정렬됐고

    map<string, vector<pair<int, int> > > bucket;
    for (int i = 0; i < genres.size(); i++) {
        bucket[genres[i]].push_back(pair<int, int>(plays[i], i));
    }

    // 4. 각 장르 내에서 재생횟수로 정렬
    map<string, vector<pair<int, int>>>::iterator bucketIt; // 장르, 플레이횟수, 인덱스
    for (bucketIt = bucket.begin(); bucketIt != bucket.end(); ++bucketIt) {
        sort(bucketIt->second.begin(), bucketIt->second.end(), SongsComparator());
    }

    vector<int> result = {};
    string  genresStr;
    for (int i = 0; i < sortedGenresVec.size(); i++) {
        genresStr = (sortedGenresVec[i].first);
        if (bucket[genresStr].size() >= 2) {
            result.push_back(bucket[genresStr][0].second);
            result.push_back(bucket[genresStr][1].second);
        }
        else if (bucket[genresStr].size() == 1) {
            result.push_back(bucket[genresStr][0].second);
        }
        else {
            continue;
        }
    }
    return result;
}