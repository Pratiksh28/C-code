//29.  Write a function isEven, which accepts an integer as parameter and returns 1 if the number is even, and 0 otherwise. Use this function in main to accept n numbers and check if they are even or odd. 

#include <stdio.h>

// Function to check if a number is even
int isEven(int num) {
    return (num % 2 == 0) ? 1 : 0;
}

int main() {
    int n;

    // Input: Number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];

    // Input: Elements
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &numbers[i]);
    }

    // Check and display if each number is even or odd
    printf("\nResult:\n");
    for (int i = 0; i < n; ++i) {
        if (isEven(numbers[i])) {
            printf("%d is even.\n", numbers[i]);
        } else {
            printf("%d is odd.\n", numbers[i]);
        }
    }

    return 0;
}
