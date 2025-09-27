#include <stdio.h>

int main() {
    int num, square, temp, digits = 0, last, i, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;

   
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }


    for (i = 1; i <= digits; i++) {
        power = power * 10;
    }

    last = square % power; 
    if (last == num) {
        printf("%d is an Automorphic number.\n", num);
    } else {
        printf("%d is NOT an Automorphic number.\n", num);
    }

    return 0;
}
