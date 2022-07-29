#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{

    if(n<1)
        return false;


    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n,a,mod;
    while((scanf("%d",&n)) ==1){
        a = n;
        int m=0;
    while(a>0){
        mod = a%10;
        m = (m*10)+mod;
        a = a/10;
    }

    if(isPrime(n) && isPrime(m) && n!=m)
    {
        cout<<n<<" is emirp."<<endl;
    }
    else if(isPrime(n))
    {
        cout<<n<<" is prime."<<endl;
    }
    else if(!isPrime(n))
    {
        cout<<n<<" is not prime."<<endl;
    }
    }

}
