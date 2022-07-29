#include<bits/stdc++.h>
using namespace std;
int main(){

int number,factorial=1;
cout<<"Enter the number :";
cin>>number;

for(int i=number;i>0;i--){
    factorial = factorial*i;
}
cout<<"The factorail of "<<number<<" is : "<<factorial;

}
