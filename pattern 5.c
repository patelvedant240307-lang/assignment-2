#include <stdio.h>

int main() {
    int i, j;

    j = 5;  
    for (i = 1; i <= 5; i++) { 
        printf("%d %d\n", i, j);
        j--; 
    }

    return 0;
}
