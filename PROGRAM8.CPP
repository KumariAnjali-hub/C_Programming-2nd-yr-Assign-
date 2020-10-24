#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{float a,b,c,y,z;
float cons=4.7,x;
int choice;
printf("ENTER THE VALUE OF X\n");
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
      getch();
}