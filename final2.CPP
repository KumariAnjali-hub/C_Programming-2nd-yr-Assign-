#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#include<math.h>
int factorial(int);
int convertBinaryToDecimal(long long n);
long long convertOctalToDecimal(int octalNumber);
int convertDecimalToOctal(int decimalNumber);
void main()
{clrscr();
int t,remainder;
int i,j,flag,qn,n1,n2,n3;
int qp,k,swing;
int number,copy,rem,sum=0;
int n,m;
char alph;
float a,b,c,y,z;
int marks,pro;
int month,day;
float commission,sales,salary,length,breadth,area,perimeter;
int choice,choice3,choice2,count;
char sec;
float cons=4.7,x;
printf("enter the section of question");
scanf("%c",&sec);
if(sec=='b'||sec=='B'){
printf("======================SECTION B================================");
 printf("\nEnter question number:");
 scanf("%d",&qn);
 if(qn==14){
 printf("\n\n-------------------------question no-14-----------------------\n\n");
 printf("\nsolution for the series:\n---------------\ns = x - 1/3+1/5.....\n----------------\n");
 printf("\nenter the value of x");
 scanf("%d",&x);
 printf("enter how many terms");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {if(i==1)
 sum=sum+x;
 else
 {c=2*i+1;
 sum=sum+1/c;
 }
 }
 printf("solution of sum of the series",sum);
 }

 if(qn==15){
 sum=0;
 printf("\n\n-------------------------question no-15------------------------\n\n");
 printf("\nsolution for the series:\n---------------\ns =1!/1!+2!/2!+.......\n----------------\n");
 printf("how many terms?");
 scanf("%d",&n);
 if(n%2==0)sum=0;
 else
 sum=1;
 printf("solution of sum of the series",sum);
 }
 if(qn==16){
 sum=0;
 printf("\n\n-------------------------question no-16------------------------\n\n");
 printf("\nsolution for the series:\n---------------\ns = 1!+2!+..........\n----------------\n");
 printf("\nenter the value of x");
 scanf("%d",&x);
 printf("how many terms");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {if(i%2==0)sum=sum-factorial(i);
 else
 sum=sum+factorial(i);
 }
 printf("solution of sum of the series",sum);
 }
 if(qn==17){
 sum=0;
 printf("\n\n-------------------------question no-17-------------------------\n\n");
 printf("\nsolution for the series:\n---------------\ns = 1+(1+2)+(1+2+3)+.......\n----------------\n");
 printf("\nenter the value of x");
 scanf("%d",&x);
 printf("how many terms");
 scanf("%d",&n);
 c=0;
 for(i=1;i<=n;i++)
 {j=1;
 while(j<=i)
 {c=c+j;}
 sum=sum+c;
 }
 printf("solution of sum of the series",sum);
 }
 if(qn==18){
 sum=0;
 printf("\n\n-------------------------question no-18-------------------------\n\n");
 printf("\nsolution for the series:\n---------------\ns = x - x^3/3! + x^5/5! - x^7/7!......x^n/n!\n----------------\n");
 printf("\nenter the value of x");
 scanf("%d",&x);
 printf("how many terms?");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {c=pow(x,2*n-1);
 if(i%2==0)
 sum=sum-c/factorial(2*n-1);
 else
 sum=sum+c/factorial(2*n-1);
 }
 printf("solution of sum of the series",sum);
 }
 if(qn==19){
 sum=0;
 printf("\n\n-------------------------question no-19------------------------\n\n");
 printf("how many terms?");
 scanf("%d",&n);
 printf("\nsolution for the series:\n---------------\ns = x - x^2/2! + x^4/4! - x^6/6!......x^n/n!\n----------------\n");
 printf("\nenter the value of x");
 sum=sum+x;
 for(i=1;i<n;i++)
 {c=pow(x,2*i);
 if(i%2==0)
 {sum=sum+c/factorial(2*i);
 }
 else
 {sum=sum-c/factorial(2*i);
 }
 }
 printf("solution of sum of the series",sum);
 }
 if(qn==28)
 {printf("------------------------------question-28---------------------------");
  printf("enter the subquestion number");
     scanf("%d",&qp);
if(qp==3){
c=1;
printf("00000000000000000000--part-3--000000000000000000000");
for(i=5;i>=1;i++)
{for(k=c;k>=0;k--)
{printf(" ");
}
for(j=i;j>=1;j++)
{printf("%c",(char)(c+64));
}c++;
printf("\n");
}
}
//28 2
 if(qp==2){
 printf("00000000000000000000--part-2--000000000000000000000");
 for(i=1;i<=n;i++)
    {
	for(j=i;j<=n;j++)
	{
	    printf("%c",(char)(i+64));
	}
	printf("\n");
    }
 }
//28 1
 if(qp==1){
 printf("\n000000000000000000000--part-1--0000000000000000000000\n");
 for(i=1;i<=n;i++)
    {
	for(j=1;j<=i;j++)
	{
	    printf("%c",(char)(i+64));
	}
	printf("\n");
    }
 }
//28 4
 if(qp==4){    k=1;
 printf("\n00000000000000000000000--part-4--000000000000000000000\n");
  printf("\nFloyd's Triangle using alphabets/characters\n");
    for(i=1;i<=5;i++)
    {
	for(j=1;j<=i;j++,k++)
	{
	    printf("%4c",(char)(k+64));
	}
	printf("\n");
    }
 }
 }
 if(qn==29)
 {
 printf("\n--------------------------question no-29--------------------------");

//29 1
 if(qp==1){
 printf("\n00000000000000000000000-part-1-0000000000000000000000");
 for(i=1;i<=5;i++)
    {
	for(j=1;j<=(i*2-1);j++)
	{
	    printf("%c",(char)(j+64));
	}
	printf("\n");
    }
 }


//29 2
 if(qp==2){
 printf(" ");
 for(i=1;i<=n;i++)
    {
	for(j=1;j<=n-i+1;j++)
	{
	    printf("%c",(char)(j+64));
	}
	printf("\n");
    }
 }


 }




//b7
 if(qn==7){
printf("\n\n-------------------------question no-7-----------------------\n\n");
 printf("Enter an integer\n");
   scanf("%d", &n);

   t = n;

   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }

   printf("Sum of digits of %d = %d\n", n, sum);


 }
//b10
 if(qn==10){
 int n1, n2, i, gcd;
printf("\n\n-------------------------question no-10-----------------------\n\n");
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
	// Checks if i is factor of both integers
	if(n1%i==0 && n2%i==0)
	    gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);
 }
 if(qn==8){
 printf("\n\n-------------------------question no-8-----------------------\n\n");
    int n, reversedInteger = 0, remainder, originalInteger;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalInteger = n;

    // reversed integer is stored in variable
    while( n!=0 )
    {
	remainder = n%10;
	reversedInteger = reversedInteger*10 + remainder;
	n /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
	printf("%d is a palindrome.", originalInteger);
    else
	printf("%d is not a palindrome.", originalInteger);
 }
 if(qn==6){
 printf("\n\n-------------------------question no-6-----------------------\n\n");
 int  reversedNumber = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
	remainder = n%10;
	reversedNumber = reversedNumber*10 + remainder;
	n /= 10;
    }

    printf("Reversed Number = %d", reversedNumber);
 }
 if(qn==2)
 {printf("\n\n-------------------------question no-2-----------------------\n\n");
 sum=0;
 for(i=2; i<=100; i+=2)
    {
	/* Add current even number to sum */
	sum += i;
    }

    printf("Sum of all even number between 1 to 100 = %d", sum);

 }
 if(qn==1){
printf("\n\n-------------------------question no-1-----------------------\n\n");
 sum=0;
 for(i=1;i<=100;i++)
     { sum+=i;}
  printf("Sum= %d\n", sum);
      }

