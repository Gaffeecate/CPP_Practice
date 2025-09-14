//#include <iostream>
//using namespace std;
//
//// 노드 클래스
//class Node {
//public:
//    int data;
//    Node* next;
//
//    Node(int value) : data(value), next(nullptr) {}
//};
//
//// 연결리스트 클래스
//class LinkedList {
//private:
//    Node* head;
//    int size;
//
//public:
//    // 생성자
//    LinkedList() : head(nullptr), size(0) {}
//
//
//    // 앞에 삽입
//    void insertFront(int value) {
//
//        Node* newNode = new Node(value);
//        newNode->next = head;
//        head = newNode;
//        size++;
//        cout << "앞에 " << value << " 삽입 완료" << endl;
//    }
//
//    // 뒤에 삽입
//    void insertBack(int value) {
//        Node* newNode = new Node(value);
//
//        if (head == nullptr) {
//            head = newNode;
//        }
//        else {
//            Node* temp = head;
//            while (temp->next != nullptr) {
//                temp = temp->next;
//            }
//            temp->next = newNode;
//        }
//        size++;
//        cout << "뒤에 " << value << " 삽입 완료" << endl;
//    }
//
//    // 특정 위치에 삽입 (0부터 시작)
//    void insertAt(int targetValue, int value) {
//
//        if (head == nullptr) {
//            cout << "리스트가 비어있음" << endl;
//            return;
//        }
//
//        if (head->data == value) {
//            insertFront(value);
//            return;
//        }
//
//        Node* currNode = head;  // head부터 시작
//
//        while (currNode->next != nullptr && targetValue != currNode->next->data) {
//            currNode = currNode->next;
//        }
//
//        if (currNode->next != nullptr) {
//            Node* newNode = new Node(value);
//            Node* temp = currNode->next;
//            currNode->next = newNode;
//            newNode->next = temp;  // 이렇게만 하면 됨
//        }
//    }
//
//
//    // 특정 값 삭제
//    void deleteValue(int value) {
//        if (head == nullptr) {
//            cout << "리스트가 비어있음" << endl;
//            return;
//        }
//
//        Node* currNode = head;  // head부터 시작
//
//        if (head->data == value) { // 첫번째 값 제거
//            head = head->next;
//            currNode = head;
//        }
//
//        while (currNode->next != nullptr && value != currNode->next->data) {
//            currNode = currNode->next;
//        }
//
//        if (currNode->next != nullptr) {
//            Node* delNode = currNode->next;
//            currNode->next = currNode->next->next;
//            delete delNode;
//        }
//    }
//
//    // 리스트 출력
//    void display() {
//        if (head == nullptr) {
//            cout << "리스트가 비어있음" << endl;
//            return;
//        }
//
//        cout << "리스트: ";
//        Node* temp = head;
//        while (temp != nullptr) {
//            cout << temp->data;
//            if (temp->next != nullptr) {
//                cout << " -> ";
//            }
//            temp = temp->next;
//        }
//        cout << " (크기: " << size << ")" << endl;
//    }
//};
//
//// 테스트용 메인 함수
//int main() {
//    LinkedList list;
//
//    // 뒤에 삽입 테스트
//    list.insertBack(10);
//    list.insertBack(20);
//    list.insertBack(30);
//    list.display();
//
//    // 앞에 삽입 테스트
//    list.insertFront(5);
//    list.display();
//
//    list.deleteValue(5);
//    list.deleteValue(20);
//    list.display();
//
//
//    list.insertBack(90);
//    list.insertBack(80);
//    list.insertBack(70);
//    list.display();
//
//    // 중간 삽입 테스트
//    list.insertAt(90, 15);
//    list.display();
//
//
//    list.deleteValue(90);
//    list.display();
//
//
//    return 0;
//}