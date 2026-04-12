#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], rev[100];
    int i, length = 0, isPalindrome = 1;

    // Input
    printf("Enter a string: ");
    scanf("%s", str1);

    printf("Enter another string for equality check: ");
    scanf("%s", str2);

    // i) Length of string
    length = strlen(str1);
    printf("Length of string = %d\n", length);

    // ii) String reversal
    for(i = 0; i < length; i++) {
        rev[i] = str1[length - i - 1];
    }
    rev[length] = '\0';
    printf("Reversed string = %s\n", rev);

    // iii) Equality check
    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // iv) Palindrome check
    for(i = 0; i < length; i++) {
        if(str1[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("The string is a Palindrome\n");
    else
        printf("The string is not a Palindrome\n");

    // v) Substring check
    if(strstr(str1, str2) != NULL)
        printf("Substring found in main string\n");
    else
        printf("Substring not found in main string\n");

    return 0;
}