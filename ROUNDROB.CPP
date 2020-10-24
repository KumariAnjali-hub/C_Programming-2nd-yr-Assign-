#include<stdio.h>
#include<conio.h>
#define TQ=2
//#define SIZE[10]

struct node
{int name0;
int name1;
int arrival;
 int burst;
 }p[10];
//#define TQ=2
int i;
void identity()
{int n,ch;
printf("how many processes do u have?\n");
scanf("%d",&n);
  printf("which type of nomenclature do u have?");
  printf("for algebraic value please insert '1'");
  printf("for numericaric value please insert '0;");
  scanf("%d",&ch);
  printf("enter the process in increasing order in terms of arrival");
  if(ch==1)
  {char p[30];
    for(i=1;i<=n;i++)        //nomenclature of process in algebraic form
     {
    scanf("%c",p[i].name1);   //procces or task
    scanf("%d",&p[i].arrival);//arrival time
    scanf("%d",&p[i].burst);//burst time
     }
  }
  if(ch=0)
  {  int p[30];                      //nomenclature of process in numerical form
     for(i=1;i<=n;i++)
     {
     scanf("%c",&p[i].name0);//processes or task
     scanf("%d",&p[i].arrival);//arival time
     scanf("%d",&p[i].burst);//burst time
     }
}
}
