#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,s,x[10001],y[10001];

    cin>>s>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=0; i<n-1; i++)
    {

            s=s+y[i];

    }
    if(s>x[n-2])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
