#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
int main(){
  int gd=DETECT,gm,i;
int status,button,x,y,tempx,tempy;
   char array[50];
double ttime;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//gotoxy(90,90);//cu
setcolor(4);
bar(0,400,600,0);
for(i=650;i>=10;i-=10)
{    cleardevice();
setcolor(3);
bar(0,400,600,0);
circle(i,i,20);
delay(50);
 }
getch();
}