#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, a[1000001],cnt=1, cnt1=0;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]<=a[i+1])
        {
            cnt++;
        }
        else
        {
            if(cnt>cnt1)
            {
                cnt1 = cnt;
            }
            cnt=1;
        }
    }
    cout<<cnt1<<endl;
    return 0;
}
