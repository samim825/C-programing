#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    if(n<1)
    {
        for(int i=n; i<=1; i++)
        {
            sum = sum+i;
        }
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            sum = sum+i;
        }
    }

    printf("%d\n",sum);

    return 0;
}
