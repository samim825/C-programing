#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,a[1001];
    cin>>t;

    while(t>0)
    {
        int odd=0,even=0;
        cin>>n>>x;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd==0)
            cout<<"NO"<<endl;

        else if(x==n)
        {
            if(odd%2!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(x%2==0)
        {
            if(even>0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
        t--;
    }
    return 0;

}
