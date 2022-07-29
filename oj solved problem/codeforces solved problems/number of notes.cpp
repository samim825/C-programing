#include<stdio.h>
int main(){

    int amount, note500,note100, note50, note20, note10, note5, note2, note1;
    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;

    printf("Enter the amount of money : ");
    scanf("%d",&amount);

    if(amount>=500){
        note500 = amount/500;
        amount = amount -(note500*500);
    }
    if(amount>=100){
        note100 = amount/100;
        amount -=(note100*100);
    }
    if(amount>=50){
        note50 = amount/50;
        amount = amount -(note50*50);
    }
    if(amount>=20){
        note20 = amount/20;
        amount = amount -(note20*20);
    }
    if(amount>=10){
        note10 = amount/10;
        amount = amount -(note10*10);
    }
    if(amount>=5){
        note5 = amount/5;
        amount = amount -(note5*5);
    }
    if(amount>=2){
        note2 = amount/2;
        amount = amount -(note2*2);
    }
    if(amount>=1){
        note1 = amount/1;
        amount = amount -(note1*1);
    }

    printf("Note500 = %d\n",note500);
    printf("Note100 = %d\n",note100);
    printf("Note50 = %d\n",note50);
    printf("Note20 = %d\n",note20);
    printf("Note10 = %d\n",note10);
    printf("Note5 = %d\n",note5);
    printf("Note2 = %d\n",note2);
    printf("Note1 = %d\n",note1);


    return 0;
}
