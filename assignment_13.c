#include <stdio.h>

int main() {
    int num, digit;

    // Accepting input from the user
    printf("Enter an integer number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Digits in reverse order: ");

    // Special case for zero
    if (num == 0) {
        printf("0");
    }

    // Handling negative numbers by printing '-' and making num positive
    if (num < 0) {
        printf("- ");
        num = -num;
    }

    // Logic to extract and print digits in reverse
    while (num > 0) {
        digit = num % 10;      // Get the last digit
        printf("%d ", digit);   // Print the digit
        num = num / 10;        // Remove the last digit
    }

    printf("\n");
    return 0;
}