#include<stdio.h>

int main (){
int n,sum;
printf("Enter a number :");
scanf("%d",&n);

sum=((n*(n+1))/2);

printf("Sum of the first %d is %d\n",n,sum);

return 0;
}
