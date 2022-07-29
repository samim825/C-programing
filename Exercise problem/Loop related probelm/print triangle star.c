//*
//**
//***
#include<stdio.h>
int main(){
int starSize;
printf("Enter the row size of triangle : ");
scanf("%d",&starSize);
for(int row=1;row<=starSize;row++){
    for(int star=1;star<=row;star++){
    printf("*");
    }
    printf("\n");
}
}
