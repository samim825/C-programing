
#include<bits/stdc++.h>
using namespace std;
void primeFactorization(int n)
{

    for(int i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                cnt++;
                n=n/i;
            }
            cout<<i<<"^"<<cnt<<endl;
        }
    }
}

int main()
{

    int n;
    cin>>n;
    primeFactorization(n);
}
