#include<conio.h>
#include<stdio.h>
void main()
{       int n,a[20]={1,1,2,3,5,8,13,21};
clrscr();

printf("ENTER ANY NUMBER");
scanf("%d",&n);
int c=0;
for(int i=1;i<10;i++)
{if(n==a[i])
{//printf("fibbonacci number");
	   c++;
break;  }


}
if(c==0)printf("not fiban");
else printf("fib");

getch();
}