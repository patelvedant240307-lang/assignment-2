#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits are:\n");

    while (num > 0) {
        digit = num % 10;      
        printf("%d\n", digit); 
        num = num / 10;       
    }

    return 0;
}
