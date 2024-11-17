/*//40. Write a function, which accepts an integer array and an integer as parameters and counts the occurrences of the number in the array. 

#include <stdio.h>

int countOccurrences(int arr[], int n, int target) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;

    // Accept the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Accept the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;

    // Accept the number to be counted
    printf("Enter the number to be counted: ");
    scanf("%d", &target);

    // Call the countOccurrences function
    int occurrences = countOccurrences(arr, n, target);

    // Display result
    printf("Number %d occurs %d times in the array.\n", target, occurrences);

    return 0;
}*/

#include<stdio.h>
int main()
{
    int n,i,a,b,k=1;
    printf("Enter the no you want to display ");
    scanf("%d",&n);
    int c[n];
    for(i=1;i<=n;i++)  
    {
        b=0;
        printf("a[%d]=",i);
        scanf("%d",&a);
        for(int j=1;j<=a;j++)
        {
        if(a%j==0)
        {
            b++;
        }
        }
        if(b==2)
        {
            c[k]=a;
            k++;
        }
     }
     printf("\n The value of b is %d\n",b);
     printf("The value of k is %d \n",k);
    printf("THE PRIME NO ARE \n");
    
    for (i=1;i<k;i++)
    {
        printf("%d \n",c[i]);
    }
}


