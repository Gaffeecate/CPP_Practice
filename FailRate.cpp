<<<<<<< HEAD
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm> // sort 함수 쓰려면 필요
//
//using namespace std;
//
//
//vector<int> solution(int N, vector<int> stages);
//vector<double> result;
//
//bool compare(pair<int, double>& a, pair<int, double>& b) {
//    if (a.second == b.second)
//        return a.first < b.first;  // 스테이지 번호 오름차순
//    return a.second > b.second;    // 실패율 내림차순
//}
//
////int main() {
//    int N = 5;
//    vector<int> stages = { 2, 1, 2, 6, 2, 4, 3, 3 };
//    solution(N, stages);
//    return 0;
//}
//
//vector<int> solution(int N, vector<int> stages) {
//    vector<int> stageSurvivedPeopleNum(N + 2, 0);
//    vector<double> failRate(N + 2, 0);
//    vector<pair<int, double>> failRateOfStage;
//    vector<int> answer;
//
//
//    int peopleNums = stages.size();
//    for (int stage : stages) {
//        stageSurvivedPeopleNum[stage]++;
//    }
//    for (int i = 1; i < stageSurvivedPeopleNum.size() - 1; i++) {
//        if (peopleNums == 0) {
//            failRate[i] = 0;
//        }
//        else {
//            failRate[i] = (double)stageSurvivedPeopleNum[i] / peopleNums;
//        }
//        failRateOfStage.push_back({ i, failRate[i] });
//        peopleNums -= stageSurvivedPeopleNum[i];
//    }
//
//    sort(failRateOfStage.begin(), failRateOfStage.end(), compare);
//
//    for (int i = 0; i < failRateOfStage.size(); i++) {
//        answer.push_back(failRateOfStage[i].first);
//    }
//
//    return answer;
//}
=======
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // sort 함수 쓰려면 필요

using namespace std;


vector<int> solution(int N, vector<int> stages);
vector<double> result;

bool compare(pair<int, double>& a, pair<int, double>& b) {
    if (a.second == b.second)
        return a.first < b.first;  // 스테이지 번호 오름차순
    return a.second > b.second;    // 실패율 내림차순
}

int main() {
    int N = 5;
    vector<int> stages = { 2, 1, 2, 6, 2, 4, 3, 3 };
    solution(N, stages);
    return 0;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> stageSurvivedPeopleNum(N + 2, 0);
    vector<double> failRate(N + 2, 0);
    vector<pair<int, double>> failRateOfStage;
    vector<int> answer;


    int peopleNums = stages.size();
    for (int stage : stages) {
        stageSurvivedPeopleNum[stage]++;
    }
    for (int i = 1; i < stageSurvivedPeopleNum.size() - 1; i++) {
        if (peopleNums == 0) {
            failRate[i] = 0;
        }
        else {
            failRate[i] = (double)stageSurvivedPeopleNum[i] / peopleNums;
        }
        failRateOfStage.push_back({ i, failRate[i] });
        peopleNums -= stageSurvivedPeopleNum[i];
    }

    sort(failRateOfStage.begin(), failRateOfStage.end(), compare);

    for (int i = 0; i < failRateOfStage.size(); i++) {
        answer.push_back(failRateOfStage[i].first);
    }

    return answer;
}
>>>>>>> f9a1f4490dd2b0649e6c67ee89b032f7fcc8f35b
