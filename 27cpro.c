#include<stdio.h>
#include<math.h>
#include<stdlib.h>
# define pi 3.142
int main()
{
    int a,choise;
    do
    {
      printf("Enter 1 for sinx \n");
      printf("Enter 2 for cosx \n");
      printf("Enter 3 for logx \n");
      printf("Enter 4 for sqrtx \n");
      printf("Enter 5 for exit \n");
      printf("Enter your choise");
      scanf("%d",&choise);
      switch (choise)
      {
      case 1:
        printf("Enter the angle for sinx \n");
        scanf("%d",&a);
        float deg=(a*pi)/180;
        printf("The value of sinx for angle %d is %f",a,sin(deg));
        break;

      case 2:
        printf("Enter the angle for cosx \n");
        scanf("%d",&a);
        float deg1=(a*pi)/180;
        printf("The value of cosx for angle %d is %f",a,cos(deg1));
        break;

      case 3:
        printf("Enter the angle for logx \n");
        scanf("%d",&a);
        //float deg=(a*pi)/180;
        printf("The value of logx is %f",log(a));
        break;

      case 4:
        printf("Enter the angle for sqrt \n");
        scanf("%d",&a);
        //float deg=(a*pi)/180;
        printf("The value of sqrt is  %f",sqrt(a));
        break;  
      case 5:
        exit(0);  

      
      default:
      {
        printf("You have entered wrong choise");
      }
        
      }

    } while (choise!=5);

    
}
