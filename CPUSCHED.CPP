#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{printf("how many process/task do u have?");
scanf("%d",&n);
printf("enter the arival time");
for(i=1;i<=n;i++)
{ printf("enter name of the different task orjob or process or thread");
 printf("enter the arival time of the process");
 scanf("%d",arrival[i]);
 printf("enter the bus time of the process");
 scanf("%d",burst[i]);
 }
printf("do u have priority of the process yes or no");
printf("enter y orY for priority");
scanf("%c",&ch);

if((ch==y)||(ch==Y))
 {printf("enter priority for all the process sequencially");
 for(i=1;i<=n;i++)
  {
  scanf("%d",&prio[i]);
  }
printf("enter ur choice/n enter 1 for fifo/n/nenter 2 for sjf /n enter 3 for priority/n enter 4 for round robin");
switch(x)
{ case 1:
      short_arrival();
      fcfs();
      break;
 case 2:
      short_arrival();
      sjf();
      break;
 case 3:
      short_arrival();
      priority();
      break;
 case 4:
      short_arrival();
      roundrobin();
      break;
 default:
      printf("wrong choice");
      exit();
      }
}
void short_arrival()
{for(i=1;i<=n;i++)
 {for(j=1;j<=n-1;j++)
  {if(arrival[j]>arrival[j+1])
   {temp=arrival[j];
    arrival[j]=arrival[j+1];
    arrival[j+1]=temp;
   }
   }
   }
   arrive_first=arrival[1];
   arrive_last=arrive[n];
   }
void fcfs()
{
initial_time=0;
for(i=1;i<=n;i++)
{  if(i=1)
    {current_time[i]=arrival[i];
    initial_time[i]=arrival_time[i];
    finish_time[i]=current_time[i]+burst_time[i];
     }
   else
   {if(finish_time[i-1]>=arrival_time[i])
     {current_time[i]=finish_time[i-1];
      }
    else
    {
   finish_time[i]=current_time[i]+burst_time();




