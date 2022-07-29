#include<bits/stdc++.h>
using namespace std;
bool isSquare(int n)
{
    for(int i=1; i*i<=n; i++)
    {
        if((n%i==0)&&(n/i==i))
        {
            return true;
        }

    }
    return false;
}

int main()
{
    int t,a1,b1,a2,b2,sum;

    cin>>t;
    while(t>0)
    {
        cin>>a1>>b1>>a2>>b2;
        sum = (a1*b1)+(a2*b2);

        if(isSquare(sum))
        {
            cout<<"YES"<<endl;
        }

        else
            cout<<"NO"<<endl;



        t--;
    }

    return 0;
}