//b3
 if(qn==3){
printf("\n\n-------------------------question no-3-----------------------\n\n");
 sum=0;
 for(i=100;i<=200;i++)
     { if(i%7==0)sum+=i;
     }
  printf("Sum= %d\n", sum);
 }


 if(qn==12){
 printf("\n\n-------------------------question no-12-----------------------\n\n");
 int octalNumber;

    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);

    printf("%d in octal = %lld in decimal", octalNumber, convertOctalToDecimal(octalNumber));
 }

 if(qn==9){
 printf("\n\n-------------------------question no-9-----------------------\n\n");
 i = 3;

   printf("Enter the number of prime numbers required\n");
   scanf("%d",&n);

   if ( n >= 1 )
   {
      printf("First %d prime numbers are :\n",n);
      printf("2\n");
   }

   for ( count = 2 ; count <= n ;  )
   {
      for ( k= 2 ; k <= i - 1 ; k++ )
      {
	 if ( i%k== 0 )
	    break;
      }
      if ( k== i )
      {
	 printf("%d\n", i);
	 count++;
      }
      i++;
 }   }



 if(qn==11){
 printf("\n\n-------------------------question no-11-----------------------\n\n");
 printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal", n, convertBinaryToDecimal(n));
 }
 if(qn==13){
 printf("\n\n-------------------------question no-13-----------------------\n\n");

 printf("enter how many terms");
 scanf("%d",&n);

 printf("\n%d %d",n1,n2);//printing 0 and 1
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed
 {
  n3=n1+n2;
  printf("%d",n3);
  n1=n2;
  n2=n3;
 }
 }

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
 if(qn==20){
 printf("\n\n--------------------------question no-20------------------------\n\n");
 printf("\nsolution for the sum of series:\n----------\ns=1 + x^2/2 + x^3/3 + ........x^n/n");
 printf("\nhow many terms in the series");
 scanf("%d",&n);
 printf("enter the value of x");
 scanf("%d",&x);
 for(i=1;i<=n;i++)
 {if(i==1)
 sum=sum+1;
 else
 {
 c=pow(x,i);
 sum=sum+c/i;
 }
 }
 printf("sum of series=%d",sum);
 }

 if(qn==21){
 printf("\n\n---------------------------question no-21------------------------\n\n");
 printf("\nsolution for the series sum:\n-------------\ns=1^4 + 2^4 +3^4.......n^4");
 printf("how many terms in the series");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 { c=pow(i,4);
 sum=sum + c;
 }
 printf("sum of this series=%d",sum);
 }
 if(qn==22){
 sum=0;
 printf("\n\n---------------------------question no-22-------------------------\n");
 printf("\nsolution for the series sum:\n--------------\ns =1! + 2! + 3!.......n!");
 //printf("\nenter the value of x");
 //scanf("%d",&x);
 printf("how many terms in this series");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {c=factorial(i);

 sum=sum+c;
 }
 printf("sum of the series is %d",sum);
 }

 if(qn==23){
 sum=0;
 printf("\n\n---------------------------question no-23--------------------------\n");

 printf("\nsolution for the series:\n---------------\ns = x - x^3 + x^5 - x^7......x^n\n----------------\n");
 printf("\nenter the value of x");
 scanf("%d",&x);
 printf("enter the no of terms in the series");
 scanf("%d",&n);
 i=1,count=1;
 while(i<=n)
 {         c=pow(x,i);
	   if(count%2==0)
			 {sum=sum-c;}
	   else
		{sum=sum+c;}
	   count++;
 i=i+2;
 }
 printf("sum of the series=%d",sum);
 }





 if(qn==26)
    {printf("--------------------QUESTION-26----------------------------------------");
//26_1
    printf("enter the subquestion number");
     scanf("%d",&qp);
    //0000000000000000000000--26-4--000000000000000000000000000
     if(qp==4)
     {printf("0000000000000000000000--26-4--000000000000000000000000000");
      for(i=1;i<=5;i++)
       { for(j=5;j>=i;j--)
	  {printf(" ");
	   }
	 for(k=1;k<=i;k++)
	  {printf("*");
	   }
	 printf("\n");
       }
      }
      if(qp==3)
       {  printf("0000000000000000000000--26-3--000000000000000000000000000");
          swing=1;
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
       
       if(qp==1)
       {printf("0000000000000000000000--26-1--000000000000000000000000000");
	 for(i=1;i<=5;i++)
	   {for(j=1;j<=i;j++)
	     {printf("* ");
	      }
	    printf("\n");
       }    }
  
       if(qp==2)
       {printf("0000000000000000000000--26-2--000000000000000000000000000");
	for(i=5;i>=1;i--)
	 { for(j=1;j<=i;j++)
	    {printf("* ");
	     }
	   printf("\n");
       } }//printf("\n\n");}
   }
   
 if(qn==24)
 {printf("----------------------QUESTION NO 24-----------------------");
printf("enter the subquestion number");
 scanf("%d",&qp);
 if(qp==4)
{printf("0000000000000000000000--24-2--000000000000000000000000000");
for(i=1;i<=4;i++)
{c=1;
for(j=1;j<=4;j++)
{if(j<=4-i)
{printf(" ");
}
else
{printf("c");
c++;}
}
}
}

 if(qp==2){printf("0000000000000000000000--24-2--000000000000000000000000000");
for(i=1;i<=4;i++)
{c=1;
for(j=i;j<=4;j++)
{printf("c");
c++;
}
}
}
 //
 if(qp==3)
  {printf("0000000000000000000000--24-3--000000000000000000000000000");
 for(i=5;i>=1;i--)
    {c=1;
      for(j=1;j<=i;j++)
      {printf("%d",c);
       c++;
      }
     printf("\n");
   } }//printf("\n\n");
   //
    //24_1
 if(qp==1)
  {printf("0000000000000000000000--24-1--000000000000000000000000000");
     for(i=1;i<=5;i++)
     {  for(j=1;j<=i;j++)
	 { printf("%d",j);
	 }

      printf("\n");
     }
  }//printf("\n\n");}
  }
  //
 if(qn==25)
 {printf("----------------------QUESTION NO 25-----------------------");
 printf("enter the subquestion number");
 scanf("%d",&qp);
 //00000000000000000000000000--25-1--0000000000000000000000000
  if(qp==1)
  {
printf("00000000000000000000000000000--part 1--00000000000000000000000000000");
   for(i=1;i<=5;i++)
    { for(j=1;j<=i;j++)
      { printf("%d",i);
       }
      printf("\n");
    }
  }//printf("\n\n");

    //0000000000000000000--25-4--0000000000000000000
 if(qp==4)
 {printf("00000000000000000000000000000--part 4--00000000000000000000000000000");
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
  {printf("00000000000000000000000000000--part 3--00000000000000000000000000000");
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
 {printf("00000000000000000000000000000--part 2--00000000000000000000000000000");
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
 if(qn==27){
 printf("------------------------------QUESTION-27-----------------------");
 printf("enter sub_question no");
  scanf("%d",&qp);
  //
   if(qp==3)
   {printf("00000000000000000000000000000--27-3--00000000000000000000000000000");
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

  if(qp==4)
  {printf("0000000000000000000000--27-4--000000000000000000000000000");
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
   //------------------------------------------------------------

 if(qn>29)
 {
 printf("\nthis question of the section is not declared here");
 }
 }

		 }
 //
 if(sec=='A'||sec=='a')
 {printf("\n==========================SECTION-A=================================\n")   ;
 printf("enter question number");
 scanf("%d",&qn);

 int n,i,j,count,x;
 int sum=0,c;
 if(qn==1){
 printf("\n----------------------------------question no-1------------------------------\n");
 i = 3;

     for ( count = 2 ; count <= 300 ;  )
   {
      for ( k= 2 ; k <= i - 1 ; k++ )
      {
	 if ( i%k== 0 )
	    break;
      }
      if ( k== i )
      {
	 printf("%d\n", i);
	 count++;
      }
      i++;
 }   }

 
if(qn==6){
printf("\n----------------------------------question no-6------------------------------\n");

 int side1, side2, side3;

    /* Input sides of a triangle */
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);

    if(side1==side2 && side2==side3)
    {
	/* If all sides are equal */
	printf("Equilateral triangle.");
    }
    else if(side1==side2 || side1==side3 || side2==side3)
    {
	/* If any two sides are equal */
	printf("Isosceles triangle.");
    }
    else
    {
	/* If none sides are equal */
	printf("Scalene triangle.");
    }
 }
  if(qn==7){
       printf("\n----------------------------------question no-7------------------------------\n");

		  printf(" Enter age of ram shyam and ajay");
		  scanf("%d %d %d", &x, &y, &z);
		  if((x < y)&&(x < z))
		  printf("ram is youngest");
		  else
		 {
		 if(y < z)
		 printf("\nshyam is youngest");
		 else
		 printf("\najay is youngest");
		 }



 }
 if(qn==3){
 printf("\n----------------------------------question no-3------------------------------\n");
 int year;
   printf("enter the year");
   scanf("%d",&year);

   if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("%d is a leap year", year);
   else
      printf("%d is not a leap year", year);
 }
 if(qn==18){
    printf("\n----------------------------------question no-18------------------------------\n");
    double a1, b1,c1, discriminant, root1, root2, realPart, imaginaryPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf",&a1, &b1, &c1);
    discriminant = b1*b1-4*a1*c1;

    // condition for real and different roots
    if (discriminant > 0)
    {

	printf("real roots");
    }


    else if (discriminant == 0)
    {

	printf("real root");
    }


    else
    {

	printf("imaginary roots");
    }


    }
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
 printf("----------------QUESTION N0-8-----------------------");
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

if(qn==10){
 printf("----------------QUESTION N0-10-----------------------");
 printf("for the following conditional function of x:\n");
 printf("y=1+x \t\t\t\t\tif n=1\n");
 printf("y=1+x/n \t\t\tif n=2\n");
 printf("y=1+x^n \t\t\tif n=3\n");
printf("y=1+n*x \t\t\t\t\tif n=4\n");

 printf("ENTER THE VALUE OF X\n");
      scanf("%f",&x);
printf("enter the value of n\n");
scanf("%d",&n);
 switch(n)
 {case 1:
  {y=1+x;
  }
 case 2:
 {y=1+x/n;
 }

 case 3:
 {c=pow(x,n);
y=1+c;
 }
case 4:
{y=1+n*x;
}
 }
 printf("the value of y is %f after:\n\n",y);
}
if(qn==9)
 {printf("-------------------question no 9------------------------");
 printf("according to given question");
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
 {printf("commission is 15%");
 commission=sales*15/100;
 }
 if(sales>5000)
 {printf("commission is 15.5%");
 commission=sales*15.5/100;
 }
 printf("\ncommission is %f",commission);

 }
 

 if(qn==15){
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
 {printf("\n----------------------------------question no5------------------------------\n"); 
  printf("enter an alphabet:");
    scanf("%c",&alph);

    if(alph=='a'||alph=='e'||alph=='i'||alph=='o'||alph=='u'||alph=='U'||alph=='O'||alph=='I'||alph=='E'||alph=='A')
      printf("%c is vowel",alph);
    else
     printf("%c is not vowel",alph);
 }
 //--------------------------------------------------
 if(qn==4)
   {printf("\n----------------------------------question no-4------------------------------\n");
    printf("enter an integer:");
    scanf("%d",&number);
    if(number%2==0)
    printf("%d iseven number",number);
    else
    printf("%d is odd number",number);
   }
   //-------------------------------------------------
 if(qn==13){         float basic,hra,da,gross;
printf("\n----------------------------------question no-13------------------------------\n");
printf("enter the basic salary\n");
scanf("%f",&basic);
if(basic<1500)
{hra=basic/10;
da=0.9*basic;
}
else
{hra=500;
da=0.98*basic;
}
gross=hra+da+basic;
printf("%f",gross);
}
if(qn==14){    float sell, cost,loss;
printf("\n----------------------------------question no-14------------------------------\n");
printf("enter the value of cost price and selling price");
scanf("%f%f",&cost,&sell);
if(cost>sell)
{printf("loss is occur");
loss=cost-sell;
printf("loss occur by %f",loss);
}
if(cost<sell)
{printf("profit is occur");
loss=sell-cost;
printf("profit occur by %f",loss);
}
}


 if(qn>18)
 { 
printf("\n question number not declared in section A\n");
 }
 }
if(sec!='a'&&sec!='b' && sec!='A' && sec!='B')
{printf("\n section not declared\n");
 }     getch();
}
factorial(int num)
{int fact=1,i,j;
for(j=num;j>=1;j--)
{fact=fact*j;
}
return fact;

}

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
	remainder = n%10;
	n /= 10;
	decimalNumber += remainder*pow(2,i);
	++i;
    }
    return decimalNumber;
}

int convertDecimalToOctal(int decimalNumber)
{
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
	octalNumber += (decimalNumber % 8) * i;
	decimalNumber /= 8;
	i *= 10;
    }

    return octalNumber;
}
long long convertOctalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0)
    {
	decimalNumber += (octalNumber%10) * pow(8,i);
	++i;
	octalNumber/=10;
    }

    i = 1;

    return decimalNumber;
}