//Write a program to display the elements of an array containing n integers in the reverse order using a pointer to the array.
/* #include<stdio.h>
 int main()
 {
    int n,i;
    printf("enter the number how many number you want\n");
    scanf("%d",&n);
    int (*a)[n];
    int array[n];
    
    for(i=1;i<=n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&array[i]);
    }
    a=&array;
    printf("the number in reverse order is\n");
    for(i=n;i>=1;i--)
    {
         printf("%d\n",*(*a+i));
    }
}*/
#include <stdio.h>

// Function to display array elements in reverse order using a pointer
void displayReverse(int *arr, int n) {
    printf("Array elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int n;

    // Accept the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Accept array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display elements in reverse order using a pointer
    displayReverse(arr, n);

    return 0;
}