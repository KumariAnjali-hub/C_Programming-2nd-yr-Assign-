#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int i,j,k,l,n;
int y,Y,x;
char ch,tempa,tempb,process[10];
int turn_around_time[10],waiting_time[10];
int finish_time[10],burst_time[10],prio[10];
int arrival_time[10],current_time[10],initial_time;
int arrive_first,arrive_last;
void fcfs();
void sort_arrival();
void sjf();
void priority();
void roundrobin();

void main()
{  clrscr();
   printf("how many process/task do u have?\n");
   scanf("%d",&n);
  printf("enter the arrival time & burst time\n");
   for(i=1;i<=n;i++)
   { printf("\nprocess[%d]:\t",i);
  scanf("%d",&arrival_time[i]);
  printf("%d",arrival_time[i]);

     scanf("%d",&burst_time[i]);
     printf("%d",burst_time[i]);
    printf("\n");
    }
  printf("\ndo u have priority of the process yes or no");
//   printf("enter y orY for priority");
   scanf("%c",&ch);

   if((ch==y)||(ch==Y))
   {
     printf("\nenter priority for all the process sequencially");
     for(i=1;i<=n;i++)
     {
       scanf("%d",&prio[i]);
      }
   }
//   else
  //  {printf("continue but can not perform on priority cpu scheduling");
    //}
     //printf("enter ur choice/n enter 1 for fifo/n/nenter 2 for sjf /n enter 3 for priority/n enter 4 for round robin");
    // switch(x)
     //{
       //case 1:*/
	sort_arrival();
	  fcfs();
	 /* break;
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
	  getch();
      }*/
      getch();
}

void sort_arrival()
{
for(k=1;k<=n;k++)
 {for(l=1;l<=n-1;l++)
  {if(arrival_time[l]<arrival_time[l-1])
   {tempa=arrival_time[l];
    tempb=burst_time[l];
    arrival_time[l]=arrival_time[l+1];
    burst_time[l]=burst_time[l+1];
    arrival_time[l+1]=tempa;
    burst_time[l+1]=tempb;

   }
   }

   }
  //arrive_first=arrival_time[1];
   //arrive_last=arrival_time[n];
  // printf("/n%d",arrive_first);
  // printf("/n%d",arrive_last);
 /*  printf("do u want to send process for cpu scheduling");
   scanf("%d",&ch);
   if(ch==y)
   {
   fcfs();
   }
   else
   {getch();
   }*/
   for(k=1;k<=n;k++)
   {printf("%d",arrival_time[k]);
   }
   getch();
  }
void fcfs()
{
 initial_time=0;
 for(i=1;i<=n;i++)
 {
   if(i==1)
    {
     current_time[i]=arrival_time[i];
     initial_time=arrival_time[i];
     finish_time[i]=current_time[i]+burst_time[i];
     waiting_time[i]=current_time[i]-arrival_time[i];
     turn_around_time[i]=waiting_time[i]+burst_time[i];
     printf("%d",waiting_time[i]);
     printf("%d",turn_around_time[i]);

    }
   else
     {if(finish_time[i-1]>=arrival_time[i])
       {current_time[i]=finish_time[i-1];
       }
      else
       {current_time[i]=arrival_time[i];
	finish_time[i]=current_time[i]+burst_time[i];
	}
     }
     waiting_time[i]=finish_time[i]-arrival_time[i]-burst_time[i];
     turn_around_time[i]=burst_time[i]+waiting_time[i];
     printf("%d",waiting_time[i]);
     printf("%d",turn_around_time[i]);
   }
   getch();
}

