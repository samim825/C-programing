#include<stdio.h>
int main(){

    int MONTHS[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int n;
    printf("Enter the number of month : ");
    scanf("%d",&n);

    if(1<=n && n<=12){
        printf("The total days of this month is : %d\n",MONTHS[n-1]);
    }else{

    printf("Invalid input. Please Enter the valid input\n");
    }


    return 0;
}
