#include<bits/stdc++.h>
using namespace std;
int main(){

int number,countDigit = 0,power = 1,sum = 0;
cin>>number;
int armstrong = number;

while(number>0){
    number=number/10;
    countDigit++;
}
cout<<countDigit<<endl;

number = armstrong;

while(number>0){
    int mod = number%10;
    for(int i=1;i<=countDigit;i++){
         power = power*mod;
    }
    sum = sum+power;

    number = number/10;
    power=1;

}
cout<<"The sum of total digit power is "<<sum<<endl;
if(sum==armstrong)
    cout<<"This number is Armstrong ";
else
    cout<<"This number is not Armstrong ";

}
