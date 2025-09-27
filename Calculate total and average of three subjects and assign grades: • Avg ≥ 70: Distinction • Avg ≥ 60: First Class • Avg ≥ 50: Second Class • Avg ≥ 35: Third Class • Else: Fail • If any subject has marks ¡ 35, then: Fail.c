#include <stdio.h>

int main() {
    int sub1, sub2, sub3;
    int total;
    float average;

    
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

   
    total = sub1 + sub2 + sub3;
    average = total / 3.0;

   
    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);

   
    if (sub1 < 35 || sub2 < 35 || sub3 < 35) {
        printf("Grade = Fail\n");
    } else if (average >= 70) {
        printf("Grade = Distinction\n");
    } else if (average >= 60) {
        printf("Grade = First Class\n");
    } else if (average >= 50) {
        printf("Grade = Second Class\n");
    } else if (average >= 35) {
        printf("Grade = Third Class\n");
    } else {
        printf("Grade = Fail\n");
    }

    return 0;
}
