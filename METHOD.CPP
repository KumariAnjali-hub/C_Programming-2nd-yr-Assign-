      #include<stdio.h>
      #include<conio.h>
      void main()
      {int num;
      struct process
       {int arrival[100];
       int finish[100];
       int waiting[100];
       int turn[100];
       int burst[100];
       int priority[100];
       }p[10];
      int i;
      printf("how many process which is to be execute");
      scanf("%d",&num);
      printf("enter detail of processes");
      for(i=1;i<=num;i++)
      { printf("enter the arrival of %d process/n",i);
      scanf("%d",p[i].arrival);
      printf("enter the burst time of %d process/n",i);
      scanf("%d",p[i].burst);
      }
      for

getch();
}