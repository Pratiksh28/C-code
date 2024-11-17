//51. For the following standard functions, write corresponding user defined functions and write a menu driven program to use them. strcat, strcmp, strrev, strupr 

#include <stdio.h>
#include <string.h>

// Function to concatenate two strings (user-defined strcat)
void userStrcat(char destination[], const char source[]) {
    int destLength = strlen(destination);
    int i;

    for (i = 0; source[i] != '\0'; i++) {
        destination[destLength + i] = source[i];
    }

    destination[destLength + i] = '\0';
}

// Function to compare two strings (user-defined strcmp)
int userStrcmp(const char str1[], const char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }

    return str1[i] - str2[i];
}

// Function to reverse a string (user-defined strrev)
void userStrrev(char str[]) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Function to convert a string to uppercase (user-defined strupr)
void userStrupr(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= ('a' - 'A');
        }
    }
}

int main() {
    int choice;
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("Menu:\n");
    printf("1. Concatenate two strings\n");
    printf("2. Compare two strings\n");
    printf("3. Reverse a string\n");
    printf("4. Convert a string to uppercase\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            userStrcat(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;

        case 2:
            if (userStrcmp(str1, str2) == 0) {
                printf("The strings are equal.\n");
            } else {
                printf("The strings are not equal.\n");
            }
            break;

        case 3:
            userStrrev(str1);
            printf("Reversed string: %s\n", str1);
            break;

        case 4:
            userStrupr(str1);
            printf("Uppercase string: %s\n", str1);
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}