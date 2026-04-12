#include <stdio.h>

int main() {
    int n, i;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input integers
    printf("Enter integers: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Output even numbers
    printf("Even numbers are: ");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    // Output odd numbers
    printf("\nOdd numbers are: ");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}