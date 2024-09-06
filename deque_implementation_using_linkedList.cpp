#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int data) {
            this->data = data;
            next = NULL;
            prev = NULL;
        }
};

class Deque {
    public:
        int s;
        Node* head;
        Node* tail;

        Deque() {
            s = 0;
            head = tail = NULL;
        }

        void push_back(int val) {
            Node* temp = new Node(val);
            if(s == 0) {
                head = tail = temp;
            } else {
                tail->next = temp;
                temp->prev = tail;
                tail = temp;
            }
            s++;
        }

        void push_front(int val) {
            Node* temp = new Node(val);
            if(s == 0) {
                head = tail = temp;
            } else {
                temp->next = head;
                head->prev = temp;
                head = temp;
            }
            s++;
        }

        void pop_front() {
            if(s == 0) {
                cout << "Queue is empty" << endl;
                return;
            }
            Node* temp = head;
            head = head->next;
            if(head) head->prev = NULL;
            else tail = NULL; // when deque becomes empty
            delete temp;
            s--;
        }

        void pop_back() {
            if(s == 0) {
                cout << "Queue is empty" << endl;
                return;
            }
            Node* temp = tail;
            tail = tail->prev;
            if(tail) tail->next = NULL;
            else head = NULL; // when deque becomes empty
            delete temp;
            s--;
        }

        int front() {
            if(s == 0) {
                cout << "Queue is empty" << endl;
                return -1;
            } else {
                return head->data;
            }
        }

        int back() {
            if(s == 0) {
                cout << "Queue is empty" << endl;
                return -1;
            } else {
                return tail->data;
            }
        }

        void display() {
            Node* temp = head;
            while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        int size() {
            return s;
        }
};

int main() {
    Deque dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    dq.display();

    dq.pop_back();
    dq.display();
   deque<int> dq; //STL in Queue
    return 0;
}
