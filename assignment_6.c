#include <stdio.h>

// Function for Iterative Factorial
long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function for Recursive Factorial
long long factorialRecursive(int n) {
    if (n <= 1) // Base Case
        return 1;
    return n * factorialRecursive(n - 1); // Recursive Call
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of negative numbers is not defined.\n");
    } else {
        printf("Factorial (Iterative): %lld\n", factorialIterative(num));
        printf("Factorial (Recursive): %lld\n", factorialRecursive(num));
    }

    return 0;
}