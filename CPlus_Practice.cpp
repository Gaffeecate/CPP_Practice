#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;


int main() {
	int solution(vector<vector<string>> clothes);
    vector<vector<string>> clothes = {
    {"yellow_hat", "headgear"},
    {"blue_sunglasses", "eyewear"},
    {"green_turban", "headgear"}
    };
	solution(clothes);
	return 0;
}

int solution(vector<vector<string>> clothes) {
    map <string, int> partCount;
    int count = 1;
    set <string> clothesName;

    for (int i = 0; i < clothes.size(); i++) {
        partCount[clothes[i][1]]++;
        clothesName.insert(clothes[i][1]);
    }
    for (string name : clothesName) {
        count *= (partCount[name] + 1);
    }

    return count - 1;
}