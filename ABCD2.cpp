#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int i,j,k,l,n;
int y,Y,x;
char ch,tempa,tempb,process[10];
float avwait=0,avtat=0;
int turn_around_time[10],waiting_time[10];
int finish_time[10],burst_time[10],prio[10];
int arrival_time[10],current_time[10],initial_time;
int arrive_first,arrive_last;
void fcfs();
void impli();
void print();
void choice();
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
   { process[i]=i;
   //printf("\nprocess[%d]:\t",i);
  scanf("%d%d",&arrival_time[i],&burst_time[i]);
  //printf("%d\t%d",arrival_time[i],burst_time);

    // scanf("%d",&burst_time[i]);
     //printf("%d",burst_time[i]);
    //printf("\n");
    }

  printf("\ndo u have priority of the process yes or no\n");

   scanf("%d",&ch);

   if(ch==1)
   {
     printf("\nenter priority for all the process sequencially");
     for(i=1;i<=n;i++)
     {
       scanf("%d",&prio[i]);
      }
   }
 if(ch==0)
    {printf("continue but can not perform on priority cpu scheduling/n");
    }
    print();
    sort_arrival();
    print();
    choice();
    getch();
    }
void print()
{
    printf("\nProcessId\tArrivalTime\tBurstTime\tPriority\n");

for(i=1;i<=n;i++)
    {
    printf("process%d:\t",i);
    printf("%d\t\t\t",arrival_time[i]);
    printf("%d\t\t",burst_time[i]);
    if(ch==1)
    {printf("%d",prio[i]);
    }
    if(ch==0)
    {printf("--");
    }
    printf("\n");
    }//getch();
    }
void choice()
    {
    printf("enter ur choice/n enter a for fifo/n/nenter 2 for sjf /n enter 3 for priority/n enter 4 for round robin");

    scanf("%d",&x);


  //  switch(x)

       if(x==1)
       {printf("1\n");
waiting_time[1]=arrival_time[1];
	turn_around_time[1]=burst_time[1];
	current_time[1]=burst_time[1]+arrival_time[1];
	for(i=2;i<=n;i++)
	  {   current_time[i]=arrival_time[i-1]+burst_time[i];
	      turn_around_time[i]=current_time[i]-arrival_time[i];
	      waiting_time[i]=turn_around_time[i]-burst_time[i];
	  }
	//sort_arrival();
	  for(i=1;i<=n;i++)
    {avwait=avwait+waiting_time[i];
    avtat=avtat+turn_around_time[i];
}
	}
       if(x==2)
	{ printf("2");
	  //sort_arrival();
	 //sjf();
	 }
       if(x==3)
	 {printf("3");
	 // sort_arrival();
	 //priority();
	  }
       if(x==4)
       {
	printf("4");
	  //sort_arrival();
	  //roundrobin();
	  }
       else
	 { printf("wrong choice");
	  }
      }




void sort_arrival()
{
for(k=1;k<=n;k++)
 {for(l=1;l<=n-k;l++)
  {if(arrival_time[l]>arrival_time[l+1])
   {tempa=arrival_time[l];
   arrival_time[l]=arrival_time[l+1];
   arrival_time[l+1]=tempa;
    tempa=burst_time[l];
   // arrival_time[l]=arrival_time[l+1];
    burst_time[l]=burst_time[l+1];
    //arrival_time[l+1]=tempa;
    burst_time[l+1]=tempa;
    if(ch==1)
    {tempa=prio[l];
    prio[l]=prio[l+1];
    prio[l+1]=tempa;
     }
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
  // for(k=1;k<=n;k++)
  // {printf("%d",arrival_time[k]);
   //}
   //getch();
  }
void fcfs()
{
 initial_time=0;
 for(i=1;i<=n;i++)
 {
   //if(i==1)
    //{
     //current_time[i]=arrival_time[i];
     //initial_time=arrival_time[i];
     //finish_time[i]=current_time[i]+burst_time[i];
     //waiting_time[i]=current_time[i]-arrival_time[i];
     //turn_around_time[i]=waiting_time[i]+burst_time[i];
     //printf("%d",waiting_time[i]);
     //printf("%d",turn_around_time[i]);

   // }
  // else
  //   {if(finish_time[i-1]>=arrival_time[i])
   //    {current_time[i]=finish_time[i-1];
     //  }
      //else
       //{current_time[i]=arrival_time[i];
	//finish_time[i]=current_time[i]+burst_time[i];
	//}
     //}
     waiting_time[i]=finish_time[i]-arrival_time[i]-burst_time[i];
     turn_around_time[i]=burst_time[i]+waiting_time[i];
     printf("%d\n",waiting_time[i]);
     printf("%d\n",turn_around_time[i]);
   }
   //getch();
}

