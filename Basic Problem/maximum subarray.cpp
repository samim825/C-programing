#include<bits/stdc++.h>
using namespace std;
int main()
{

    // If an array contain n elements , Then total n(n+1)/2 sub array is possible;

    int size;
    cin>>size;
    int arr[size+1];

    for(int i=0; i<size; i++)
    {

        cin>>arr[i];
    }

    cout<<"Enter the sub array size :";
    int k;
    cin>>k;

    int sum=0, maxSum =0;
    for(int i=0; i<size; i++)
    {
        if(i<k)
        {

            sum +=arr[i];
        }
        else
        {
            maxSum = max(maxSum, sum);
            sum = sum + arr[i] - arr[i-k];
        }
    }

    maxSum = max(sum, maxSum);

    cout<<"Maximum sum :"<<maxSum<<endl;


}

