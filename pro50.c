 ////50. A palindrome is a string that reads the same-forward and reverse. Example: “madam” is a Palindrome. Write a function which accepts a string and returns 1 if the string is a palindrome and 0 otherwise. Use this function in main. 

#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(const char *str) {
    int length = strlen(str);

    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }

    return 1; // Palindrome
}

int main() {
    char inputString[100];

    // Accept the string
    printf("Enter a string: ");
    scanf("%s", inputString);
    

    // Call the isPalindrome function
    int result = isPalindrome(inputString);

    // Display the result
    if (result) {
        printf("%s is a palindrome.\n",inputString);
        printf("1");
    } else {
        printf("%s is not a palindrome.\n",inputString);
        printf("0");
    }

    return 0;
}


//In this program, the isPalindrome function takes a string (const char *str) as a parameter and checks if it's a palindrome by comparing characters from the beginning and end of the string. If the string is a palindrome, the function returns 1; otherwise, it returns 0.
// The main function accepts a user-input string, calls the isPalindrome function, and displays the result.

//2nd
/*
#include <stdio.h>
#include <string.h>

int is_palindrome(char *s) {
    int i, length;
    length = strlen(s);
    for (i = 0; i < length / 2; i++) {
        if (s[i] != s[length - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char user_input[100];
    
    printf("Enter a string: ");
    scanf("%s", user_input);

    if (is_palindrome(user_input)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}*/