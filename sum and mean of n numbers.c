#include<stdio.h>

int main(){
int i,n;
float sum=0;
float mean;
printf("Enter the number of value:");
scanf("%d",&n);

float value[n];


printf("Entre %d value:\n",n);
for(i=0;i<n;i++){
scanf("%f",&value[i]);
sum+=value[i];
}
mean=sum/n;
printf("Sum =%.2f\n",sum);
printf("Mean=%.2f\n",mean);

return 0;
}
