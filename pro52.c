//52. Write a program which accepts a sentence from the user and alters it as follows: Every space is replaced by *, case of all alphabets is reversed, digits are replaced by ?

#include <stdio.h>
#include <ctype.h>

// Function to alter the sentence
void alterSentence(char sentence[]) {
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isspace(sentence[i])) {
            sentence[i] = '*';
        } else if (isalpha(sentence[i])) {
            if (isupper(sentence[i])) {
                sentence[i] = tolower(sentence[i]);
            } else {
                sentence[i] = toupper(sentence[i]);
            }
        } else if (isdigit(sentence[i])) {
            sentence[i] = '?';
        }
    }
}

int main() {
    char sentence[100];

    // Accept the sentence from the user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Call the alterSentence function
    alterSentence(sentence);

    // Display the altered sentence
    printf("Altered sentence: %s\n", sentence);

    return 0;
}

//2nd

#include <stdio.h>
#include <ctype.h>

int main() {
    int c = 0;
    char ch, s[100];

    printf("Input a string\n");
    scanf("%99[^\n]", s);

    for (c = 0; s[c] != '\0'; c++) {
        ch = s[c];
        if (ch >= 'A' && ch <= 'Z')
            s[c] = s[c] + 32;
        else if (ch >= 'a' && ch <= 'z')
            s[c] = s[c] - 32;
        else if (s[c] == ' ')
            s[c] = '*';
        else if (isdigit(s[c]))
            s[c] = '?';
    }

    printf("%s\n", s);
    return 0;
}