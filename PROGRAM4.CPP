#include<conio.h>
#include<stdio.h>
void main()
{int number;
printf("enter an integer:");
scanf("%d",&number);
if(number%2==0)
printf("%d iseven number",number);
else
printf("%d is odd number",number);
getch();
}