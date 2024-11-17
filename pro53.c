#include <stdio.h>

int main()
{
	int n;
	printf("How many numbers do you want to enter??? ");
        scanf("%d",&n);

int i;

        int x[n];
        for(i=0;i<n;i++)
        {
                scanf("%d",&x[i]);
        }


	int b[n];
int j;
int a=-1;
int flag,k;
  for(i=0;i<n;i++)
        {

flag=0;
                for(j=2;j<x[i];j++)
                {

                        if(x[i]==2)
                        {
                                a++;
                          b[a]=x[i];
                                break;
                         }

                  if((x[i]%j==0))
                  {
                        flag++;
                  k++;
	    	  break;
                  }
                }
                if(flag==0)
                {
                                a++;
                             b[a]=x[i];
		}
	}
  int l;
  l=n-k;
  printf("The prime array is ");
for(int i=0;i<l;i++)
        {
		printf("%d ",b[i]);
	}

	return 0;
}

//2nd 

#include<stdio.h>
int main()
{
    int i, count=0;
    char str[100], ch;
    printf("Enter the String: ");
    gets(str);
    printf("Enter any character (present in string) to find its frequency: ");
    scanf("%c", &ch);
    for(i=0; str[i]!='\0'; i++)
    {
        if(ch==str[i])
            count++;
    }
    printf("\nFrequency of %c = %d", ch, count);
    printf("\n\n%c occurs %d times in %s", ch, count, str);
    return 0;
}

//3rd

