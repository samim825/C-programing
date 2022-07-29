#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a;
    cin>>a;
smm:
    int   sumOfDigit = 0;
    int num = a;
    while(a>0)
    {
        int mod = a%10;
        sumOfDigit = sumOfDigit+mod;
        a = a/10;
    }
    a = num;
    if(sumOfDigit%4==0)
    {
        cout<<num;
    }
    else
    {
        a++;
        goto smm;

    }

}
