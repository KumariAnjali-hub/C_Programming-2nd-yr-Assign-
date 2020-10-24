#include<stdio.h>
#include<conio.h>
void main()
{int marks,pro;
int month,day;
float commission,sales,salary,length,breadth,area,perimeter;
clrscr();

printf("\n-------------------QUESTION NO-11-------------------\n\n");
printf("enter marks obtained\n");
scanf("%d",&marks);
if(marks>=60)
{printf("\nfirst division");
}
if(50<=marks && marks<=59)
{printf("\nsecond division");
}
if(40<=marks && marks<=49)
{printf("\nthird division");
}
if(marks<40)
{printf("\nfail");
}
 printf("do u want to procede to next\npress 1 ");
 scanf("%d",&pro);
 if(pro==1)
clrscr();


printf("\n--------------QUESTION NUMBER-12----------");
printf("\nenter amount of sale in terms of rupees\n");
scanf("%f",&sales);
if(sales<=500)
{ printf("commission is 5%");
commission=sales*5/100;

}
if(sales>500&&sales<=2000)
{printf("commission is 10%");
commission=sales*10/100;
}
if(sales>2000&&sales<=5000)
{ printf("commission is 15%");
commission=sales*15/100;
}
if(sales>5000)
{printf("commission is 15.5%");
commission=sales*15.5/100;
}
printf("\ncommission is %f",commission);


printf("---------------QUESTION NO-13-----------------\n");
printf("enter salary of employee\n");
scanf("%f",salary);

printf("\n\n--------------QUESTION NO-14---------------------");

printf("\n\n--------------QUESTION NO-15----------------------");
printf("\nenter length and breadth\n");
scanf("%f%f",&length,&breadth);
area=length*breadth;
perimeter=2*(length+breadth);
if(area>perimeter)
printf("area is greather than perimeter");
else
printf("area is not greather than perimeter");


printf("\n\n--------------------QUESTION NO-16-----------------");
printf("enter month number");
scanf("%d",&month);
if(month==1)printf("january");
if(month==2)printf("febuary");
if(month==3)printf("march");
if(month==4)printf("april");
if(month==5)printf("may");
if(month==6)printf("june");
if(month==7)printf("july");
if(month==8)printf("august");
if(month==9)printf("september");
if(month==10)printf("october");
if(month==11)printf("november");
//if(month==11)           printf("");
if(month==12)printf("december");


printf("\n\n---------------------QUESTION NO-17-----------------");
printf("enter the number of day of the week");
scanf("%d",&day);
if(day==1)
printf("sunday");
if(day==2)printf("monday");
if(day==3) printf("tuesday");
if(day==4)printf("wednesday");
if(day==5)printf("thrusday");
if(day==6)printf("friday");
if(day==7) printf("saturday");

getch();
}