#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m[101],c[101],pointOfMishka=0,pointOfChris=0;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>m[i]>>c[i];
    }
    for(int i=0; i<n; i++)
    {
        if(m[i]>c[i])
        {
            pointOfMishka++;
        }
        else if(c[i]>m[i])
        {
            pointOfChris++;
        }
    }

    if(pointOfMishka>pointOfChris)
    {
        cout<<"Mishka"<<endl;
    }
    else if(pointOfChris>pointOfMishka)
    {
        cout<<"Chris"<<endl;
    }
    else
        cout<<"Friendship is magic!^^"<<endl;

    return 0;
}
