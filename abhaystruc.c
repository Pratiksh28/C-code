/*Create a structure student (roll number, name, marks of 3 subjects,
percentage). Accept
details of n students and write a menu driven program to perform the
following operations. Write separate functions for the different
options.
i) Search
ii) Display all student details
iii) Display all student having percentage >80
v) Display student having maximum percentage*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct student
{
	int roll_no;
	char name[30];
	int marks[3];
	int percentage;
}s[10];
/*void search()
{
    
}*/
void display1()
{
    int i=0,j=0,n;
    for(i=0;i<n;i++)
	{
	    printf("%d\n%s\n%d",s[i].roll_no,s[i].name,s[i].percentage);
	    for(j=0;j<3;j++)
	    {
	        printf("%d\n",s[i].marks[j]);
	    }
	    printf("\n");
	}
}
void display2()
{
    int i=0,j=0,n;
    for(i=0;i<n;i++)
	{
	    if(s[i].percentage>80)
	    {
	        printf("%d\n%s\n%d",s[i].roll_no,s[i].name,s[i].percentage);
	        for(j=0;j<3;j++)
	        {
	            printf("%d\n",s[i].marks[j]);
	        }
	        printf("\n");
	    }
	}
}
//void display3();
int main()
{
	int i=0,j=0,n;
	printf("please enter how student detail you want to enter\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    printf("please enter rollno\n ");
	    scanf("%d",&s[i].roll_no);
	    printf("enter name\n");
	    scanf("%s",&s[i].name);
	    printf("enter percentage\n");
	    scanf("%d",&s[i].percentage);
	    printf("please enter marks\n");
	    for(j=0;j<3;j++)
	    {
		    scanf("%d",&s[i].marks[j]);
	    }
	}
	for(i=0;i<n;i++)
	{
	    printf("%d\n%s\n%d",s[i].roll_no,s[i].name,s[i].percentage);
	    for(j=0;j<3;j++)
	    {
	        printf("%d\n",s[i].marks[j]);
	    }
	    printf("\n");
	}
	while(1)
	{
		int p;
		printf("1) Search \n2) Display all student details \n3) Display all student having percentage > 80\n 4) Display student having maximum percentage\n");
		printf("please enter your choice\n");
		scanf("%d",&p);
		switch(p)
		{
			//case 1: search();
			//break;
			case 2: display1();
			break;
			case 3: display2(); 
			break;
			/*case 4: display3();
			break;*/
			case 4:exit(0);
			default:printf("enter proper choice");
			break;
		}
	}
}
/*void search()
{
    
}*/
/*void display1()
{
    int i=0,j=0,n;
    for(i=0;i<n;i++)
	{
	    printf("%d\n%s\n%d",s[i].roll_no,s[i].name,s[i].percentage);
	    for(j=0;j<3;j++)
	    {
	        printf("%d\n",s[i].marks[j]);
	    }
	    printf("\n");
	}
}
void display2()
{
    int i=0,j=0,n;
    for(i=0;i<n;i++)
	{
	    if(s[i].percentage>80)
	    {
	        printf("%d\n%s\n%d",s[i].roll_no,s[i].name,s[i].percentage);
	        for(j=0;j<3;j++)
	        {
	            printf("%d\n",s[i].marks[j]);
	        }
	        printf("\n");
	    }
	}
}
void display3()
{
    int max;
    max=INT_MAX(s[i].percentage);
}*/