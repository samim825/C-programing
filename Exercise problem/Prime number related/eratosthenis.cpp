#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool isPrime(int n)
{

    if(n<2)
        return false;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
            break;
        }
    }
    return true;

}


vector<int> getPrimes(int n)
{
    vector<int> primes;

    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }

    return primes;
}

int main()
{
    int n;
    cin>>n;


    vector<int> pr = getPrimes(n);
    int vectorSize = pr.size();
    cout<<vectorSize<<endl;
    for(int i=0;i<vectorSize;i++){
        cout<<pr[i]<<endl;
    }

}
