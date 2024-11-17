//.Write a program, which accepts a character from the user and checks if it is an alphabet, digit or punctuation symbol. If it is an alphabet, check if it is uppercase or lowercase and then change the case. 

#include <stdio.h>

int main() {
    char ch;

    // Input character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if it's an alphabet, digit, or punctuation symbol
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // It's an alphabet
        if (ch >= 'A' && ch <= 'Z') {
            // It's an uppercase alphabet
            printf("%c is an uppercase alphabet.\n", ch);

            // Convert to lowercase
            ch += 'a' - 'A';
            printf("Converted to lowercase: %c\n", ch);
        } else {
            // It's a lowercase alphabet
            printf("%c is a lowercase alphabet.\n", ch);

            // Convert to uppercase
            ch -= 'a' - 'A';
            printf("Converted to uppercase: %c\n", ch);
        }
    } else if (ch >= '0' && ch <= '9') {
        // It's a digit
        printf("%c is a digit.\n", ch);
    } else {
        // It's a punctuation symbol
        printf("%c is a punctuation symbol.\n", ch);
    }

    return 0;
}