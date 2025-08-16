<<<<<<< HEAD
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <set>
//
//using namespace std;
//
//int solution(vector<int> nums);
//vector<int> nums = { 3, 3, 3, 2, 2, 2 };
//
//set <int> poketmonSet;
//
////int main() {
//    solution(nums);
//}
//
//int solution(vector<int> nums)
//{
//    for (int i : nums) {
//        poketmonSet.insert(i);
//    }
//
//    if (poketmonSet.size() > (nums.size() / 2)) {
//        return (nums.size() / 2);
//    }
//    else {
//        return poketmonSet.size();
//    }
//
//    return 0;
//
//}
=======
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int solution(vector<int> nums);
vector<int> nums = { 3, 3, 3, 2, 2, 2 };

set <int> poketmonSet;

int main() {
    solution(nums);
}

int solution(vector<int> nums)
{
    for (int i : nums) {
        poketmonSet.insert(i);
    }

    if (poketmonSet.size() > (nums.size() / 2)) {
        return (nums.size() / 2);
    }
    else {
        return poketmonSet.size();
    }

    return 0;

}
>>>>>>> f9a1f4490dd2b0649e6c67ee89b032f7fcc8f35b
