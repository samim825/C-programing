#include<bits/stdc++.h>
using namespace std;

class Stack{
    int size;
    int top;

public:
    int a[5];
    Stack(int n){
        size = n;
        top = -1;
    }

    void push(int data){
        if(top >= size-1){
            cout<<"Overflow."<<endl;
            return;
        }
        a[++top] = data;
    }

    void pop(){
        if(top<0){
            cout<<"Underflow."<<endl;
            return;
        }
        top--;

    }

    int peek(){
        return a[top];
    }

    int isEmpty(){
        if(top<0){
            return true;
        }
        else
            return false;
    }

};

int main(){

    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    while(!s.isEmpty()){
        int val = s.peek();
        cout<<val<<" ";
        s.pop();
    }
    cout<<"Top value : "<< s.peek();
    return 0;
}
