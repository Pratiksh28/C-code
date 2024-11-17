//Write a recursive C function to calculate the sum of digits of a number. Use this function in main to accept a number and print sum of its digits.
#include <stdio.h>

int sumOfDigits(int num) {
    // Base case: when the number becomes zero, return 0
    if (num == 0) {
        return 0;
    } else {
        // Recursive case: sum the last digit and call the function with the remaining digits
        return (num % 10) + sumOfDigits(num / 10);
    }
}

int main() {
    int inputNumber;

    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    int result = sumOfDigits(inputNumber);

    printf("Sum of digits of %d is %d\n", inputNumber, result);

    return 0;
}