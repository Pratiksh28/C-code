// Write a recursive C function to print the digits of a number in reverse order. Use this function in main to accept a number and print the digits in reverse order separated by tab. Example 3456 6 5 4 3 (Hint: Recursiveprint(n) = print n if n is single digit number = print n % 10 + tab + Recursiveprint( n/10)

#include <stdio.h>

void RecursivePrint(int n) {
    // Base case: print the last digit if n is a single-digit number
    if (n < 10) {
        printf("%d", n);
    } else {
        // Print the last digit followed by a tab, then recurse with the remaining digits
        printf("%d\t", n % 10);
        RecursivePrint(n / 10);
    }
}

int main() {
    int number;
    
    // Accept a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Print the digits in reverse order using the RecursivePrint function
    printf("Digits in reverse order: ");
    RecursivePrint(number);
    
    return 0;
}