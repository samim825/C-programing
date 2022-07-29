#include<stdio.h>
int main(){

int year;
printf("Enter the year : ");
scanf("%d",&year);

if(year%400 ==0)
    printf("Year %d is leap year",year );
else if((year%4==0) && (year%100=!0)){
    printf("Year %d is leap year",year);
}
else
    printf("Year %d is not leap year",year);

}
