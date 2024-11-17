/*/42. Write a program to accept a decimal number and convert it to binary, octal and hexadecimal. Write separate functions. 

#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    printf("Binary equivalent: ");
    for (int i = 31; i >= 0; i--) {
        int bit = (decimal >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

// Function to convert decimal to octal
void decimalToOctal(int decimal) {
    printf("Octal equivalent: %o\n", decimal);
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimal) {
    printf("Hexadecimal equivalent: %X\n", decimal);
}

int main() {
    int decimal;

    // Accept the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Call the conversion functions
    decimalToBinary(decimal);
    decimalToOctal(decimal);
    decimalToHexadecimal(decimal);

    return 0;
} 
#include<stdio.h>
void binary(int n);
void hexa(int n);
void octa(int n);
int main()
{
    int n;
    printf("Enter the no ");
    scanf("%d",&n);
    binary(n);
    hexa(n);
    octa(n);
}

void binary(int n)
{
    int i=1,k=1,j;
    int d[k];
    printf(" \n The binary value of the no is ");
    while(n>0)
    {
        int e=n%2;
        i++;
       
        n=n/2;
        d[i]=e;
       
    }

    for(j=i-1;j<=0;j--)
    {
        printf("%d",d[j]);
    }
    
}
void hexa(int n)
{
    printf(" \nThe hexadecimal value of no is %x \n",n);
}
void octa(int n)
{
    printf("The octal value of the no is %o",n);
}  
*/#include<stdio.h>
void convert(int n,int base);
int main()
{
   int n;
   printf("enter the decimal number\n");
   scanf("%d",&n);
   printf("the binary number of is \n");
   convert(n,2);
   printf("\n");
   printf("the octal number is\n");
   convert(n,8);
   printf("\n");
   printf("the hexadecimal number is\n");
   convert(n,16);
}
void convert(int n,int base)
{
    int remainder=n%base;
    if(n==0)
    {
        return ;
    }
    else
    {
        convert(n/base,base);
    }

     if(remainder<10)
    {
        printf("%d ",remainder);
    }
    else
    {
        printf("%c",remainder-10+'A');
    }

}
