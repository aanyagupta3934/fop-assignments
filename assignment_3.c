#include <stdio.h>

int main() {
    int num, i;

    printf("Enter an integer to generate its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication Table for %d:\n", num);
    printf("---------------------------\n");

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}