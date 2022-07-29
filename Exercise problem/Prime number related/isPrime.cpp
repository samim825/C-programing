//Complexity of this code is 0(sqrt(n))

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{

if(n<2) return false;
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

int main()
{

    int n;
    cin>>n;

    if(isPrime(n))
    {
        cout<<n<<" is prime."<<endl;
    }
    else
    {
        cout<<n<<" is not prime."<<endl;
    }


}
