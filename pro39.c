/*//39. Write a function for Linear Search, which accepts an array of n elements and a key as parameters and returns the position of key in the array and -1 if the key is not found. Accept n numbers from the user, store them in an array. Accept the key to be searched and search it using this function. Display appropriate messages.

#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Key found at index i
        }
    }
    return -1;  // Key not found
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

    int key;

    // Accept the key to be searched
    printf("Enter the key to be searched: ");
    scanf("%d", &key);

    // Perform linear search
    int result = linearSearch(arr, n, key);

    // Display result
    if (result != -1) {
        printf("Key %d found at position %d.\n", key, result + 1);
    } else {
        printf("Key %d not found in the array.\n", key);
    }

    return 0;
}*/
#include<stdio.h>
int i,n;
int func(int key,int a[n]);
int main()
{
    int key;
    printf("Enter a no ");
    scanf("%d",&n);
    int a[n];

    for(i=1;i<=n;i++)
    {
        printf("a[%d] ",i);
        scanf("%d",&a[i]);
    }

    for(i=1;i<=n;i++)
    {
        printf("a[%d] = %d \n",i,a[i]);
    }
    printf("Enter the key ");
    scanf("%d",&key);
    int k=func(key,a);
    if(k==i)
    {
        printf("The position of %d is %d ",key,i);
    }
    else
    {
    printf("not found");
    }
   
}

int func(int key,int a[n])
{
     for(i=1;i<=n;i++)
    {
        int count=1;
        if(a[i]==key)
        {
            count ++;
            return i;
           // printf("The no %d occurs  at %d \n",key,i);
        }
    }
    return -1;
}
