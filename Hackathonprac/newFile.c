#include <stdio.h>

int main() {
    char str[100]; // Declare a string to store the characters
    int i, n;

    printf("Enter the number of characters: ");
    scanf("%d", &n);

    printf("Enter the characters:\n");
    for (i = 0; i < n; i++) {
        scanf(" %c", &str[i]); // Read each character into the string
    }

    printf("The string is: %s\n", str); // Print the string

    return 0;
}