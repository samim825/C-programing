#include<bits/stdc++.h>
using namespace std;
int main(){


    int size1;

    cout<<"Enter the size of first array : ";
    cin>>size1;

    int a1[size1];

    cout<<endl<<"Enter the elements of first array :";
    for(int i=0; i<size1; i++){
        cin>>a1[i];
    }

    int size2;

    cout<<endl<<"Enter the size of second array : ";
    cin>>size2;
    int a2[size2];

    cout<<endl<<"Enter the elements of second array :";
    for(int i=0; i<size2; i++){
        cin>>a2[i];
    }

    cout<<endl;

    int a[size1+size2];

    for(int i=0; i<size1; i++){
        a[i] = a1[i];
    }

    int j = size1;
    for(int i=0; i<size2; i++){
        a[j] = a2[i];
        j++;
    }

    cout<<"The merged array is : ";
    for(int i=0; i<(size1+size2); i++){
        cout<<a[i]<<" ";
    }




return 0;
}
