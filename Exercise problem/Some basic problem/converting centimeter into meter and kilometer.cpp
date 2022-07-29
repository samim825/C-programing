#include<stdio.h>
int main()
{

    float centimeter,meter,kilometer;
    printf("Enter the length in centimeter :");
    scanf(" %f",&centimeter);

    meter = centimeter/100;
    kilometer = centimeter/1000;


    printf("Meter : %f \n",meter);
    printf("Kilo Meter : %f \n",kilometer);
    return 0;


}
