#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main(void)
{int gdriver,gmode;
int i,x,y,a=0;

clrscr();
initgraph(&gdriver,&gmode,"c:\\TC\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
printf("%d",a);
while(!kbhit())
{clrscr();
for(i=40;i<200;i++)
{
gotoxy(a,20);
textcolor(MAGENTA+BLINK);
cprintf("WELCOME TO SRIMT");
delay(100);
a++;
}
}
if(a>=81)
{a=0;
}
printf("width of the screen %d",a);
getch();
return 0;
}