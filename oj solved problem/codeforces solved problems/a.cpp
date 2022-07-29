#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, k;
    int arr[10001];

    while(cin>>n>>k)
    {
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        sort(arr, arr + n, greater<int>());

        cout<<arr[k-1]<<endl;

        // Here we have to find kth maximum value from an array
        // After sorting in descending order the array , we can return (k-1)th value, which is the kth maximum value
        // The time complexity is O(nlogn)

    }


}

