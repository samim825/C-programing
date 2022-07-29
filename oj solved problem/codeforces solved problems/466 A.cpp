#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,a,b,totalCost=0;

    cin>>n>>m>>a>>b;

    int cost = n*a;


    if(b<a){
        cost = ((n/m)+1)*b;
    }

    if(m<n){
        int costOfB = (n/m)*b;
        int costOfA = (n%m)*a;
        totalCost = costOfA+costOfB;
    }else if(m>n){
        totalCost = b;
    }

    if(cost==1){
        cout<<cost<<endl;
    }
    else if(cost<totalCost)
    {
        cout<<cost<<endl;
    }
    else
    {
        cout<<totalCost<<endl;

    }
    return 0;
}
