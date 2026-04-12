#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    // Input
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Menu
    printf("\nMenu:\n");
    printf("1. Length of first string\n");
    printf("2. Copy string\n");
    printf("3. Concatenate strings\n");
    printf("4. Compare strings\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Length of first string = %lu\n", strlen(str1));
            break;

        case 2:
            strcpy(result, str1);
            printf("Copied string = %s\n", result);
            break;

        case 3:
            strcpy(result, str1);
            strcat(result, str2);
            printf("Concatenated string: %s\n", result);
            break;

        case 4:
            if(strcmp(str1, str2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}