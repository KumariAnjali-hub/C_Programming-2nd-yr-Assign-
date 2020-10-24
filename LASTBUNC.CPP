#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int i,j,k,l,n,t;
int y,Y,x;
int csw;
int tempa,tempb,process[10];
int avwait=0,avtat=0;
int turn_around_time[10],waiting_time[10];
int finish_time[10],burst_time[10],prio[10];
int arrival_time[10],current_time[10],initial_time,remain_time[10],ti[10];
int arrive_first,arrive_last,ch;
void fcfs();
int nextprocessor(int);
void impli();
void print();
void choice();
void sort_arrival();
void sort_burst();
void sort_priority();
void sjf();
void priority();
void round_robin();
void chkprocess();
void main()
{ int tc,t;
  clrscr();
  printf("how many process/task do u have?\n");
  scanf("%d",&n);
  printf("do u hav time quantum of the process press 1 for yes ");
  scanf("%d",&tc);
  if(tc==1)
  {
   printf("\n \n Enter the time slice of the CPU: ");
   scanf("%d", &t);
  }
  printf("enter the arrival time & burst time\n");
  for(i=1;i<=n;i++)
   { process[i]=i;
  scanf("%d%d",&arrival_time[i],&burst_time[i]);
 remain_time[i] =burst_time[i];
 ti[i]=0;
 waiting_time[i]=0;
 finish_time[i]=0;
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
    printf("enter ur choice/n enter 1 for fifo/n/nenter 2 for sjf /n enter 3 for priority/n enter 4 for round robin");

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
	sort_burst();
	 }
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

	/*if(csw==1)
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
       {int time_quantum,remain,rt[10];

	printf("4");

	  sort_arrival();
	  round_robin();
	  }


      }
void sort_burst()
{
    for(k=2;k<=n;k++)
      {
	for(l=2;l<=n-k;l++)
	{
	 if(burst_time[l]>burst_time[l+1])
	   {
	    tempa=arrival_time[l];
	    arrival_time[l]=arrival_time[l+1];
	    arrival_time[l+1]=tempa;

	    tempa=burst_time[l];
	    burst_time[l]=burst_time[l+1];
	    burst_time[l+1]=tempa;
	    if(ch==1)
	    {
	     tempa=prio[l];
	     prio[l]=prio[l+1];
	     prio[l+1]=tempa;
	    }
	  }
	}
   }
}
}
void sort_priority()
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
void round_robin()
{printf("hello its me 'ROUND ROBIN'");
/*
  int no = 0;
   int time = 0;

  // int nextprocess(int);

   j = 1;
   while(chkprocess(n) == 1)
    { if(arrival_time[no + 1] == time)
      {no++;
      }
    if((ti[j]<=t)&&(remain[j] !=0))
    {
      remain[j]--;
      ti[j]++;
      for(i = 1; i <= no; i++)
       {
	 if((i!=j) && (remain[i] != 0))
	{ waiting_time[i]++; }
	}
       }
      if(remain[j]==0)
       {
	 finish_time[j]=time;
       }
      if((ti[j] >= t)||(remain[j]==0))
       { ti[j] = 0;
	 j=nextprocess(j);
       }
      time++;
    }
    }
    finish_time[n] = time;
    printf("\n\n Process Arrival Burst Waiting Finishing turnaround Tr/Tb \n");
    printf("%s %s %s %s %s %s\n\n", "id", "time", "time", "time", "time", "time");
    for(i = 1;i<= n;i++)
     {
     turn_around_time[i] = waiting_time[i] + burst_time[i];
     printf(" %8d %7d %8d %10d %9d  ", arrival_time[i], burst_time[i], waiting_time[i], finish_time[i], turn_around_time[i] );
     printf("\n\n");
     }*/
 getch();
}
 int chkprocess(int s)
{          printf("heloo checker");
 /*for(i = 1; i <= s; i++)
{ if(remain[i] != 0)
 return 1;
 }
return 0;*/
 }
 //int nextprocess(int k)
//{
/*i=k+1;
 while(chkprocess(i) && i!=k)
  { if(remain[i] != 0)
    {return i;
    }
    else
    { i=(i+1)%no;
    }
  }*/
// }