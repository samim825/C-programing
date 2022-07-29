#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[101], f[101];
    while(cin>>n)
    {


        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        bool flag =0;
        //we have to check the given array is sorted in ascending or not
        //If the array is sorted in ascending then it will "Yes" or "No"
        //The complexity will be O(n)
        for(int i=1; i<n; i++)
        {
            if(a[i] < a[i-1])
            {
                flag = 1;
                break;
            }
        }

        if(flag)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }

    }

    return 0;
}


