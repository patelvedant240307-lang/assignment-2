#include <stdio.h>

int main() {
    int i, j, flag;
    int count = 0;

    for (i = 2; i <= 500; i++) {
        flag = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;  
                break;
            }
        }
        if (flag == 0) {
            count = count + 1;
        }
    }

    printf("Total prime numbers between 1 and 500 = %d\n", count);

    return 0;
}
