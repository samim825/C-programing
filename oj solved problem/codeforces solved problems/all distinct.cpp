#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int sizeOfArray = sizeof(a)/sizeof(a[0]);
        int cnt = sizeOfArray;
        for(int i=0; i<sizeOfArray; i++)
        {
            for(int j=i+1; j<sizeOfArray; j++)
            {
                if(a[i]==a[j])
                {
                    for(int k=j; k<sizeOfArray-1; k++){
                        a[k] = a[k+1];
                    }
                    sizeOfArray--;
                    j--;
                }
            }
        }

        if(cnt%2!=0){
            sizeOfArray--;
        }
        cout<<sizeOfArray<<endl;
    }
}
