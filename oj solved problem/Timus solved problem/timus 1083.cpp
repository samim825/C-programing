#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,sum=1;
    string str;

    cin>>n>>str;

    int k = str.size();

    while(n>1){
        sum = sum*n;
    n=n-k;
    }



    cout<<sum<<endl;
    return 0;
}
