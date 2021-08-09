#include<iostream>
using namespace std;
#define n 20
class queue{
   int* arr;
   int front;
   int back;
    public:
   queue(){
       arr= new int[n];
       front=-1;
       back=-1;

   }

   void push(int x){
       if (back==n-1){
           cout<<"queue is full";
           return;
       }
       back++;
       arr[back]=x;
       if(front==-1){
           front++;
       }
   }

   void pop(){
       if(front==-1 && front>back){
           cout<<"no ele in queue"<<endl;
           return;

       }

       front++;

   }

   int peek(){
        if(front==-1 && front>back){
           cout<<"no ele in queue"<<endl;
           return -1;

       }

       return arr[front];


   }

   bool empty(){
        if(front==-1 && front>back){
          
           return true;

       }
       return false;
   }
};

int main(){
    queue s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
   cout<< s.peek()<<endl;
   s.pop();
    cout<< s.peek()<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<s.empty()<<endl;
}