//series : 1-2+3-4+5-6+....nth terms
#include<stdio.h>
int main()
{
    int sum=0,number;
    scanf("%d",&number);
    for(int i=1; i<=number; i++)
    {
        if(i%2==0)
        {
            sum = sum-i;
        }
        else
        {
            sum = sum+i;
        }
    }
    printf("The summation is : %d",sum);
    return 0;
}
