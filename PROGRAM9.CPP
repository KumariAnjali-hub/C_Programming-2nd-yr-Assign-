#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,b,c,y,z,x,m,n;
char i,s;

int choice,choice3,k,choice2;
printf("according to given question");
printf("for the following conditional function of x:\n");
printf("y=a*x+b \t\t\t\t\tif k=1\n");
printf("y=a*pow(x,2)+b; \t\t\tif k=2\n");
printf("y=a*x \t\t\tif k=3\n");
printf("y=a+x \t\t\tif k=4\n");
printf("ENTER THE VALUE OF k\n");
scanf("%d",&k);
printf("%d",k);
choice2=k;
printf("which method do u like for solution\n");
printf("for IF enter 1 and for SWITCH enter 2\n");
scanf("%d",&choice);
if(choice==1)
       {   printf("%d",k);
	 if(k==1)
	    {
	     printf("enter the value of a and b and x\n");
	     scanf("%d%d%d",&a,&b,&x);
	     y=a*x+b;
	     }
	 if(k==2)
	     {
	     printf("enter the value of a and b and x");
	     scanf("%d%d%d",&a,&b,&x);
	     m=pow(x,2);
	     n=pow(b,2);
	     y=a*m+n;
	     }
	 if(k==3)
	    {
	    printf("enter the value of a");
	    scanf("%d%d",&a,&x);
	    y=a*x;
	   }
	 if(k==4)
	    {
	    printf("enter the value of a b and c ");
	    scanf("%d%d",&a,&x);
	    y=a+x;
	    }
       }
if(choice==2)
{        printf("by using switch case");

	 printf("drjhd");
	switch(k)
	   {
	   case 1:
	     {
	     printf("enter the value of a and b and x");
	     scanf("%d%d%d",&a,&b,&x);
	     y=a*x+b;
	     }
	   case 2:
	     {
	     printf("enter the value of a and b and x");
	     scanf("%d%d%d",&a,&b,&x);
	     m=pow(x,2);
	     n=pow(b,2);
	     y=a*m+n;
	      }

	   case 3:
	     {
	     printf("enter the value of a and x");
	     scanf("%d%d",&a,&x);
	      y=a*x;
	      }
	   case 4:
	     {
	     printf("enter the value of a and x");
	     scanf("%d%d",&a,&x);
	     y=a+x;
	     }
	  default:
	     {
	      printf("donot not defined the function of x on the value of k which is given by u");
	      }
       }
}
	 printf("the value of y is %df after:\n\n",y);

	 getch();
}