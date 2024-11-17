/*//35. Write a recursive function to calculate the nth Fibonacci number. Use this function in main to display the first n Fibonacci numbers. The recursive definition of nth Fibonacci number is as follows: fib(n) = 1 if n = 1 or 2 = fib(n-2) + fib(n-1) if n>2 

#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    // Base case: fib(1) and fib(2) are both 1
    if (n == 1 || n == 2) {
        return 1;
    } else {
        // Recursive case: fib(n) = fib(n-1) + fib(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
    } else {
        printf("The first %d Fibonacci numbers are:\n", n);

        for (int i = 1; i <= n; i++) {
            printf("%d ", fibonacci(i));
        }

        printf("\n");
    }

    return 0;
}*/
#include<stdio.h>
int fibo(int x);
int main()
{
    int x;
    printf("Enter a no ");
    scanf("%d",&x);
    int k=fibo(x);
    printf("%d",k);

}

int fibo(int x)
{
    if(x==1 || x==2)
    return 1;
    return fibo(x-1)+fibo(x-2);
}

