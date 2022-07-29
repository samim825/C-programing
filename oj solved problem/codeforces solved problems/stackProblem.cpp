#include<bits/stdc++.h>
using namespace std;
int main(){

stack<int> s;

s.push(12);
s.push(14);
cout<<s.top()<<endl;
s.pop();

cout<<s.top()<<endl;

if(s.empty()){
    cout<<"empty"<<endl;
}else{
    cout<<"Not empty"<<endl;
}

cout<<s.size();




}
