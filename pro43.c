//43. Write a program to find the union and intersection of the two sets of integers (store it in two arrays).
/*
#include <stdio.h>

// Function to find the union of two sets
void findUnion(int set1[], int size1, int set2[], int size2, int unionResult[], int *unionSize) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (set1[i] < set2[j]) {
            unionResult[k++] = set1[i++];
        } else if (set2[j] < set1[i]) {
            unionResult[k++] = set2[j++];
        } else {
            // If equal, include only once
            unionResult[k++] = set1[i++];
            j++;
        }
    }

    // Include remaining elements from both sets
    while (i < size1) {
        unionResult[k++] = set1[i++];
    }

    while (j < size2) {
        unionResult[k++] = set2[j++];
    }

    *unionSize = k;
}

// Function to find the intersection of two sets
void findIntersection(int set1[], int size1, int set2[], int size2, int intersectionResult[], int *intersectionSize) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (set1[i] < set2[j]) {
            i++;
        } else if (set2[j] < set1[i]) {
            j++;
        } else {
            intersectionResult[k++] = set1[i++];
            j++;
        }
    }

    *intersectionSize = k;
}

int main() {
    int size1, size2;

    // Accept the size of the first set
    printf("Enter the size of the first set: ");
    scanf("%d", &size1);

    int set1[size1];

    // Accept the elements of the first set
    printf("Enter %d elements for the first set:\n", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &set1[i]);
    }

    // Accept the size of the second set
    printf("Enter the size of the second set: ");
    scanf("%d", &size2);

    int set2[size2];

    // Accept the elements of the second set
    printf("Enter %d elements for the second set:\n", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &set2[i]);
    }

    int unionResult[size1 + size2];
    int unionSize = 0;

    // Find and display the union
    findUnion(set1, size1, set2, size2, unionResult, &unionSize);
    printf("Union of the two sets: ");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionResult[i]);
    }
    printf("\n");

    int intersectionResult[size1 < size2 ? size1 : size2]; // Intersection can't be larger than the smaller set
    int intersectionSize = 0;

    // Find and display the intersection
    findIntersection(set1, size1, set2, size2, intersectionResult, &intersectionSize);
    printf("Intersection of the two sets: ");
    for (int i = 0; i < intersectionSize; i++) {
        printf("%d ", intersectionResult[i]);
    }
    printf("\n");

    return 0;
}*/
#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter the how many number you want in set A\n");
    scanf("%d",&n);
    printf("enter the how many number you want in second element\n");
    scanf("%d",&m);
    int a[n];
    printf("enter the element in first set\n");
    for(i=1;i<=n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("enter the element in second set\n");
    int b[m];
    for(j=1;j<=m;j++)
    {
        printf("b[%d]= ",j);
        scanf("%d",&b[j]);
    }
    //logic
    printf("the intersection of the set A and B is \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d\n",a[i]);
            }
        }
    }
    printf("the union of A and B is \n");
    int k=1;
    int c[n];
    for(i=1;i<=n;i++)
    {
        c[k]=a[i];
        k++;
    }
    for(j=1;j<=m;j++)
    {
        c[k]=b[j];
        k++;
    }
    
    
    for(i=1;i<k;i++)
    {
        if(c[i]!=-1)
        {
        for(j=i+1;j<=k;j++)
        {
            if(c[i]==c[j])
            {
                c[j]=-1;
            }
        }
        printf("%d\n",c[i]);
        }
    }

}

