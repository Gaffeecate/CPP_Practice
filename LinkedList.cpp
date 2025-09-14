//#include <iostream>
//using namespace std;
//
//// ��� Ŭ����
//class Node {
//public:
//    int data;
//    Node* next;
//
//    Node(int value) : data(value), next(nullptr) {}
//};
//
//// ���Ḯ��Ʈ Ŭ����
//class LinkedList {
//private:
//    Node* head;
//    int size;
//
//public:
//    // ������
//    LinkedList() : head(nullptr), size(0) {}
//
//
//    // �տ� ����
//    void insertFront(int value) {
//
//        Node* newNode = new Node(value);
//        newNode->next = head;
//        head = newNode;
//        size++;
//        cout << "�տ� " << value << " ���� �Ϸ�" << endl;
//    }
//
//    // �ڿ� ����
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
//        cout << "�ڿ� " << value << " ���� �Ϸ�" << endl;
//    }
//
//    // Ư�� ��ġ�� ���� (0���� ����)
//    void insertAt(int targetValue, int value) {
//
//        if (head == nullptr) {
//            cout << "����Ʈ�� �������" << endl;
//            return;
//        }
//
//        if (head->data == value) {
//            insertFront(value);
//            return;
//        }
//
//        Node* currNode = head;  // head���� ����
//
//        while (currNode->next != nullptr && targetValue != currNode->next->data) {
//            currNode = currNode->next;
//        }
//
//        if (currNode->next != nullptr) {
//            Node* newNode = new Node(value);
//            Node* temp = currNode->next;
//            currNode->next = newNode;
//            newNode->next = temp;  // �̷��Ը� �ϸ� ��
//        }
//    }
//
//
//    // Ư�� �� ����
//    void deleteValue(int value) {
//        if (head == nullptr) {
//            cout << "����Ʈ�� �������" << endl;
//            return;
//        }
//
//        Node* currNode = head;  // head���� ����
//
//        if (head->data == value) { // ù��° �� ����
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
//    // ����Ʈ ���
//    void display() {
//        if (head == nullptr) {
//            cout << "����Ʈ�� �������" << endl;
//            return;
//        }
//
//        cout << "����Ʈ: ";
//        Node* temp = head;
//        while (temp != nullptr) {
//            cout << temp->data;
//            if (temp->next != nullptr) {
//                cout << " -> ";
//            }
//            temp = temp->next;
//        }
//        cout << " (ũ��: " << size << ")" << endl;
//    }
//};
//
//// �׽�Ʈ�� ���� �Լ�
//int main() {
//    LinkedList list;
//
//    // �ڿ� ���� �׽�Ʈ
//    list.insertBack(10);
//    list.insertBack(20);
//    list.insertBack(30);
//    list.display();
//
//    // �տ� ���� �׽�Ʈ
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
//    // �߰� ���� �׽�Ʈ
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