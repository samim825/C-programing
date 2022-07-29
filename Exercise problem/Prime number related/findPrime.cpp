//Complexity of this code is 0(n * sqrt(n))

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{

    if(n<2)
        return false;

    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{

    int lowerValue,upperValue,cnt=0;

    cin>>lowerValue>>upperValue;

    for(int i=lowerValue; i<=upperValue; i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" is Prime."<<endl;
            cnt++;
        }

    }
    cout<<"Total prime number is : "<<cnt<<endl;
    return 0;
}
