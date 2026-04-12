#include <stdio.h>

// Function: Call by value (without pointers)
void swapValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("After swapping without pointers:\n");
    printf("a = %d b = %d\n", a, b);
}

// Function: Call by reference (with pointers)
void swapPointer(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Call by value
    swapValue(a, b);

    // Call by reference
    swapPointer(&a, &b);

    printf("After swapping with pointers:\n");
    printf("x = %d y = %d\n", a, b);

    return 0;
}