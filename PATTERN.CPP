#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{int i,j,qn,qp,c,k,swing;
clrscr();
printf("enter question number and its subpart");
scanf("%d%d",&qn,&qp);
//26_1
if(qn==26&&qp==1){
for(i=1;i<=5;i++)
{for(j=1;j<=i;j++)
{printf("* ");
}
printf("\n");
}};
  //26_2
if(qn==26&&qp==2){
for(i=5;i>=1;i--)
{for(j=1;j<=i;j++)
{printf("* ");
}
printf("\n");
}}//printf("\n\n");
     //24_1
if(qn==24&&qp==1){
for(i=1;i<=5;i++)
{for(j=1;j<=i;j++)
{printf(" %d",j);
}
printf("\n");     }
}//printf("\n\n");
    //25_1
if(qn==25&&qp==1) {

for(i=1;i<=5;i++)
{for(j=1;j<=i;j++)
{printf(" %d",i);
}
printf("\n");      }
}//printf("\n\n");

    //25_4
 if(qn==25&&qp==4){
for(i=1;i<=5;i++)
{for(j=1;j<=i;j++)
{c=i*i;
printf(" %d",c);
}
printf("\n");      }
}//printf("\n\n");

	  //25_3
if(qn==25&&qp==3){
for(i=1;i<=5;i++)
{for(j=1;j<=i;j++)
{c=j*j;
printf(" %d",c);
}
printf("\n");     }
}//printf("\n\n");
    //25.2
if(qn==25 && qp==2){
c=1;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf(" %d",c);
c++;
}
printf("\n");       }
}//printf("\n\n");

	 /*
for(i=1;i<=5;i++)
{            c=i ;
for(j=1;j<=i;j++)
{
    if(j<c){
printf("*");}
else
{printf(" ");
}         c++;
}

printf("\n");
}printf("\n\n");
       */
       //24_3

if(qn==24&& qp==3)
{for(i=5;i>=1;i--)
{c=1;
for(j=1;j<=i;j++)
{printf("%d",c);
c++;
}
printf("\n");
}}//printf("\n\n");

if(qn==26&&qp==4){
for(i=1;i<=5;i++)
{for(j=5;j>=i;j--)
{printf(" ");
}
for(k=1;k<=i;k++)
{printf("*");
}
printf("\n");     }
}//printf("\n\n");

 if(qn==26&& qp==3)
 {             swing=1;
for(i=5;i>=1;i--)
{for(k=swing;k>=0;k--)
{printf(" ");

}
for(j=i;j>=1;j--)
{printf("*");
}
c++;
printf("\n");
}}//printf("\n\n");

if(qn==27&&qp==3){
for(i=1;i<=5;i++)
{for(j=1;j<=i;j++)
{
printf("*");

}
printf("\n");
}//printf("\n\n");
 for(i=4;i>=1;i--)
 {for(j=1;j<=i;j++)
 {printf("*");
 } printf("\n");
 }                }


if(qn==27 && qp==4){
for(i=5;i>=1;i--)
{for(j=1;j<=5;j++)
{if(j<=i)
printf("*");
else
printf(" ");}
for(j=5;j>=1;j++)
{if(j<=i)
printf("*");
else
printf(" ");
}
printf("\n");
}               }


else
{
printf("program is not declared here");
}
getch();
}