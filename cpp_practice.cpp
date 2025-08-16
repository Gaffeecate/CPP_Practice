#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>

using namespace std;


vector<string> genres = { "classic", "pop", "classic", "classic", "pop" };
vector<int> plays = { 500, 600, 150, 800, 2500 };
vector<int> solution(vector<string> genres, vector<int> plays);

int main()
{
    solution(genres, plays); // 호출
    return 0;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    map <string, int> mapGenreCount;
    set <string> setGenre;
    for (string str : genres) {
        mapGenreCount[str]++;
        setGenre.insert(str);
    }
     
    vector<pair<string, int>> countAndName = {};

    for (string str : setGenre) {
        countAndName.push_back(make_pair(str, mapGenreCount[str]));
    }


    
    sort(countAndName.begin(), countAndName.end(),
        [](const pair<string, int>& a, const pair<string, int>& b) {
            return a.second > b.second;
        });


   






    // 장르빈도수 맵 -> 맵은 키값으로 정렬됨 -> 밸류값으로 다시 정렬 필요 -> 이걸 모르니 그냥 스트링으로 합쳐
    // -> 어떻게 하냐면, 밸류-키값을 순회하면서 플레이횟수를 스트링으로 바꾼 다음에 장르와 합침 -> 정렬
    // -> 정렬됐으면 장르별로 플레이 회수가 정렬됨 classic500 이렇게.
    // 장르마다의 맵 -> {플레이횟수, 인덱스}



    return plays;
}
