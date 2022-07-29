#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100001],numberOfPolice=0,untreated=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==-1 && numberOfPolice==0)
        {
            untreated++;
        }
        else if(a[i]==-1 && numberOfPolice>0)
        {
            numberOfPolice = numberOfPolice-1;
        }
        else if(a[i]>0)
        {
            numberOfPolice = numberOfPolice+a[i];
        }
    }
    cout<<untreated<<endl;
    return 0;

}
