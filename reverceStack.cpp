#include<iostream>
#include<stack>
using namespace std;

void insertAtbottom(stack<int> &st, int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int to=st.top();
    st.pop();
    insertAtbottom(st,ele);

    st.push(to);


}

void reverce(stack<int> &st){
   
     if(st.empty()){
         return;
     }
    int ele=st.top();
    st.pop();
    reverce(st);
    insertAtbottom(st,ele);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverce(st);
    while(! st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}