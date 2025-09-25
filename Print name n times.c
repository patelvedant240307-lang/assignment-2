#include<stdio.h>
int main (){
int n,i;
char name[50];

printf("Entre you name:");
scanf("%s",name);

printf("Entre how many times to print your name:");
scanf("%d",&n);


 for (i=1;i<=n;i++){
 printf("%s\n",name);
 }
 return 0;
 }
