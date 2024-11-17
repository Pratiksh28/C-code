#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,choise,h,j,k,l;

    printf("Enter real part of first no ");
    scanf("%d",&a);
    printf("Enter img part of first no ");
    scanf("%d",&b);
    printf("Enter real part of second no ");
    scanf("%d",&c);
    printf("Enter img part of second no ");
    scanf("%d",&d);
    printf("The first no is %d+(i)%d \n",a,b);
    printf("The second no is %d+(i)%d \n",c,d);
    printf("choise 1 for addition, 2 for subraction, 3 for multiplication 4 for exit\n ");
    
  do{  
    printf("Enter your choise ");
    scanf("%d",&choise);
    
    switch (choise)
    {
        case 1:
        h=a+c;
        j=b+d;
        printf("The aadition of two complex no is %d+(i)%d \n",h,j);
        break;
        case 2:
        h=a-c;
        j=b-d;
        printf("The subtraction of two complex no is %d+(i)%d \n",h,j);
        break;
        case 3:
        h=a*c;
        j=b*d;
        l=h-j;
        k=(a*d)+(b*c);
        printf("The multiplication of two complex no is %d+(i)%d \n",l,k);
        break;
        case 4:
         exit(0);
        default :
        {
            printf("You have entered wrong choise ");
        }
    }
  }while(choise!=4);

}

