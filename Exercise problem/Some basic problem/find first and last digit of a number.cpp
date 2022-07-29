#include<bits/stdc++.h>
using namespace std;
int main(){

    int num,countDigit=1;
    cout<<"Enter the number :";
    cin>>num;
    int lastDigit = num%10;

    while(num> 9){
        num = num%10;
    }
    cout<<"First digit is :"<<num<<endl;
    cout<<"Last  digit is :"<<lastDigit<<endl;
}
