#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class Queue{
 public:
  Node* head;
  Node* tail;
  int size;
  Queue(){
    size = 0;
    head = tail = NULL;
  }
  void push(int val){
     Node* temp = new Node(val);
     if(size==0) head = tail = temp;
     else{
     tail->next = temp;
     tail = temp;
     }
     size++;
  }
  void pop(){
     if(size==0){
        cout<<"Linked List is Empty !"<<endl;
        return;
     }
     else{
        Node* temp = head;
        head = head->next;
        delete(temp); //permanently delete the temp Node
        size--;
     }
  }
  int front(){
     if(size==0){
         cout<<"enpty Queue"<<endl;
         return -1;
     }
     else{
        return head->data;
     }
  }
  int sizee(){
     return size;
  }
  int back(){
      if(size==0){
         cout<<"enpty Queue"<<endl;
         return -1;
     }
     else{
        return tail->data;
     }
  }
  void display(){
     Node* temp = head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
     }
     cout<<endl;
  }
};
int main(){
       Queue q;
       q.push(10);
       q.push(20);
       q.push(30);
       q.push(40);
       q.push(50);
       q.display();
       q.pop();
       q.display();
       cout<<q.back()<<endl;      
       cout<<q.front()<<endl;
       cout<<q.sizee()<<endl;
    return 0;
}