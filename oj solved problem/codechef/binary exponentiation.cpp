#include<bits/stdc++.h>
using namespace std;
int binaryExponentiation(int base, int power)
{
    int result = 1;
    for(int i=1; i<=power; i++)
    {
        result *= base;
    }
    return result;
}

int binaryExponentiationInShortTime(int base, int power)
{

    int result = 1;
    while(power){
        if(power%2==0)
    {
        base*=base;
        power/=2;
    }
    else{
        result*=base;
        power--;
    }
    }

    return result;

}

int main()
{

    int base, power;
    cin>>base>>power;

    cout<<binaryExponentiationInShortTime(base,power)<<endl;
}
