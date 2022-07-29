#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, a[51],b[51],k=1;

    cin>>n;

    for(int i=0; i<n; i++)
    {

        cin>>a[i];
        b[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        cout<<"Value of K is : "<<k<<endl;
        int m=k;
        for(int j=0; j<m; j++)
        {
            if(b[j]==a[i])
            {
                cout<<"If block visited. "<<endl;
                break;
            }
            else
            {
                cout<<"Else block visited. The value of k is : "<<k<<endl;;
                b[k]=a[i];
                k++;
                break;
            }
        }
    }
    cout<<"Value of K is : "<<k<<endl;
    for(int i=0; i<k; i++)
    {
        cout<<b[i]<<endl;
    }
}
