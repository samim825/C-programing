#include<stdio.h>
int main(){

    int days,weeks,years;
    printf("Enter the number of days : ");
    scanf("%d",&days);

    years = days/365;
    days = days - (years*365);
    weeks = days/7;
    days = days - (weeks*7);
    printf("Years are %d \n",years);
    printf("weeks are %d \n",weeks);
    printf("Days are %d \n",days);
    return 0;
}
