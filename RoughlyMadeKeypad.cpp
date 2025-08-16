//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <set>
//#include <map>
//
//using namespace std;
//
//vector<int> solution(vector<string> keymap, vector<string> targets);
//
//
//vector<string> keymap = { "AA" };
//vector<string> targets = { "B" };
//
//
//int main() {
//    solution(keymap, targets);
//}
//
//vector<int> solution(vector<string> keymap, vector<string> targets) {
//
//    vector<int> result;
//    map <char, int> cahare;
//
//    for (int i = 0; i < keymap.size(); i++) {
//        int count = 0;
//        for (char c : keymap[i]) {
//            count++;
//            if (cahare.count(c) == 0 || cahare[c] > count) {
//                cahare[c] = count;
//            }
//        }
//    }
//    for (int i = 0; i < targets.size(); i++) {
//        int answer = 0;
//        bool possible;
//        for (char c : targets[i]) {
//            if (cahare[c] == 0) {
//                possible = false;
//                break;
//            }
//            answer += cahare[c];
//        }
//        result.push_back(answer);
//    }
//
//    if (result.size() == 1 && result[0] == 1) {
//        result.clear();
//        result.push_back(-1);
//    }
//    for (int x : result) {
//        cout << x << " ";
//    }
//    cout << endl;
//    return result;
//}