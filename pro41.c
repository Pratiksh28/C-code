//Write a program to accept n numbers and store all prime numbers in an array called prime. Display this array.


#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;

    // Accept the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    int prime[n];  // Assuming the prime array won't have more elements than the original array

    // Accept the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Find and store prime numbers in the 'prime' array
    int primeCount = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(numbers[i])) {
            prime[primeCount++] = numbers[i];
        }
    }

    // Display prime numbers
    printf("Prime numbers in the array are: ");
    for (int i = 0; i < primeCount; i++) {
        printf("%d ", prime[i]);
    }
    printf("\n");

    return 0;
}