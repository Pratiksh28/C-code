/*//Write a recursive function to calculate the sum of digits of a number till you get a single digit number. Example: 961 -> 16 -> 5. (Note: Do not use a loop)

#include <stdio.h>

// Recursive function to calculate the sum of digits until a single-digit number is obtained
int sumOfDigitsSingleDigit(int num) {
    // Base case: if the number is a single digit, return the number
    if (num < 10) {
        return num;
    } else {
        // Recursive case: sum the digits and call the function with the result
        return sumOfDigitsSingleDigit(num % 10 + sumOfDigitsSingleDigit(num / 10));
    }
}

int main() {
    int inputNumber;

    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    int result = sumOfDigitsSingleDigit(inputNumber);

    printf("Sum of digits until a single-digit number is obtained: %d\n", result);

    return 0;
}*/
#include<stdio.h>
int sd(int n);
int main()
{
    int n;
    printf("Enter a no ");
    scanf("%d",&n);
    int k=sd(n);
    printf("%d",k);
}

int sd(int n)
{
    if(n<10)
    return n;
    else if (n%10+sd(n/10)>9)
    {
      return n%10+sd(n/10)-9; 
    }
    else
    return n%10+sd(n/10); 
}
