#include <stdio.h>

// Defining the structure
struct Student {
    int roll_no;
    char name[50];
    float marks[3];
    float total;
    float percentage;
};

int main() {
    int n, i, j;
    struct Student s[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf("%s", s[i].name);
        
        s[i].total = 0;
        printf("Marks in 3 subjects: ");
        for (j = 0; j < 3; j++) {
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].percentage = s[i].total / 3.0;
    }

    // Display student results
    printf("\n---------------------------------------------------");
    printf("\nRoll No\tName\tTotal\tPercentage");
    printf("\n---------------------------------------------------");
    for (i = 0; i < n; i++) {
        printf("\n%d\t%s\t%.2f\t%.2f%%", s[i].roll_no, s[i].name, s[i].total, s[i].percentage);
    }
    printf("\n---------------------------------------------------\n");

    return 0;
}