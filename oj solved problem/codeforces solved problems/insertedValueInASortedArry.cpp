#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {10,20,40,50,60};

    int sizeOfArray = *(&arr+1)-arr;
    cout<<sizeOfArray<<endl;
    int value1 = 30;

    int i;
    for(i = sizeOfArray-1; (i>=0 && arr[i]>value1); i--)
    {

        arr[i+1] = arr[i];
    }

    arr[i+1] = value1;



    for(int i=0; i<=sizeOfArray; i++)
    {
        cout<<arr[i]<<endl;
    }

}
