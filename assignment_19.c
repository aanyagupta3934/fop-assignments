#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[20]; // Date of Joining
    float salary;
};

int main() {
    int n, i;
    int maleCount = 0, femaleCount = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    // Input
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Designation: ");
        scanf("%s", emp[i].designation);

        printf("Enter Gender (Male/Female): ");
        scanf("%s", emp[i].gender);

        printf("Enter Date of Joining: ");
        scanf("%s", emp[i].doj);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // a) Total employees
    printf("\nTotal number of employees = %d\n", n);

    // b) Count male and female
    for(i = 0; i < n; i++) {
        if(strcmp(emp[i].gender, "Male") == 0)
            maleCount++;
        else if(strcmp(emp[i].gender, "Female") == 0)
            femaleCount++;
    }

    printf("Male employees = %d\n", maleCount);
    printf("Female employees = %d\n", femaleCount);

    // c) Salary > 10000
    printf("Employees with salary more than 10000: ");
    for(i = 0; i < n; i++) {
        if(emp[i].salary > 10000) {
            printf("%s ", emp[i].name);
        }
    }

    // d) Designation AsstManager
    printf("\nEmployees with designation AsstManager: ");
    for(i = 0; i < n; i++) {
        if(strcmp(emp[i].designation, "AsstManager") == 0) {
            printf("%s ", emp[i].name);
        }
    }

    return 0;
}