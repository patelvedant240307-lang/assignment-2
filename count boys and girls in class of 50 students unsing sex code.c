#include <stdio.h>

int main() {
    int i, code;
    int boys = 0, girls = 0;

    printf("Enter sex code for 50 students (1 = Boy, 2 = Girl):\n");

    for (i = 1; i <= 50; i++) {
        scanf("%d", &code);

        if (code == 1) {
            boys = boys + 1;
        }
        else if (code == 2) {
            girls = girls + 1;
        }
        else {
            printf("Invalid code! Use 1 for Boy or 2 for Girl.\n");
            i--;  
        }
    }

    printf("Total Boys  = %d\n", boys);
    printf("Total Girls = %d\n", girls);

    return 0;
}
