#include "bits/stdc++.h"
using namespace std;

class que{
   stack<int> st1;
  

   public:
   void push(int x){
        st1.push(x);
   }

   int pop(){
       if(st1.empty() ){
          cout<<"queue is empty"<<endl;
          return -1;
       }
        
        int x=st1.top();
        st1.pop();
        if(st1.empty()){
            return x;
        }
        int item = pop();
        st1.push(x);
        return item;
   }

   bool empty(){
       if(st1.empty()  ){
          return true;
       }

       return false;
   }
};

int main(){
   que q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   cout<<q.pop()<<endl;

   q.push(5);

   cout<<q.pop()<<endl;

cout<<q.pop()<<endl;

cout<<q.pop()<<endl;

cout<<q.pop()<<endl;

cout<<q.pop()<<endl;


}