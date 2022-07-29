#include<bits/stdc++.h>
using namespace std;
int primeFactorization(int n)
{

    int cnt = 0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            cnt++;
            while(n%i==0)
            {
                n=n/i;
            }
        }
    }
    if(n>1){
        cnt++;
    }

    return cnt;
}

int main()
{

    int n;
    while(cin>>n){
            if(n==0){
                break;
            }
        cout<<n<<" : "<<primeFactorization(n)<<endl;
    }

}

