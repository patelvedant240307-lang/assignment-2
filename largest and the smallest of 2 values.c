#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Largest number = %d\n", a);
        printf("Smallest number = %d\n", b);
    } else if (b > a) {
        printf("Largest number = %d\n", b);
        printf("Smallest number = %d\n", a);
    } else {
        printf("Both numbers are equal: %d\n", a);
    }

    return 0;
}
