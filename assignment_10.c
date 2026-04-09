#include <stdio.h>
#include <math.h>

int main() {
    int choice, i;
    double a, b, result;
    long long fact;

    while (1) {
        printf("\n--- Simple Calculator ---");
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division");
        printf("\n5. Power (x^y)\n6. Factorial (x!)\n7. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) break;

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", a + b);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", a - b);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", a * b);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                if (b != 0) printf("Result = %.2lf\n", a / b);
                else printf("Error! Division by zero.\n");
                break;
            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", pow(a, b));
                break;
            case 6:
                printf("Enter an integer: ");
                scanf("%lf", &a);
                fact = 1;
                for (i = 1; i <= (int)a; i++) fact *= i;
                printf("Result = %lld\n", fact);
                break;
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}