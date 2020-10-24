#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{int gd=DETECT,gm,i;
int status,button,x,y,tempx,tempy;
   char array[50];
double ttime;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
bar3d(30,60,30,60,10,10);
delay(1000);
getch();
}