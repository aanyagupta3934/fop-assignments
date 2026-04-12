#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate power
double power(double x, int n) {
    double result = 1;
    for(int i = 1; i <= n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    double x, sum = 0;
    int n;

    // Input
    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Sine series calculation
    for(int i = 0; i < n; i++) {
        int exponent = 2 * i + 1;   // 1, 3, 5, 7...
        double term = power(x, exponent) / factorial(exponent);

        if(i % 2 == 0)
            sum += term;   // positive term
        else
            sum -= term;   // negative term
    }

    // Output
    printf("Sum of sine series = %lf\n", sum);

    return 0;
}