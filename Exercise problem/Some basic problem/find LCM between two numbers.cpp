#include<bits/stdc++.h>
using namespace std;
int main(){

int number1,number2,maximum,lcm,i;
cout<<"Enter two numbers : ";
cin>>number1>>number2;

maximum =(number1>number2)? number1:number2;
cout<<"The maximum is :"<<maximum<<endl;
 i=maximum;

while(1){
    if(i%number1==0 && i%number2==0){
         lcm = i;
        break;
    }
    else{
        i=i+maximum;
    }
}

cout<<"The LCM of "<<number1<<" and "<<number2<< " is "<<lcm<<endl;

}
