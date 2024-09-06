#include<iostream>
#include<queue>
#include<stack>
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
void reverse(queue<int>& q){    //reverse queue using stack
        stack<int> st;
        int n = q.size();
        for(int  i=0;i<n;i++){
            st.push(q.front());
            q.pop();
        }
        while(st.size()>0){
            int m = st.top();
            st.pop();
            q.push(m);
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
    reverse(q);
    display(q);
    return 0;
}