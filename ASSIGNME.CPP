#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
int i,j,flag,qn,n1,n2,n3;
int qp,k,swing;
int number,copy,rem,sum=0;
float n,m;
char alph;
float a,b,c,y,z;
int marks,pro;
int month,day;
float commission,sales,salary,length,breadth,area,perimeter;

int choice,choice3,choice2;
char sec;
float cons=4.7,x;
printf("enter the section of question");
scanf("%c",&sec);
//======================SECTION B===================================
if(sec=='B'||sec=='b')

    {
    printf("enter question number");
    scanf("%d",&qn);

	    if(qn==4){
    printf("--------------------QUESTION-4---------------------------------------");


      printf("ENTER THE NUMBER\n");
      scanf("%f",&n);
      for(i=1;i<=10;i++)
      { m=i*n;
	printf("%f\t*\t%d=\t%f\n",n,i,m);
       }
     }
     if(qn==5)
     {printf("-------------------QUESTION NO-5-------------------");
     printf("\n enter a number");
     scanf("%d",&number);
     copy=number;
     while(number|=0)
     {rem=number%10;
     sum=sum+pow(rem,3);
     number=number/10;
     }
     if(copy==number)
     printf("armstrong number");
     else
     printf("not armstrong number");
     }



     //--------------------QUESTION-26----------------------------------------
//26_1
    if(qn==26)
    { printf("enter the subquestion number");
     scanf("%d",&qp);
    //0000000000000000000000--26-4--000000000000000000000000000
     if(qp==4)
     {
      for(i=1;i<=5;i++)
       { for(j=5;j>=i;j--)
	  {printf(" ");
	   }
	 for(k=1;k<=i;k++)
	  {printf("*");
	   }
	 printf("\n");
       }
      }//printf("\n\n");
      //0000000000000000000000--26-3--00000000000000000000
      if(qp==3)
       {  swing=1;
	  for(i=5;i>=1;i--)
	  { for(k=swing;k>=0;k--)
	     {printf(" ");

	      }
	    for(j=i;j>=1;j--)
	     {printf("*");
	      }
	    swing++;
	    printf("\n");
       }  }//printf("\n\n");
       //00000000000000000000--26-1--0000000000000000000
       if(qp==1)
       {
	 for(i=1;i<=5;i++)
	   {for(j=1;j<=i;j++)
	     {printf("* ");
	      }
	    printf("\n");
       }    }
  //26_2
  //0000000000000000000000--26-2--00000000000000000
       if(qp==2)
       {
	for(i=5;i>=1;i--)
	 { for(j=1;j<=i;j++)
	    {printf("* ");
	     }
	   printf("\n");
       } }//printf("\n\n");}
   }
   //---------------------QUESTION NO-24-----------------------
if(qn==24)
{printf("enter the subquestion number");
scanf("%d",&qp);
//0000000000000000000000--24-3000000000000000000000000000
 if(qp==3)
  { for(i=5;i>=1;i--)
    {c=1;
      for(j=1;j<=i;j++)
      {printf("%d",c);
       c++;
      }
     printf("\n");
   } }//printf("\n\n");
   //0000000000000000000000--24-1--000000000000000000000000
    //24_1
 if(qp==1)
  {
     for(i=1;i<=5;i++)
     {  for(j=1;j<=i;j++)
	 { printf("%d",j);
	 }

      printf("\n");
     }
  }//printf("\n\n");}
  }
  //----------------------QUESTION NO 25-----------------------
if(qn==25)
{ printf("enter the subquestion number");
scanf("%d",&qp);
//00000000000000000000000000--25-1--0000000000000000000000000
  if(qp==1)
  {

   for(i=1;i<=5;i++)
    { for(j=1;j<=i;j++)
      { printf("%d",i);
       }
      printf("\n");
    }
  }//printf("\n\n");

    //0000000000000000000--25-4--0000000000000000000
 if(qp==4)
 {
   for(i=1;i<=5;i++)
    { for(j=1;j<=i;j++)
       {swing=i*i;
	printf(" %d",swing);
       }
      printf("\n");
     }
  }//printf("\n\n");

	  //00000000000000--25-3--0000000000000000000000000
 if(qp==3)
  {
    for(i=1;i<=5;i++)
    {
    for(j=1;j<=i;j++)
     {swing=j*j;
      printf(" %d",swing);
     }
     printf("\n");
    }
  }//printf("\n\n");
    //00000000000000000000--25-2--0000000000000000000000
 if(qp==2)
 {
 swing=1;
 for(i=1;i<=5;i++)
   {
     for(j=1;j<=i;j++)
     {
      printf("%d",swing);
      swing++;
     }
     printf("\n");
   }
 }//printf("\n\n");
   //0000000000000000000000--END--0000000000000

}
 //------------------------------QUESTION-27-----------------------



if(qn==27)
  { printf("enter sub_question no");
  scanf("%d",&qp);
  //00000000000000000000000000000--27-3--00000000000000000000000000000
   if(qp==3)
   {
    for(i=1;i<=5;i++)
    { for(j=1;j<=i;j++)
      {
       printf("*");

      }
       printf("\n");
    }//printf("\n\n");
    for(i=4;i>=1;i--)
     { for(j=1;j<=i;j++)
       { printf("*");
       }
	printf("\n");
      }
    }

    //00000000000000000000000000000--27-4--00000000000000000000000000

  if(qp==4)
  {
   for(i=5;i>=1;i--)
    {for(j=1;j<=5;j++)
      {if(j<=i)
       printf("*");
      else
       printf(" ");
      }
     for(j=5;j>=1;j--)
       {if(j<=i)
	 printf("*");
	else
	 printf(" ");
       }
     printf("\n");
     }
   }
   //000000000000000000000000--END OF THIS QUES--00000000000000000

//------------------------------------------------------------

else
{
printf("program is not declared here");
}
 }


    //--------QUESTION ELSE CONDITION FOR SECTION B-----------------------------
   //else       {
   //printf("\n question not declared in section b\n");
  //}
 //------------------------------------------------------------------------

		 }
 //==========================SECTION-A=================================
