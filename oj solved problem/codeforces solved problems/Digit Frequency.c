#include<stdio.h>
int main(){
char sen[1001];
int len, a[10];
scanf("%s",&sen);
len = strlen(sen);

for(int i=0; i<10; i++){
    a[i]=0;
}

for(int i=0; i<len; i++){

    if(sen[i]=='0'){
        a[0]++;
    }
    if(sen[i]=='1'){
        a[1]++;
    }
    if(sen[i]=='2'){
        a[2]++;
    }
    if(sen[i]=='3'){
        a[3]++;
    }
    if(sen[i]=='4'){
        a[4]++;
    }
    if(sen[i]=='5'){
        a[5]++;
    }
    if(sen[i]=='6'){
        a[6]++;
    }
    if(sen[i]=='7'){
        a[7]++;
    }
    if(sen[i]=='8'){
        a[8]++;
    }
    if(sen[i]=='9'){
        a[9]++;
    }
}

for(int i=0; i<10; i++){
    printf("%d ", a[i]);
}
}
