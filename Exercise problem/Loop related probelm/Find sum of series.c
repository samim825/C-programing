//series : 1^2+2^2+3^+...+n^2

#include<stdio.h>
int main(){

int sum = 0,number;
scanf("%d",&number);
for(int i = 1; i<=number; i++){
sum = sum+(i*i);
}
printf("The summation is : %d",sum);

return 0;

}
