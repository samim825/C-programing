#include<stdio.h>
int main(){
int numberOfRow;
printf("Enter the value of row : ");
scanf("%d",&numberOfRow);
for(int i=1;i<=numberOfRow;i++){
    for(int j=1;j<=i;j++){
    printf("*");
    }
    for(int k=i+1;k<=numberOfRow;k++){
    printf(".");
    }
    printf("\n");
}
}
