#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[] = {-4,2,-3,-1};

    int sizeOfArray = sizeof(a)/sizeof(a[0]);
    int maxSum = INT_MIN;
    for(int i=0; i<sizeOfArray; i++){
        int sum = 0;
        for(int j=i; j<sizeOfArray; j++){
            cout<<a[j]<<" ";
            sum += a[j];
            maxSum = max(maxSum,sum);

        }
        cout<<sum<<endl;
        cout<<maxSum<<endl;
    }

    cout<<maxSum<<endl;
}
