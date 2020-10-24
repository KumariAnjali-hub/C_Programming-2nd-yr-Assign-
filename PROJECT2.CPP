#include<stdio.h>
#include<conio.h>
long amount=1000,deposite,withdrawn;
int choice,pin,k;
char transation;
void main()
{clrscr();
int withdraw,deposit;
while(pin!=1111)
{printf("enter ur valid pin");
scanf("%d",&pin);
if(pin!=1111)
	   printf("invalid pin\nplease enter valid pin number");

 } do
{printf("************welcome to atm system**********");
printf("1 for check balance\n2 for withdrawl\3 for deposite\4 for quit");
printf("enter ur choice");
scanf("%d",&choice);
switch(choice)
{case 1:
printf("\n your balance is Rs",amount);
break;
case 2:
{printf("enter amount");
scanf("%lu",&withdraw);
if(withdraw%100!=0)
{printf("\n please enter the amount in multiple of three");
}else if(withdraw>(amount-500))
{
printf("\n insufficient balance");

}
else
{amount=amount-withdraw;
printf("\n\nplease collect your case\n\nyour current balance is:%lu"amount);

}break  ;
}
case 3:
printf("\nenter the amount of deposite");
amount+=deposit;
printf("ur balance is %lu",amount)
break;
case 4:
      printf("\nTHANKS FOR USING ATM SYSTEM");
}
 }