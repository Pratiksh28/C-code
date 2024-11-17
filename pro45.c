/*//45. Write a program to add and multiply two matrices. Write separate functions to accept, display, add and multiply the matrices. Perform necessary checks before adding and multiplying the matrices

#include <stdio.h>

// Function to accept a matrix
void acceptMatrix(int matrix[][10], int m, int n) {
    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][10], int m, int n) {
    printf("Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int matrix1[][10], int m1, int n1, int matrix2[][10], int m2, int n2, int result[][10]) {
    if (n1 != m2) {
        printf("Error: Matrices cannot be multiplied. Incompatible dimensions.\n");
        return;
    }

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int m1, n1, m2, n2;

    // Accept the size of the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &m1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &n1);

    int matrix1[10][10];

    // Accept the first matrix
    acceptMatrix(matrix1, m1, n1);

    // Display the first matrix
    printf("First ");
    displayMatrix(matrix1, m1, n1);

    // Accept the size of the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &m2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &n2);

    int matrix2[10][10];

    // Accept the second matrix
    acceptMatrix(matrix2, m2, n2);

    // Display the second matrix
    printf("Second ");
    displayMatrix(matrix2, m2, n2);

    // Check and perform addition
    if (m1 == m2 && n1 == n2) {
        int sumMatrix[10][10];
        addMatrices(matrix1, matrix2, sumMatrix, m1, n1);
        printf("Sum ");
        displayMatrix(sumMatrix, m1, n1);
    } else {
        printf("Error: Matrices cannot be added. Incompatible dimensions.\n");
    }

    // Check and perform multiplication
    if (n1 == m2) {
        int productMatrix[10][10];
        multiplyMatrices(matrix1, m1, n1, matrix2, m2, n2, productMatrix);
        printf("Product ");
        displayMatrix(productMatrix, m1, n2);
    }

    return 0;
}*/
#include<stdio.h>
 int n1,m1,n2,m2,n,m,i,j;
void accept(int a[n1][m1],int b[n2][m2]);
void display(int a[n1][m1],int b[n2][m2]);
void add(int a[n1][m1],int b[n2][m2]);
void mult(int a[n1][m1],int b[n2][m2],int c[n][m]);

 int main()
 {
   
    printf("enter the number of rows of first matrix\n");
    scanf("%d",&n1);
    printf("enter the number of column of first matrix\n");
    scanf("%d",&m1);
    printf("enter the number of rows of second matrix\n");
    scanf("%d",&n2);
    printf("enter the number of column of second matrix\n");
    scanf("%d",&m2);
    int a[n1][m1];
    int b[n2][m2];
    int c[n][m];
   
     accept(a,b);
     
    display(a,b);
     printf("the addition is\n");
    add(a,b);
    printf("the multiplication is\n");
    mult(a,b,c);

 }
void accept(int a[n1][m1],int b[n2][m2])
 {
    printf("enter the element in first matrix\n");
    int i,j;
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=m1;j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element in second matrix\n");
     
    for(i=1;i<=n2;i++)
    {
        for(j=1;j<=m2;j++)
        {
            printf("b[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
 }
void display(int a[n1][m1],int b[n2][m2])
 {
    printf("displaying the first matrix\n");
    int i,j;
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=m1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("displaying the second matrix\n");
    for(i=1;i<=n2;i++)
    {
        for(j=1;j<=m2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
 }
    
void add(int a[n1][m1],int b[n2][m2])
 {
   
    int i,j;
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=m1;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
 }
  
void mult(int a[n1][m1],int b[n2][m2],int c[n][m])
 {
    int i,j,k; 

    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=m1;j++)
        {
             c[i][j]=0;
            for(k=1;k<=m1;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
 }
