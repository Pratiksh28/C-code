#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    int k=gcd(a,b);
    printf("%d",k);
}

int gcd(int a,int b)
{
   if(b==0)
   {
    return a;
   } 
   else
   return gcd(b,a%b);
}

