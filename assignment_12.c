#include <stdio.h>

int main() {
    int num1, num2, i, scd = 0, gcd;
    int a, b, temp;

    printf("Enter two positive integers: \n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);

    // Part A: Finding the Smallest Common Divisor (other than 1)
    int min = (num1 < num2) ? num1 : num2;
    for (i = 2; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            scd = i;
            break; 
        }
    }

    // Part B: Finding GCD using Euclidean Algorithm
    a = num1;
    b = num2;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Output Results
    printf("\n------------------------------\n");
    if (scd != 0) {
        printf("Smallest Common Divisor: %d\n", scd);
    } else {
        printf("Smallest Common Divisor: None (other than 1)\n");
    }
    printf("Greatest Common Divisor (GCD): %d\n", gcd);
    printf("------------------------------\n");

    return 0;
}