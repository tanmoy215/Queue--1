#include<bits/stdc++.h>
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
void removeElement(queue<int>& q){
       int n=q.size();
       for(int i=0;i<n;i++){
        if(i%2!=0){   //odd index
            int x = q.front();
            q.pop();
            q.push(x);
        }
        else{   //even index
                q.pop();
          }
       }
}
int main(){
     queue<int> q;
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     q.push(50);
     display(q);
     removeElement(q);
     display(q);
    return 0;
}