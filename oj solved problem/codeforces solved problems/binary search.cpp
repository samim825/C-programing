#include<bits/stdc++.h>
using namespace std;
int main()
{


    int arr[] = {10, 20, 30, 40, 50} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    int preSum[n];
    preSum[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        preSum[i] = preSum[i-1] + arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<preSum[i]<<endl;

    }

    int l,r;
    cin>>l>>r;
    if(l<1 || r>n){
        cout<<"please enter a valid range. "<<endl;
    }
    else if(l==1){
        cout<<preSum[r-1]<<endl;
    }else{
        cout<<preSum[r-1]-preSum[l-1]<<endl;
    }

}
