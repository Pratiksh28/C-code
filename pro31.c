//Write a function, which accepts a character and integer n as parameter and displays the next n characters.

#include <stdio.h>

void displayNextNCharacters(char startChar, int n) {
    printf("Next %d characters starting from %c:\n", n, startChar);

    for (int i = 0; i < n; i++) {
        printf("%c ", startChar + i);
    }

    printf("\n");
}

int main() {
    char inputChar;
    int numberOfCharacters;

    printf("Enter a character: ");
    scanf(" %c", &inputChar);

    printf("Enter the number of characters to display: ");
    scanf("%d", &numberOfCharacters);

    displayNextNCharacters(inputChar, numberOfCharacters);

    return 0;
}