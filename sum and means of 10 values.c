#include<stdio.h>

int main(){
int i,num;
int sum=0;
float mean;

printf("Entre 10 values:\n");
for(i=1;i<=10;i++){
scanf("%d",&num);
sum =sum+num;
}
mean=sum/10.0;
printf("Sum =%d\n",sum);
printf("Mean=%.2f\n",mean);

return 0;
}
