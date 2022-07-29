#include<bits/stdc++.h>
using namespace std;
int countSum(string s)
{

    if(s=="Tetrahedron")
    {
        return 4;
    }
    else if(s=="Cube")
    {
        return 6;
    }
    else if(s=="Octahedron")
    {
        return 8;
    }
    else if(s=="Dodecahedron")
    {
        return 12;
    }
    else if(s=="Icosahedron")
    {
        return 20;
    }
}
int main()
{


    int n,a,sum=0;
    string s;

    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>s;
        a= countSum(s);
        sum = sum+a;
    }
    cout<<sum<<endl;
    return 0;
}
