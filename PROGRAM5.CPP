#include<conio.h>
#include<stdio.h>
void main()
{char c;
printf("enter an alphabet:");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='U'||c=='O'||c=='I'||c=='E'||c=='A')
printf("%c is vowel",c);
else
printf("%c is not vowel",c);
getch();
}