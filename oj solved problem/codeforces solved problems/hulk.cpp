#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    string a,ans="I hate";
    cin>>n;

    if(n==1){
        ans="I hate it";
        cout<<ans<<endl;
    }else{
    for(int i=2; i<=n; i++)
    {
        if(i%2!=0)
        {
            a= "I hate";
        }
        else if(i%2==0)
        {
            a = "I love";
        }
        ans = ans+" that "+a;
    }


    cout<<ans<<" it."<<endl;
    }
    return 0;
}


