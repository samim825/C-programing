#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    cin>>n;

    int totalCups = a1+a2+a3;
    int totalMedals = b1+b2+b3;
    int selfNeedForCups,selfNeedForMedals;

    if(totalCups%5==0)
    {
        selfNeedForCups = totalCups/5;
    }
    else
        selfNeedForCups = (totalCups/5)+1;

    if(totalMedals%10==0)
    {
        selfNeedForMedals = totalMedals/10;
    }
    else
        selfNeedForMedals = (totalMedals/10)+1;

    int totalNeededSelf = selfNeedForCups+selfNeedForMedals;

    if(n<totalNeededSelf)
    {
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;

    return 0;
}
