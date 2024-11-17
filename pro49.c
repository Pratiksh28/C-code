//49. Write a program that will accept a string and character to search. The program will call a function, which will search for the occurrence position of the character in the string and return its position. Function should return –1 if the character is not found in the string. 

#include <stdio.h>

// Function to search for the occurrence position of a character in a string
int searchCharacter(const char *str, char ch) {
    int position = -1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) { 
            position = i;
            break;
        }
    }

    return position;
}

int main() {
    char inputString[100];
    char searchChar;

    // Accept the string
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Accept the character to search
    printf("Enter a character to search: ");
    scanf(" %c", &searchChar);

    // Call the searchCharacter function
    int result = searchCharacter(inputString, searchChar);

    // Display the result
    if (result != -1) {
        printf("Character '%c' found at position %d in the string.\n", searchChar, result + 1);
    } else {
        printf("Character '%c' not found in the string.\n", searchChar);
    }

    return 0;
 }


//In this program, the searchCharacter function takes a string (const char *str) and a character (char ch) as parameters and iterates through the string to find the position of the character. If the character is found, its position is returned; otherwise, -1 is returned. The main function accepts the input string and character, calls the searchCharacter function, and displays the result.