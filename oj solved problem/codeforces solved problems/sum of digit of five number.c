#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum=0, mod;
    scanf("%d", &n);
    while(n>0){
        mod = n%10;
        sum+=mod;
        n = n/10;
    }
    printf("%d\n",sum);
    return 0;
}
