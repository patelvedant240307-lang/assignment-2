#include <stdio.h>

int main (){
    int i,num;
    int positive=0,negative=0,zero=0;
    
    printf("Enter 200 numbers:\n");
    
    for (i=1;i<=200;i++){
        scanf("%d",&num);
        
        if(num>0){
            positive = positive + 1;
        }
        else if (num <0){
            negative = negative + 1;
        }
        else{
            zero = zero + 1;
        }
        }
    }
