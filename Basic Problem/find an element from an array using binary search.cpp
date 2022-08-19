#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[100];
    int size;
    cin>>size;

    for(int i=0; i<size; i++){
        cin>>a[i];
    }

    cout<<"Enter the finding element " <<endl;
    int element;
    cin>>element;

    bool flag = false;

    int low =0, high = size-1;
    while(low<=high){
        int mid = (high-low)/2+low;

        if(a[mid] == element){
            flag = true;
            break;
        }else if(element < a[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }

    }

    if(flag){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }


}

