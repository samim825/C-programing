#include<stdio.h>
int main(){
int a,b;
float c,d;
scanf("%d %d",&a,&b);
scanf("%f %f",&c,&d);

int sumOfInt = a+b;
int subOfInt = a-b;

float sumOfFloat = c+d;
float subOfFloat = c-d;

printf("%d %d\n",sumOfInt,subOfInt);

printf("%.1f %.1f\n",sumOfFloat,subOfFloat);

return 0;

}
