#include<bits/stdc++.h>
using namespace std;
int main(){

    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];

    cout<<endl<<"Enter the elements of the array : ";
    for(int i=0; i<size; i++){

        cin>>arr[i];
    }

    cout<<"Enter the size of the sub array : ";

    int k;
    cin>>k;
    int sum = 0;
    int maxSum = 0;
    for(int i=0; i<k; i++){
        maxSum += arr[i];
    }
    for(int i=k; i<size; i++){
            sum = sum + arr[i] - arr[i-k];
            if(sum> maxSum) maxSum = sum;
    }

    cout<<"Maximum sum : "<<maxSum<<endl;





}
