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

    int n;
    cin>>n;

    vector<bool> prime = primeNumbers(n);

    cout<<"The prime numbers are : ";

    for(int i = 0; i<=n; i++)
    {
        if(prime[i] == true)
        {
            cout<<i<<" ";
        }
    }

}


