#include<bits/stdc++.h>
using namespace std;
bool isPrime[90000001];
int n = 90000000;
vector<int> primes;
void primeNumbers()
{

    isPrime[0] = true;
    isPrime[1] = true;

    for(int i=2; i*i<=n; i++)
    {
        if(isPrime[i] == false)
        {
            for(int j=i+i; j<=n; j = j+i)
            {
                isPrime[j] = true;
            }
        }
    }

    for(int i=0; i<=n; i++){
            if(isPrime[i]==false){
                primes.push_back(i);
            }

    }
}

int main()
{

    primeNumbers();
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;

        cout<<primes[k-1]<<endl;
    }
    return 0;

}


