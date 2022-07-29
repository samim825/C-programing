#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y, p[101], q[101], flag=0;

    cin>>n;
    cin>>x;
    for(int i=0; i<x; i++)
    {
        cin>>p[i];
    }
    cin>>y;
    for(int i=0; i<y; i++)
    {
        cin>>q[i];
    }

    int xy = max(x,y);
    for(int i=0; i<xy; i++){
        if(p[i]==n || q[i]==n)
    {
        cout<<"I become the guy."<<endl;
        flag=1;
        break;
    }
    }

    if(flag==0)
    {
        cout<<"Oh, my keyboard!"<<endl;

    }

    return 0;

}