if(sec=='A'||sec=='a')
{               printf("enter question number");
scanf("%d",&qn);
if(qn==2)
{printf("---------------QUESTION NO-2-----------------");
printf("enter three numbers");
scanf("%d%d%d",&n1,&n2,&n3);
if(n1>=n2 && n1>=n3)
printf("%d is greatest",n1);
if(n2>=n1 && n2>=n3)
printf("%d is greatest",n2);
if(n3>=n1 && n3>=n2)
printf("%d is greater",n3);
}




    if(qn==8){
//----------------QUESTION N0-8-----------------------
  printf("ENTER THE VALUE OF X\n");
      scanf("%f",&x);
if(x==cons)
printf("IF X IS EQUAL TO 4.7 ENTER 1\n");
if(x>cons)
printf("IF X IS GREATER THAN 4.7 ENTER 2\n");
if(x<cons)
printf("IF X IS LESS THAN 4.7 ENTER 3\n");
     printf("enter ur choice\n");
     scanf("%d",&choice);
switch(choice)
{case 1:
  {z=3*pow(x,2)+21.2*x-0.8;
  }
 case 2:
 {z=3*pow(x,2)+21.3*x-1.6;
 }

 case 3:
 {z=3*pow(x,2)-7*x+2;
 }

}
printf("the value of z is %f after:\n\n",z);
printf("for the following conditional function of x:\n");
printf("z=3x^2-7x+2 \t\t\t\t\tif x<4.7\n");
printf("z=3x^2+21.2x-0.8 \t\t\tif x=4.7\n");
printf("z=3x^2+21.3x-1.6 \t\t\tif x>4.7\n");


}
//-------------------------------------------------------

if(qn==9)
{printf("according to given question");
printf("for the following conditional function of x:\n");
printf("y=a*x+b \t\t\t\t\tif k=1\n");
printf("y=a*pow(x,2)+b; \t\t\tif k=2\n");
printf("y=a*x \t\t\tif k=3\n");
printf("y=a+x \t\t\tif k=4\n");
printf("ENTER THE VALUE OF k\n");
scanf("%f",&k);
printf("which method do u like for solution\n");
printf("for IF enter 1 and for SWITCH enter 2\n");
scanf("%d",&choice);
if(choice==1)
       {  choice2=k;
	 if(choice==1)
	    {
	     printf("enter the value of a and b and x\n");
	     scanf("%f%f%f",&a,&b,&x);
	     y=a*x+b;
	     }
	 if(choice==2)
	     {
	     printf("enter the value of a and b and x");
	     scanf("%f%f%f",&a,&b,&x);
	     y=a*pow(x,2)+pow(b,2);
	     }
	 if(choice2==3)
	    {
	    printf("enter the value of a and x");
	    scanf("%f%f",&a,&x);
	    y=a*x;
	   }
	 if(choice2==4)
	  {
	    printf("enter the value of a and x ");
	    scanf("%f%f",&a,&x);
	    y=a+x;
	    }
       }
if(choice==2)
{        printf("by using switch case");
	 choice3=k;
	switch(choice3)
	   {
	   case 1:
	     {
	     printf("enter the value of a and b and x");
	     scanf("%f%f%f",&a,&b,&x);
	     y=a*x+b;
	     }
	   case 2:
	     {
	     printf("enter the value of a and b and x");
	     scanf("%f%f%f",&a,&b,&x);
	     y=a*pow(x,2)+b;
	      }

	   case 3:
	     {
	     printf("enter the value of a and x");
	     scanf("%d%d",&a,&x);
	      y=a*x;
	      }
	   case 4:
	     {
	     printf("enter the value of a and x");
	     scanf("%d%d",&a,&x) ;
	     y=a+x;
	     }
	    default:

	       printf("donot not defined the function of x on the value of k which is given by u");


}     }

printf("the value of y is %f after:\n\n",y);
	     }
	    if(qn==11){
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
 //printf("do u want to procede to next\npress 1 ");
// scanf("%d",&pro);
// if(pro==1)
//clrscr();
}

if(qn==12)
{
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

 }
if(qn==13){
printf("---------------QUESTION NO-13-----------------\n");
printf("enter salary of employee\n");
scanf("%f",salary);
	   }
	   if(qn==14){
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

}
if(qn==16){
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
}

if(qn==17){
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
	   }




//-----------------------------------------------------
 if(qn==5)
 {   printf("enter an alphabet:");
    scanf("%c",&alph);

    if(alph=='a'||alph=='e'||alph=='i'||alph=='o'||alph=='u'||alph=='U'||alph=='O'||alph=='I'||alph=='E'||alph=='A')
      printf("%c is vowel",alph);
    else
     printf("%c is not vowel",alph);
 }
 //--------------------------------------------------
if(qn==4)
   {printf("enter an integer:");
    scanf("%d",&number);
    if(number%2==0)
    printf("%d iseven number",number);
    else
    printf("%d is odd number",number);
   }
   //-------------------------------------------------
//else
// printf("\n question number not declared\n");
 //-----------------------------------------------
		    }
//else
//printf("\n section not declared\n");
      getch();
}