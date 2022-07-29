#include<bits/stdc++.h>
using namespace std;
int main(){

int number1,number2,gcd=1;
cout<<"Enter two numbers : ";
cin>>number1>>number2;

int minimum = (number1<number2)? number1:number2;

cout<<"Minimum number is : "<<minimum;

for(int i=1;i<=minimum;i++){

    if(number1%i==0 && number2%i==0){
        gcd = i;
    }
}

cout<<"GCD = "<<gcd;

}
