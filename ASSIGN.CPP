#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
int i,j,flag,qn;
//float a,b,c,y,z;
float a,b,c,y,z;
int choice,choice3,k,choice2;
char sec;
float cons=4.7,x;
printf("enter the section of question");
scanf("%c",&sec);
if(sec=='B'){
//int choice;
/*if(qn==1)
{
    for(i=min;i<max;i++)
     {
     if(j>=2)
     {if(j>i/2)
       {
	if(i%j==0)
	  {flag=1;
	   break;
	   }}
	  j++;
	}
      else
	{printf("hjjgfjh");
	flag=2;
	if(flag==2)
	  {printf("%d",i);

	  }

	}
       }

}
  */      }
  if(sec=='A'||sec=='a') {
if(qn==8)
{printf("ENTER THE VALUE OF X\n");
scanf("%f",&x);
if(x==cons)
printf("IF X IS EQUAL TO 4.7 ENTER 1\n");
if(x>cons)
printf("IF X IS GREATER THAN 4.7 ENTER 2\n");
if(x<cons)
printf("IF X IS LESS THAN 4.7 ENTER 3\n");
printf("enter ur choice\n");
scanf("%d",&choice);
switch(choice)
{case 1:
  {z=3*pow(x,2)+21.2*x-0.8;
  }
 case 2:
 {z=3*pow(x,2)+21.3*x-1.6;
 }

 case 3:
 {z=3*pow(x,2)-7*x+2;
 }

}
printf("the value of z is %f after:\n\n",z);
printf("for the following conditional function of x:\n");
printf("z=3x^2-7x+2 \t\t\t\t\tif x<4.7\n");
printf("z=3x^2+21.2x-0.8 \t\t\tif x=4.7\n");
printf("z=3x^2+21.3x-1.6 \t\t\tif x>4.7\n");


}if(qn==9)
{printf("according to given question");
printf("for the following conditional function of x:\n");
printf("y=a*x+b \t\t\t\t\tif k=1\n");
printf("y=a*pow(x,2)+b; \t\t\tif k=2\n");
printf("y=a*x \t\t\tif k=3\n");
printf("y=a+x \t\t\tif k=4\n");
printf("ENTER THE VALUE OF k\n");
scanf("%f",&k);
printf("which method do u like for solution\n");
printf("for IF enter 1 and for SWITCH enter 2\n");
scanf("%d",&choice);
if(choice==1)
       {  choice2=k;
	 if(choice==1)
	    {
	     printf("enter the value of a and b and x\n");
	     scanf("%f%f%f",&a,&b,&x);
	     y=a*x+b;
	     }
	 if(choice==2)
	     {
	     printf("enter the value of a and b and x");
	     scanf("%f%f%f",&a,&b,&x);
	     y=a*pow(x,2)+pow(b,2);
	     }
	 if(choice2==3)
	    {
	    printf("enter the value of a");
	    scanf("%f%f",&a,&x);
	    y=a*x;
	   }
	 if(choice2==4)
	    {
	    printf("enter the value of a b and c ");
	    scanf("%f%f",&a,&x);
	    y=a+x;
	    }
       }
if(choice==2)
{        printf("by using switch case");
	 choice3=k;
	switch(choice3)
	   {
	   case 1:
	     {
	     printf("enter the value of a and b and x");
	     scanf("%f%f%f",&a,&b,&x);
	     y=a*x+b;
	     }
	   case 2:
	     {
	     printf("enter the value of a and b and x");
	     scanf("%f%f%f",&a,&b,&x);
	     y=a*pow(x,2)+b;
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
	     scanf("%d%d",&a,&x) ;
	     y=a+x;
	     }
/*default:
{
printf("donot not defined the function of x on the value of k which is given by u");
 }*/
       }
}
printf("the value of y is %f after:\n\n",y);
  }                       }
      getch();
}