//***
//**
//*
#include<stdio.h>
int main(){

int numberOfRow;
printf("Enter the number of row : ");
scanf("%d",&numberOfRow);
for(int row=numberOfRow;row>=1;row--){
    for(int star=1;star<=row;star++){
    printf("*");
    }
    printf("\n");
}

return 0;
}
