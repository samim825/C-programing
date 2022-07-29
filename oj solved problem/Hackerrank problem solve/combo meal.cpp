#include<bits/stdc++.h>
using namespace std;
int profit(int a,int b, int c)
{
    return a+b-c;
}
int main()
{

    int t;
    cin>>t;
    while(t>0)
    {



        int burger,soda,comboMeal;
        cin>>burger>>soda>>comboMeal;

        int ans = profit(burger,soda,comboMeal);
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
