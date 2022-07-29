#include<bits/stdc++.h>
using namespace std;
int main(){
int a[] = {10,23,12,5,25};
int sizeOfArray = *(&a+1)-a;
int max2 = (a[0]<a[1])?a[0]:a[1];
int max1 = (a[0]>a[1])?a[0]:a[1];

for(int i=2; i<sizeOfArray; i++){
    if(a[i]>max1){
        max2 = max1;
        max1 = a[i];
    }
}

cout<<max1<<max2<<endl;

}
