#include<stdio.h>
#define Pi 3.1416
int main()
{
    float radious,diameter,circumstances,area;
    scanf("%f",&radious);
    diameter = 2*radious;
    circumstances = 2*Pi*radious;
    area = Pi*radious*radious;

    printf("The diameter is : %f\n",diameter);
    printf("The diameter is : %f\n",circumstances);
    printf("The diameter is : %f\n",area);
    return 0;
}
