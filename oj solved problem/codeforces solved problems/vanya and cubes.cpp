#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,sum=0,cnt=0;

    cin>>n;

    int x=1;
    while(1)
    {

        for(int j=1; j<=x; j++)
        {
            sum=sum+j;
        }

        x++;
        if(sum>n)
            break;
        else
            cnt++;
    }




    cout<<cnt<<endl;

    return 0;
}
