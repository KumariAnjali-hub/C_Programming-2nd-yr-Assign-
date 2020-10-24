#include<stdio.h>
#include<conio.h>
void main()
{float n,i,m;
printf("ENTER THE NUMBER\n");
scanf("%f",&n);
for(i=1;i<=10;i++)
{m=i*n;
printf("%f*%f=%f\n",n,i,m);
}
getch();

}