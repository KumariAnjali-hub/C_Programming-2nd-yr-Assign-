#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{int i,j,k,c,n,sum=0;
printf("\n\n-------------------------question no-14-----------------------\n\n");
printf("\nsolution for the series:\n---------------\ns = x - 1/3+1/5.....\n----------------\n");
printf("\nenter the value of x");
scanf("%d",&x);
printf("enter how many terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{if(i==1)
sum=sum+x;
else
{c=2*i+1;
sum=sum+1/c;
}
}
printf("solution of sum of the series",sum);


sum=0;
printf("\n\n-------------------------question no-15------------------------\n\n");
printf("\nsolution for the series:\n---------------\ns =1!/1!+2!/2!+.......\n----------------\n");
printf("how many terms?");
scanf("%d",&n);
if(n%2==0)sum=0;
else
sum=1;
printf("solution of sum of the series",sum);

sum=0;
printf("\n\n-------------------------question no-16------------------------\n\n");
printf("\nsolution for the series:\n---------------\ns = 1!+2!+..........\n----------------\n");
printf("\nenter the value of x");
scanf("%d",&x);
printf("how many terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{if(i%2==0)sum=sum-factorial(i);
else
sum=sum+factorial;
}
printf("solution of sum of the series",sum);

sum=0;
printf("\n\n-------------------------question no-17-------------------------\n\n");
printf("\nsolution for the series:\n---------------\ns = 1+(1+2)+(1+2+3)+.......\n----------------\n");
printf("\nenter the value of x");
scanf("%d",&x);
printf("how many terms");
scanf("%d",&n);
c=0,sum=0;
for(i=1;i<=n;i++)
{j=1
while(j<=i)
{c=c+j;}
sum=sum+c;
}
printf("solution of sum of the series",sum);


sum=0;
printf("\n\n-------------------------question no-18-------------------------\n\n");
printf("\nsolution for the series:\n---------------\ns = x - x^3/3! + x^5/5! - x^7/7!......x^n/n!\n----------------\n");
printf("\nenter the value of x");
scanf("%d",&x);
printf("how many terms?");
scanf("%d",&n);
for(i=1;i<=n;i++)
{c=pow(x,2*n-1);
if(i%2==0)
sum=sum-c/factorial(2*n-1);
else
sum=sum+c/factorial(2*n-1);
}
printf("solution of sum of the series",sum);


sum=0;
printf("\n\n-------------------------question no-19------------------------\n\n");
printf("how many terms?");
scanf("%d",&n);
printf("\nsolution for the series:\n---------------\ns = x - x^2/2! + x^4/4! - x^6/6!......x^n/n!\n----------------\n");
printf("\nenter the value of x");
sum=sum+x;
for(i=1;i<n;i++)
{c=pow(x,2i);
if(i%2==0)
{sum=sum+c/factorial(2i);
}
else
{sum=sum-c/factorial(2i);
}
}
printf("solution of sum of the series",sum);


 getch();
 }
