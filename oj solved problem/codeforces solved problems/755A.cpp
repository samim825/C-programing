#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,existingMinutes = 240,i,attendingContest=0;
    cin>>n>>k;
    existingMinutes -=k;
    for( i=1; i<=n; i++)
    {
        if(existingMinutes<5*i)
        {
            break;
        }
        existingMinutes -= 5*i;
        attendingContest = i;

    }

    cout<<attendingContest<<endl;

    return 0;
}
