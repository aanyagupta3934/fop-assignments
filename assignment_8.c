#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, per;

    printf("Enter marks of five courses: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Check if passed in all subjects
    if (m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40) {
        total = m1 + m2 + m3 + m4 + m5;
        per = total / 5.0;

        printf("\nTotal Marks = %.2f", total);
        printf("\nPercentage = %.2f%%", per);
        printf("\nResult: PASS");

        // Grading Logic
        if (per >= 75) {
            printf("\nGrade: Distinction\n");
        } else if (per >= 60) {
            printf("\nGrade: First Division\n");
        } else if (per >= 50) {
            printf("\nGrade: Second Division\n");
        } else {
            printf("\nGrade: Third Division\n");
        }
    } else {
        printf("\nResult: FAIL");
        printf("\nGrade: No Grade Assigned (Failed in one or more subjects)\n");
    }

    return 0;
}