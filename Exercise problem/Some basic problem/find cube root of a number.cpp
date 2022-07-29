#include<bits/stdc++.h>
using namespace std;
int main(){
int number;

cin>>number;
int sqrt = number/3;
int temp = 0;

while(sqrt != temp){
    temp = sqrt;

    sqrt = (number/temp +temp)/3;
}

cout<<sqrt;

}

