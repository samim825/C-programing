#include<bits/stdc++.h>
using namespace std;

int maxSum(int a[],int sizeOfArray, int k){


    if(k < 0 || k >sizeOfArray)
        return 0;


    int sum = 0;
    int maxSum = 0;

    for(int i=0; i<k; i++){
        sum += a[i];
    }

    maxSum = sum;
    int j = 0;
    while(k<sizeOfArray){
            sum -= a[j];
            sum += a[k];
            k++ ;
            j++;

            maxSum = max(maxSum, sum);


    }

    return maxSum;


}

int main(){

    int a[] = {0,1,2,3,4,5,6,7,8,9};


    int sizeOfArray = sizeof(a)/sizeof(a[0]);

    cout<<"size of Array : "<<sizeOfArray<<endl;

    int sizeOfSubArray;
    cin>>sizeOfSubArray;




    cout<<maxSum(a,sizeOfArray,sizeOfSubArray)<<endl;



}
