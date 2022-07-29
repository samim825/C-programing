#include<stdio.h>
int main(){

char ch;
char s[50];
char sen[100];

scanf("%c",&ch);
scanf("%s",&s);
gets(sen);

printf("%c\n",ch);
printf("%s\n",s);
printf("%s",sen);
return 0;
}
