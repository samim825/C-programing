#include<bits/stdc++.h>
using namespace std;
bool isSquare(int n)
{
    for(int i=1; i*i<=n; i++)
    {
        if((n%i==0)&&(n/i==i))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int number;

    cin>>number;

    if(isSquare(number)){
        cout<<"YES";
    }
    else cout<<"NO";



        return 0;
}

