// A year is called leap year if it is divide by 400 and divide by 4 but not divide by 100

#include<bits/stdc++.h>
using namespace std;
int main(){

    int year;
    cin>>year;

    if(year%400==0 || (year%4==0 && year%100!=0)){
        cout<<"Leap year"<<endl;
    }else{
        cout<<"Not leap year"<<endl;
    }
    return 0;
}

