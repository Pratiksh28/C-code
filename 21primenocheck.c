// #include<stdio.h>
// int main()
// {
//     int i,a,b=0;
//     printf("Enter the no");
//     scanf("%d",&a);
//     for(i=1;i<=a;i++)
//     {
//         if(a%i==0)
//         b++;
//     }
//     printf("%d\n",b);
//     if(b==2)
//     {
//         printf("the no is prime");
//     }
//     else
//     printf("the no is not prime");

// }
#include <stdio.h>

int main() {
    int x;
    
    // Prompt the user to enter a number to check if it is prime
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &x);

    int i, j = 0;

    // Loop to check divisibility of x from 2 to x-1
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            // If x is divisible by i, it's not a prime number
            printf("Entered number is not prime.\n");
            j = 1; // Set j to 1 indicating it's not prime
            break; // Exit the loop as we found a factor
        }
    }

    // Special case for the number 2
    if (x == 2) {
        printf("Entered number is prime.\n");
        j = 2; // Set j to 2 indicating it is prime
    }

    // If j is still 0 after the loop, it means no factors were found, so it's prime
    if (j == 0) {
        printf("Entered number is prime.\n");
    }

    return 0;
}

