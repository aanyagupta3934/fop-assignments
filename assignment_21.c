#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    // Open source file in read mode
    source = fopen("source.txt", "r");

    // Check if file exists
    if(source == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen("destination.txt", "w");

    // Copy contents character by character
    while((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    // Close files
    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}