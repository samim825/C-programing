//series : 1*n+2*(n-1)+... n*1
#include<stdio.h>
int main(){
int sum=0,number;
scanf("%d",&number);
int n=number;
for(int i=1;i<=number;i++){
sum = sum+(i*n);
n--;
}
printf("The summation is : %d",sum);

}
