#include <stdio.h>

int main() {
    int num, original, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;   

    while (num != 0) {
        digit = num % 10;               
        reverse = reverse * 10 + digit; 
        num = num / 10;                
    }

    if (original == reverse) {
        printf("The number is a Palindrome.\n");
    } else {
        printf("The number is NOT a Palindrome.\n");
    }

    return 0;
}
