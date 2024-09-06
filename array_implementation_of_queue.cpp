#include<bits/stdc++.h>
using namespace std;
#define n 5
class Queue{
   public:
    int f;
    int b;
    int arr[n];
    Queue(){
        f=b=0;
    }
    void push(int val){
        if(b==n){
            cout<<"Queue is Full !"<<endl;
            return;
        }
        arr[b]=val;
        b++;
    }
    void pop(){
        if((f-b)==0){
            cout<<"Queue is Empty !"<<endl;
            return;
        }
        f++;
    }
    int front(){
        if((b-f)==0){
            cout<<"Queue is Empty !"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if((b-f)==0){
            cout<<"Queue is Empty !"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return b-f;
    }
    bool empty(){
         if((b-f)==0) return true;
         else return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
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
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    q.push(90);
    q.push(89);
    q.push(78);
     return 0;
}