#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,countDigit=1;
    cout<<"Enter the number :";
    cin>>num;

    while(num> 9){
        num = num/10;
        countDigit++;
    }
    cout<<"Total digit is "<<countDigit;

}
