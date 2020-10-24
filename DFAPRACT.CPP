#include<stdio.h>
#include<conio.h>
int n;
int check(char,int);
int dfa[10][10];
char c[10],string[10];
int main()
 {
 int nstates,nfinals;
 int f[10];
 int i,j,s=0,final=0;
 printf("enter how many states of dfa?");
 scanf("%d",&nstates);
 printf("how many input symbols in this dfa?");
 scanf("%d",&n);
 printf("enter input symbols");
 for(i=0;i<n;i++)
 {
 printf("\n\n %d input\t",i+1);
 printf("%c",c[i]=getch());
 }
 printf("\n\nenter number of final state\t");
 scanf("%d",&nfinals);
 printf("enter all the final state");
 for(i=0;i<nfinals;i++)
  {scanf("%d",&f[i]);
  }
  printf("\n\n");
  printf("defined transition rule as (initial state,input symbol )---->final state\n");
  for(i=0;i<n;i++)
  {for(j=0;j<nstates;j++)
  {
   printf("\n(q&d,%c)=q",j,c[i]);
  scanf("%d",&dfa[i][j]);
  }
  }
 do
 {i=0;
 printf("\n\nEnter input string....");
 scanf("%s",string);
 }
 while(string[i]!='\0')
  if((s=check(string[i++],s))<0)
  { break;
  for(i=0;i<nfinals;i++)
   {if(f[i]==s)
    {final=1;
     if(final==1)
     { printf("\n valid string");
     }

     else
     { printf("invalid string");
      printf("please enter valid string");
       }
     }
