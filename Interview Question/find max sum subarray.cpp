#include<bits/stdc++.h>
using namespace std;

int findSum(int a[], int sizeOfArray, int k)
{
    int sum = 0, j=0, ans = 0;
    for(int i=0; i<k; i++)
    {
        sum +=a[i];
    }

    ans += sum;
    for(int i=k; i<sizeOfArray; i++)
    {
        sum -= a[j], sum +=a[k], j++, k++;

        ans += sum;
    }
    return ans;

}

int main()
{

    int a[] = {1,4,2,5,3};

    int sizeOfArray = sizeof(a)/sizeof(a[0]);

    int k=1;
    int ans = 0;
    while(k<=sizeOfArray){
        ans += findSum(a,sizeOfArray,k);
        k+=2;
    }

    cout<<ans<<endl;


}
