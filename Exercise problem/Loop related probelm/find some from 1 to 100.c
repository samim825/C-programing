#include<stdio.h>
int main(){
int sum=0,n,sum1;
printf("Enter value of n : ");
scanf("%d",&n);
sum1 = n*(n-1)/2;
for(int i=1;i<=n;i++){
    sum = sum+i;
}



printf("The summation is  %d",sum);

printf("Value of sum1 is %d ",sum1);
}
