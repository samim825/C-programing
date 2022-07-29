#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many bits do you want to enter : ");
    scanf("%d",&n);

    char binary[n+1],onesComplement[n+1],twosComplement[n+1];

    printf("Enter the bits : ");



        scanf("%s",&binary);


    printf("\nThe binary number is : %s ",binary);



    for(int i=0; i<n; i++)
    {

        if(binary[i]=='0')
        {
            onesComplement[i]='1';
        }
        else
            onesComplement[i]='0';
    }
    printf("\n One's Complement is : %s",onesComplement);

int carry=1;


        for(int i=n-1;i>=0;i--){
            if(onesComplement[i]=='1' && carry==1){
                twosComplement[i]='0';
            }else if(onesComplement[i]=='0' && carry==1) ){
                twosComplement[i]='1';
                carry=0;
            }else{
                twosComplement[i]=onesComplement[i];
            }
        }

        printf("\nTwo's Complement is : %s",twosComplement);



    return 0;
}
