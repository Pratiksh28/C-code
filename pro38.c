/*//38. Write a program to accept n numbers in the range of 1 to 25 and count the frequency of occurrence of each number.

#include <stdio.h>

int main() {
    int n;

    // Accept the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Validate the number of elements
    if (n <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;  // Exit with an error code
    }

    // Declare an array to store the numbers
    int numbers[n];

    // Initialize frequency array to store the count of each number (1 to 25)
    int frequency[25] = {0};

    // Accept 'n' numbers in the range of 1 to 25
    printf("Enter %d numbers in the range of 1 to 25:\n", n);
    for (int i = 0; i < n; ++i) {
        do {
            printf("Number %d: ", i + 1);
            scanf("%d", &numbers[i]);

            // Check if the entered number is in the valid range
            if (numbers[i] < 1 || numbers[i] > 25) {
                printf("Invalid input. Please enter a number in the range of 1 to 25.\n");
            }
        } while (numbers[i] < 1 || numbers[i] > 25);

        // Increment the frequency count for the entered number
        frequency[numbers[i] - 1]++;
    }

    // Display the frequency of each number
    printf("\nFrequency of each number:\n");
    for (int i = 0; i < 25; ++i) {
        if (frequency[i] > 0) {
            printf("%d occurs %d times\n", i + 1, frequency[i]);
        }
    }

    return 0;
}*/
#include<stdio.h>

int main()
{
    int n,i,j;
 
    printf("Enter a no ");
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        printf("a[%d] =",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("a[%d]=%d \n",i,a[i]);
    }
    for(i=1;i<=n;i++)
    {
        int count=1;
    if(a[i]!=-1)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]==a[j])
            {
                count ++;
                a[j]=-1;
            }
        }
        printf("%d occurs %d times \n",a[i],count);
    }
    }
}
