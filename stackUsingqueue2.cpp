#include<bits/stdc++.h>
#include<queue>
using namespace std;

class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;


    public:
   Stack(){
       N = 0;

   }

   void pop(){
       if(q1.empty()){
           return;
       }

       while(q1.size() != 1){
           q2.push(q1.front());
           q1.pop();

       }

       q1.pop();
       N--;
       
       queue<int> t = q1;
       q1 = q2;
       q2 = t;

   }

   void push(int val){
       q1.push(val);
       N++;

   }

   int top(){
       if(q1.empty())
          return -1;

        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans =q1.front();
    q2.push(ans);

    queue<int> te = q1; 
    q1 = q2; 
    q2 = te;

    return ans;
   }
};

int main(){
    Stack s;
    s.push(1);
       s.push(2);
          s.push(3);
             s.push(4);
             cout<<s.top()<<endl;
}