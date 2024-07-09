#include <stdio.h>
int main()
{
    int n,a=0;

    printf("enter the no ");
    scanf("%d",&n);

    while(n>0)
    {
        n=n/10;
        a++;
    }
    printf("the no of digit are %d",a);
}
