#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT
    char ch;
    char s[101];
    char sen[101];
    scanf("%c", &ch);
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]%*c",&sen);
    printf("%c\n", ch);
    printf("%s\n",s);
    printf("%[^\n]%*c\n", sen);
    */

    char ch;

    char s[50];

    char s1[100];

    scanf("%c%*c",&ch);

    scanf("%s%*c",&s);

    scanf("%[^\n]",&s1);

    printf("%c\n",ch);

    printf("%s\n",s);

    printf("%s",s1);
    return 0;
}
