#include<bits/stdc++.h>
using namespace std;

vector<bool> primeNumbers(int n)
{
    vector<bool> isPrime(n+1,true);

    isPrime[0] = false;
    isPrime[1] = false;

    for(int i=2; i<=n; i++)
    {
        if(isPrime[i] == true)
        {
            for(int j=i+i; j<=n; j = j+i)
            {
                isPrime[j] = false;
            }
        }
    }

    return isPrime;
}

int main()
{

    int k,t;
    cin>>t;
    while(t>0)
    {
        cin>>k;
        vector<int> result;
        vector<bool> prime = primeNumbers(5000000);

        for(int i = 0; i<=5000000; i++)
        {
            if(prime[i])
            {
                result.push_back(i);
            }
        }

        cout<<result[k-1]<<endl;
        t--;
    }

}


