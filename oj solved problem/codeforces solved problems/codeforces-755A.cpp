#include<bits/stdc++.h>
using namespace std;

bool isPrime(int prime)
{
    if(prime == 2 || prime ==3 ){
        return true;
    }
    int flag = 0;
    for(int i=2; i*i<=prime; i++)
    {
        if(prime%i==0)
        {
            flag = 0;
        }
        else
        {
            flag = 1;
        }
    }

    if(flag ==0)
        return false;
    else
        return true;

}
int main()
{

    int n,m=1;
    cin>>n;
    smm:
        if(isPrime(n*m+1) == true)
        {
            m++;
            goto smm;
        }
        else
        {
            cout<<m<<endl;
        }

}
