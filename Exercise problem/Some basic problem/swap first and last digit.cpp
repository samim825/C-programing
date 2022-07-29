#include<bits/stdc++.h>
using namespace std;
int main(){

int number,swapNumber=0;

cout<<"Enter the number ";
cin>>number;

while(number>0){
    int mod = number%10;
    swapNumber = swapNumber*10 +mod;
    number = number/10;
}

cout<<"The swap number is : "<<swapNumber<<endl;
}
