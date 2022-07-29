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

    int n,b;
    while(cin>>n &&n)
    {
        for(int a=3; a<n; a++)
        {
            if(isPrime(a))
            {
                b = n-a;
                if(isPrime(b))
                {
                    cout<<n<<" = "<<a<<" + "<<b<<endl;
                    break;
                }
            }

        }
    }

}
