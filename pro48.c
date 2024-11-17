 /*//48. Write a program to allocate memory dynamically for n integers such that the memory is initialized to 0. Accept the data from the user and find the range of the data elements.

#include <stdio.h>
#include <stdlib.h>

// Function to find the range of data elements
void findRange(int *arr, int n) {
    int min = *arr;
    int max = *arr;

    for (int i = 1; i < n; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
        } else if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    printf("Range of data elements: %d to %d\n", min, max);
}

int main() {
    int n;

    // Accept the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers and initialize to 0
    int *arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Accept data from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    // Find and display the range of data elements
    findRange(arr, n);

    // Free dynamically allocated memory
    free(arr);

    return 0;
}


//In this program, the calloc function is used to dynamically allocate memory for n integers and initializes the memory to 0. The program then accepts data from the user, finds the range of the data elements using the findRange function, and finally frees the dynamically allocated memory using the free function.
  
  */
 # include<stdio.h>

int main()
{
    int n;
    printf("Enter the no ");
    scanf("%d",&n);

    int *arr=(int *)calloc(n,sizeof(int));
    printf("Enter the integers");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int min=arr[0],max=arr[0];
    for(int i=0;i<n;i++)
    {
    if(arr[i]<min)
    {
        min=arr[i];
    }
    if(arr[i]>max)
    {
        max=arr[i];
    }
    }
    printf("Range of elements is %d to %d \n",min,max);

    free(arr);

    return 0;
}

