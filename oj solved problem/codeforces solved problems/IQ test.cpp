#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],odd=0,even=0,position=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    for(int i=1; i<=n; i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(even>odd)
    {
        for(int i=1; i<=n; i++)
        {
            if(a[i]%2!=0)
            {
                position=i;
            }
        }
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            if(a[i]%2==0)
            {
                position=i;
            }
        }

    }

    cout<<position<<endl;

    return 0;
}
