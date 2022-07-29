#include<bits/stdc++.h>
using namespace std;

void print(int a[],int arraySize)
{
    for(int i = 0; i < arraySize; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]= {9,0,1,6,3,5,2,4,8,7};

    int asize = sizeof(a)/sizeof(a[0]);
    cout<<"The Given Array is : ";
    print(a, asize);

    sort(a, a + asize);

    cout<<"The sorting array is : ";
    print(a, asize);

    int number;
    cout<<"Enter a value for search in the array : ";
    cin>>number;
    if(binary_search(a, a + asize, number))
    {
        cout<<"The given number is found in the array."<<endl;
    }
    else
    {
        cout<<"The Given number is not found in the array."<<endl;
    }

    return 0;
}
