#include <stdio.h>
#include <math.h>

void findPrimeFactors(int n) {
    printf("Prime Factors: ");
    while (n % 2 == 0) {
        printf("%d ", 2);
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n > 2) printf("%d", n);
    printf("\n");
}

int main() {
    int choice, n, i, isPrime = 1;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n1.Square Root\n2.Square\n3.Cube\n4.Prime Check\n5.Factorial\n6.Prime Factors\nChoice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Square Root: %.2f\n", sqrt(n)); break;
        case 2: printf("Square: %d\n", n * n); break;
        case 3: printf("Cube: %d\n", n * n * n); break;
        case 4:
            if (n <= 1) isPrime = 0;
            for (i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) { isPrime = 0; break; }
            }
            printf(isPrime ? "It is Prime\n" : "Not Prime\n");
            break;
        case 5:
            for (i = 1; i <= n; i++) fact *= i;
            printf("Factorial: %lld\n", fact);
            break;
        case 6: findPrimeFactors(n); break;
        default: printf("Invalid choice!\n");
    }
    return 0;
}