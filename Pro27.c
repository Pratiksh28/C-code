//Write a menu driven program to perform the following operations till the user selects Exit. Accept appropriate data for each option. Use standard library functions from math.h

#include <stdio.h>
#include <math.h>
/*
int main() {
    int choice;
    double num, result;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Sine\n");
        printf("2. Cosine\n");
        printf("3. Logarithm\n");
        printf("4. Exponential\n");
        printf("5. Square Root\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Sine
                printf("Enter the angle in degrees: ");
                scanf("%lf", &num);
                result = sin(num * M_PI / 180); // Convert degrees to radians
                printf("Sine of %.2lf degrees is %.4lf\n", num, result);
                break;
            case 2:
                // Cosine
                printf("Enter the angle in degrees: ");
                scanf("%lf", &num);
                result = cos(num * M_PI / 180); // Convert degrees to radians
                printf("Cosine of %.2lf degrees is %.4lf\n", num, result);
                break;
            case 3:
                // Logarithm
                printf("Enter a positive number: ");
                scanf("%lf", &num);
                result = log(num);
                printf("Natural logarithm of %.2lf is %.4lf\n", num, result);
                break;
            case 4:
                // Exponential
                printf("Enter the power: ");
                scanf("%lf", &num);
                result = exp(num);
                printf("e raised to the power %.2lf is %.4lf\n", num, result);
                break;
            case 5:
                // Square Root
                printf("Enter a non-negative number: ");
                scanf("%lf", &num);
                result = sqrt(num);
                printf("Square root of %.2lf is %.4lf\n", num, result);
                break;
            case 6:
                // Exit
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }

    } while (choice != 6);

    return 0;
}*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int choice;
    double num, result;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Calculate Sine\n");
        printf("2. Calculate Cosine\n");
        printf("3. Calculate Logarithm (base e)\n");
        printf("4. Calculate Exponential (e^x)\n");
        printf("5. Calculate Square Root\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter an angle in radians: ");
                scanf("%lf", &num);
                result = sin(num);
                printf("Sine of %.2f radians is %.2f\n", num, result);
                break;
            case 2:
                printf("Enter an angle in radians: ");
                scanf("%lf", &num);
                result = cos(num);
                printf("Cosine of %.2f radians is %.2f\n", num, result);
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%lf", &num);
                if (num <= 0) {
                    printf("Logarithm is undefined for non-positive numbers.\n");
                } else {
                    result = log(num);
                    printf("Natural logarithm of %.2f is %.2f\n", num, result);
                }
                break;
            case 4:
                printf("Enter the exponent: ");
                scanf("%lf", &num);
                result = exp(num);
                printf("Exponential of %.2f is %.2f\n", num, result);
                break;
            case 5:
                printf("Enter a number: ");
                scanf("%lf", &num);
                if (num < 0) {
                    printf("Square root is undefined for negative numbers.\n");
                } else {
                    result = sqrt(num);
                    printf("Square root of %.2f is %.2f\n", num, result);
                }
                break;
            case 6:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
