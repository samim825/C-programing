#include<bits/stdc++.h>
using namespace std;
void sieve(int r)
{

    vector<bool> isPrime(r+1, true);
    isPrime[0] = false;
    isPrime[1] = false;

    for(int i=2; i*i<=r; i++)
    {
        if(isPrime[i]==true)
        {
            for(int j=i+i; j<=r; j=j+i)
            {
                isPrime[j] = false;
            }
        }
    }

    int cnt = 0;
    for(int i=0; i<=r; i++)
    {
        if(isPrime[i])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main()
{

    int t, l, r;
    cin>>t;
    while(t>0)
    {
        cin>>l>>r;
        sieve(r);
        t--;
    }
}
