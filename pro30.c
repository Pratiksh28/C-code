//Write a function, which accepts a character and integer n as parameter and displays the next n characters.
#include <stdio.h>

// Function to display the next n characters
void displayNextCharacters(char ch, int n) {
    printf("Characters after '%c' for %d positions:\n", ch, n);
    for (int i = 1; i <= n; ++i) {
        printf("%c ", ch + i);
    }
    printf("\n");
}

int main() {
    char inputChar;
    int n;

    // Input: Character and n
    printf("Enter a character: ");
    scanf(" %c", &inputChar); // Note the space before %c to consume any leading whitespace
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Display next n characters
    displayNextCharacters(inputChar, n);

    return 0;
}
