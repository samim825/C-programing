//1^1+2^2+3^3+...+n^n
#include<stdio.h>
int main(){

int sum=0,number,power = 1;
scanf("%d",&number);
for(int i=1;i<=number;i++){
    for(int j=1;j<=i;j++){
     power = power*i;
    }
    sum = sum+power;
    power = 1;
}
printf("The summation is : %d",sum);
return 0;
}
