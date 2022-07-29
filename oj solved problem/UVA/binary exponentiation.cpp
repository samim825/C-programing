#include<bits/stdc++.h>
using namespace std;
int binaryExponentiation(int base, int power){
    int result = 1;

    while(power>0){
        if(power%2==0){
            base *=base;
            power/=2;
        }else{
            result *=base;
            power --;
        }
    }

    return result;
}

int main(){

int base, power;
cin>>base>>power;
cout<<binaryExponentiation(base, power);
}
