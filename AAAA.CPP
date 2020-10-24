#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int i,j,k,l,n;
int y,Y,x;
int csw;
int tempa,tempb,process[10];
int avwait=0,avtat=0,time,count,remain;
int turn_around_time[10],waiting_time[10];
int finish_time[10],burst_time[10],prio[10];
int arrival_time[10],current_time[10],initial_time;
int arrive_first,arrive_last,ch;
void fcfs();
void impli();
void print();
void choice();
void sort_arrival();
void sort_burst();
void sort_priority();
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
   // for(i=1;i<=n;i++)
    //{printf("process[%d]\t%d\t%d\t%d\t%d\t%d\n",i,arrival_time[i],burst_time[i],current_time[i],waiting_time[i],turn_around_time[i]);
    //}
    avwait/=n;
    avtat/=n;
    printf("\n%d\t%d is av waiting and turn around time",avwait,avtat);
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

       if(x==1)
       {printf("1\n");

	waiting_time[1]=arrival_time[1];
	printf("waiting time:");
	printf("%d\t",waiting_time[1]);
	turn_around_time[1]=burst_time[1];

	current_time[1]=burst_time[1]+arrival_time[1];
	printf("\t%d\t",waiting_time[1]);
	printf("%d\n",turn_around_time[1]);
	for(i=2;i<=n;i++)
	  {   current_time[i]=current_time[i-1]+burst_time[i];
	      waiting_time[i]=current_time[i]-arrival_time[i]-burst_time[i];
	      turn_around_time[i]=waiting_time[i]+burst_time[i];
	   printf("\t%d\t%d\n",waiting_time[i],turn_around_time[i]);
	  }

	  for(i=1;i<=n;i++)
	    {avwait=avwait+waiting_time[i];
	     avtat=avtat+turn_around_time[i];
	     }printf("\t%d\n%d",avwait,avtat);
 }
    if(x==2)
	{ printf("2");
	printf("do u like to go from preemption or not?\ntype pr for premmption\ntype np for non preemption");
	scanf("%d",&csw);

	if(csw==1)
	{
					    printf("processing to a better time");
	}
	if(csw==0)
	{

	 turn_around_time[1]=burst_time[1];

	current_time[1]=burst_time[1]+arrival_time[1];
	printf("\t%d\t",waiting_time[1]);
	printf("%d\n",turn_around_time[1]);
	sort_burst();   }
	for(i=2;i<=n;i++)
	  {   current_time[i]=current_time[i-1]+burst_time[i];
	      waiting_time[i]=current_time[i]-arrival_time[i]-burst_time[i];
	      turn_around_time[i]=waiting_time[i]+burst_time[i];
	      printf("\t%d\t%d\n",waiting_time[i],turn_around_time[i]);
	  }
	for(i=1;i<=n;i++)
	    {avwait=avwait+waiting_time[i];
	     avtat=avtat+turn_around_time[i];
	     }printf("\t%d\n%d",avwait,avtat);
	 }
       if(x==3)
	 {printf("3");
           printf("do u like to go from preemption or not?\ntype pr for premmption\ntype np for non preemption");
	scanf("%d",&csw);

	if(csw==1)
	{printf("1\n");

	waiting_time[1]=arrival_time[1];
	printf("waiting time:");
	printf("%d\t",waiting_time[1]);
	turn_around_time[1]=burst_time[1];

	current_time[1]=burst_time[1]+arrival_time[1];
	printf("\t%d\t",waiting_time[1]);
	printf("%d\n",turn_around_time[1]);
	for(i=2;i<=n;i++)
	  {   current_time[i]=current_time[i-1]+burst_time[i];
	      waiting_time[i]=current_time[i]-arrival_time[i]-burst_time[i];
	      turn_around_time[i]=waiting_time[i]+burst_time[i];
	   printf("\t%d\t%d\n",waiting_time[i],turn_around_time[i]);
	  }

	  for(i=1;i<=n;i++)
	    {avwait=avwait+waiting_time[i];
	     avtat=avtat+turn_around_time[i];
	     }printf("\t%d\n%d",avwait,avtat);
					    printf("processing to a better time");
	}
	if(csw==0)
	{

	 turn_around_time[1]=burst_time[1];

	current_time[1]=burst_time[1]+arrival_time[1];
	printf("\t%d\t",waiting_time[1]);
	printf("%d\n",turn_around_time[1]);
	sort_priority();   }
	for(i=2;i<=n;i++)
	  {   current_time[i]=current_time[i-1]+burst_time[i];
	      waiting_time[i]=current_time[i]-arrival_time[i]-burst_time[i];
	      turn_around_time[i]=waiting_time[i]+burst_time[i];
	      printf("\t%d\t%d\n",waiting_time[i],turn_around_time[i]);
	  }
	for(i=1;i<=n;i++)
	    {avwait=avwait+waiting_time[i];
	     avtat=avtat+turn_around_time[i];
	     }printf("\t%d\n%d",avwait,avtat);
	 //sort_priority();
	 //priority();
	  }
       if(x==4)
       {int time_quantum,remain,flag=0,rt[10];

	printf("4");
	  sort_arrival();
	printf("Enter Time Quantum:\t");


	scanf("%d",&time_quantum);


       printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n");
	for(time=0,count=0;remain!=0;)


{

if(rt[count]<=time_quantum && rt[count]>0)


	   {

time+=rt[count];


		 rt[count]=0;


}
else if(rt[count]>0)


     {

	  rt[count]-=time_quantum;


	 time+=time_quantum;

}

if(rt[count]==0 && flag==1)


	 {
remain--;

printf("P[%d]\t|\t%d\t|\t%d\n",count+1,time-arrival_time[count],time-arrival_time[count]-burst_time[count]);
	      waiting_time[i]+=time-arrival_time[count]-burst_time[count];


	     turn_around_time+=time-arrival_time[count];


	     flag=0;


	  }


if(count==n-1)


{count=0;
}

else if(arrival_time[count+1]<=time)


{count++;

else
count=0;
}


}


printf("\nAverage Waiting Time= %f\n",waiting_time*1.0/n);

printf("Avg Turnaround Time = %f",turnaround_time*1.0/n);


       //roundrobin();
	  }
      /* else
	 { printf("wrong choice");
	  }*/
      }
void sort_burst()
{
for(k=2;k<=n;k++)
 {for(l=2;l<=n-k;l++)
  {if(burst_time[l]>burst_time[l+1])
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
 }  }
   }
}void sort_priority()
{
for(k=2;k<=n;k++)
 {for(l=2;l<=n-k;l++)
  {if(prio[l]>prio[l+1])
   {tempa=arrival_time[l];
   arrival_time[l]=arrival_time[l+1];
   arrival_time[l+1]=tempa;
    tempa=burst_time[l];
   //arrival_time[l]=arrival_time[l+1];
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
}}
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

     waiting_time[i]=finish_time[i]-arrival_time[i]-burst_time[i];
     turn_around_time[i]=burst_time[i]+waiting_time[i];
     printf("%d\n",waiting_time[i]);
     printf("%d\n",turn_around_time[i]);
   }
}