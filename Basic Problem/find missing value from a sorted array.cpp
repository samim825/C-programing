#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[100];
    int size;
    cin>>size;

    for(int i=0; i<size; i++){
        cin>>a[i];
    }

    sort(a, a+size);
    for(int i=0; i<size; i++){
        if(i != a[i]){
            cout<<"Missing value is : "<<i<<endl;
            return 0;
        }
    }

    cout<<"There is no missing value in this array"<<endl;

}
