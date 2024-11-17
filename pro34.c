#include<stdio.h>
int power(int x,int y);
int main()
{
    int x,y;
    printf("Enter a no ");
    scanf("%d",&x);
    printf("Enter the power ");
    scanf("%d",&y);
    int k=power(x,y);
    printf("%d",k);

}

int power(int x,int y)
{
    if(y==1)
    return x;
    return x*power(x,y-1);
}

