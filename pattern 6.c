#include <stdio.h>

int main() {
    int i, j;

    j = 5;
    for (i = 1; i <= 3; i++) { 
        
        for (int k = 1; k <= 2; k++) {
            printf("%d %d\n", i, j);
        }
        j--; 
    }

    return 0;
}
