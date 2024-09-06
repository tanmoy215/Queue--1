#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>& q){    //display queue
        int n=q.size();
     for(int i=0;i<n;i++){
        int m = q.front();
        q.pop();
        cout<<m<<" ";
        q.push(m);
     }
     cout<<endl;
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
     display(q);
     q.pop();
     display(q);
    return 0;
}