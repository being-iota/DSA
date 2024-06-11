#include <stdio.h>
#include<conio.h>
char* char_to_string(char c) {
    char* str = malloc(2 * sizeof(char)); // Allocate memory for the string
    str[0] = c; // Assign the character to the first position of the string
    str[1] = '\0'; // Null-terminate the string
    return str;
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    
    char* result = char_to_string(character);
    
    printf("String representation: %s\n", result);
    
    // Free the allocated memory
    free(result);
    
    return 0;
}