//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//vector<string> phone_book = { "119", "97674223", "1195524421" };
//
//int main()
//{
//    bool solution(vector<string> phone_book);
//}
//
//bool solution(vector<string> phone_book) {
//    sort(phone_book.begin(), phone_book.end());
//    for (int i = 0; i + 1 < phone_book.size(); i++) {
//        if (phone_book[i].size() < phone_book[i + 1].size() && (phone_book[i + 1].compare(0, phone_book[i].size(), phone_book[i]) == false)) {
//            return false;
//        }
//    }
//    return true;
//}
