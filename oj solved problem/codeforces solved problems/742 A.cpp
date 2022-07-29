#include<bits/stdc++.h>
using namespace std;
int binaryExponentiation(int base, int power, int mod){
    int result = 1;

    while(power>0){
        if(power%2==0){
            base = (base*base)%mod;
            power/=2;
        }else{
            result = (result*base)%10;
            power --;
        }
    }

    return result;
}

int main(){

int power;
cin>>power;
cout<<binaryExponentiation(8, power, 10);
}
