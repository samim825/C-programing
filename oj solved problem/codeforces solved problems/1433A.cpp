#include<bits/stdc++.h>
using namespace std;
int countDigit(int n)
{
    if (n == 0)
        return 0;
    return 1 + countDigit(n / 10);
}
int main()
{
    int n,t,ans;
    cin>>t;
    while(t--)
    {

        cin>>n;
        ans = ((n%10)-1)*10;
        for(int i=1; i<=countDigit(n); i++)
        {

            ans += i;
        }
        cout<<ans<<endl;
    }
    return 0;
}

