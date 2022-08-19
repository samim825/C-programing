#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[100];
    int size;
    cin>>size;

    for(int i=0; i<size; i++){
        cin>>a[i];
    }

    int mx1 = a[0]>a[1]? a[0]: a[1];
    int mx2 = a[0]<a[1]? a[0]: a[1];

    int mn1 = a[0]<a[1]? a[0]: a[1];
    int mn2 = a[0]>a[1]? a[0]: a[1];

    for(int i=2; i<size; i++){
        if(a[i]>mx1){
            mx2 = mx1;
            mx1 = a[i];
        }

        if(a[i]<mn1){
            mn2 = mn1;
            mn1 = a[i];
        }
    }

    cout<<"First maximum value : "<<mx1<<endl;
    cout<<"Second maximum value : "<<mx2<<endl;
    cout<<"First Minimum value : "<<mn1<<endl;
    cout<<"Second Minimum value : "<<mn2<<endl;

}
