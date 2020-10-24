	 #include<conio.h>
	 #include<stdio.h>
	 int main()
	 {  int n;
	 clrscr();
	 printf("\n");
	 scanf("%d",&n);
	 if(n>72)printf("invalid_sit_no");
	 else
	 if(n%8==7)printf("side_lower_berth");
	 else if(n%8==0)printf("side_upper_birth");
	 else{
	 if(n%8==3||n%8==6)printf("upper_berth");
	 else if(n%8==2||n%8==5)printf("middle_birth");
	 else printf("lower_birth");
	 }
	   getch();
	 }