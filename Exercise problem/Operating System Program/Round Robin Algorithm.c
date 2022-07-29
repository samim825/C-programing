#include<stdio.h>
int main(){

int burst_time,allocation_time,process_number;
char process[10];

scanf("%d",&process_number);
for(int i=0;i<=process_number;i++){
scanf("%d",&process[i]);
}

for(int i=0;i<=process_number;i++){
scanf("%d",&process[i]);
}

scanf("%d %d",&burst_time,&allocation_time);

printf("Burst_time is %d and Allocation is %d",burst_time,allocation_time);



}
