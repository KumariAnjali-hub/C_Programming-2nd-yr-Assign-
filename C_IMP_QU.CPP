	 #include<conio.h>
	 #include<stdio.h>
	 int fun(int);
	 main()
	 {clrscr();
	 printf("q1");
	 float f=0.1;
		 if(f==0.1)printf("y");
	 else printf("n");
	 printf("q2");
	 int v=91;
    int	b=v>>1;
      int c=v>>1;//shifting operator
	printf("\nleft shift:%d",b);
	printf("q3");
	for(int i=1;i<5;i++){ //looping not for 5
	if(i<=3)continue;
	printf("\nHI%d",i);
	}       printf("\nq4");
	int a=-1;
	printf("\n%d",a++);
	printf("\t%d",--a);
	printf("ques\n");
	int o=10;
	if(o==010)printf("channel");    //010 is not normal integer value it is octal value
	else printf("btech");
	printf("ques\n");
	int y=1,x=2;
	int k=y&x==2;
	printf("%d\n",k);
	printf("ques\n");
	i=-1;
       int j=10;
	 k=0;
	 int l;
	l=i++&&j--&&++k;
	printf("%d%d%d%d\n",i,j,k,l);
	printf("\nques:in which data type the size is varied? a.int, b.char, c.struct, d.double\t THE RIGHT ANSWER IS STRUCT\n");
	printf("which header file should include to use the memory allocation functions like malloc(),calloc(),realloc(),free()/nTHE RIGHT ANSWER IS <stdlib.h>");
    printf("ques\n");
    //  double p=587.671%2;
     // printf("%f",p);  // % is used only for integer value   so compiler shows error
     printf("ques\n");
     i=20;
     j=sizeof(++i);
     k=sizeof(i++);
     printf("%d\n%d\n%d",i,j,k); //study the sizeof function ****
     printf("\nques\n");
     a=4;
     b=7;
     while(++a<--b)printf("hi");
     printf("\nques\n");
     char *h;
     char str[]="ChannelBTech" ;
     h=str;
     h+=7;
     printf("%s",h);
   /*  printf("\nques\n");
     x=97;
     switch(x)
     { case 'a':
     printf("career\n");
     break;
     case 97:
     printf("prime\n");
      break;
      // duplicate case error because ASCII value of a is 97

     }        */
printf("\nques\n");
int arr[4]={1,2,3,4};
int *t=&arr[2];
t=t-1;
printf("%d\n",*t);
	//ptr=7008 then ptr=ptr-1=7008-1=7004
printf("question on precedence and associativity");
printf("\nquestion\n");
	  a=5;
	  i=fun(a);
	  printf("%d",i);
    printf("question:\na=1;\nswitch(a)\n{case 1:printf('welcome');\nbreak;\n case 2:printf('world');continue;/*error misplaced continue*/}\n");
	  printf("\nquestion\n");
	  a=0;
	  if(++a?--a:a++)printf("%d",++a);        //behaving like nested loop
	  else printf("%d",--a);  //output is -1

	  printf("question\n");
	  x=0;
	  if(x++)printf("true\n");
	  else if (x==1)printf("false\n");
	  printf("end of 27 sep 2019 practise");
	  getch();
	  return 0;

//getch();
	 }
fun(int a){a=2;
return 0;}