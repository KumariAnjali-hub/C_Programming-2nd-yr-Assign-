#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{

int gd=DETECT,gm,i,j;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
for(i=100,j=100;i<550,j<550;i+=10,j+=10)
{cleardevice();
setfillstyle(XHATCH_FILL,BLUE);
bar(0,0,650,600);
setfillstyle(XHATCH_FILL,RED);
bar(250,250,600,600);

bar(150,200,154,550);	  //stream
setfillstyle(SOLID_FILL,GREEN);
fillellipse(152,192,5,15);
fillellipse(155,222,5,15);
fillellipse(157,250,5,15);
fillellipse(157,280,5,15);
setcolor(YELLOW);
circle(i,j,70);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(i,j,YELLOW);

setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
fillellipse(i+70/3,j-70/3,2,6);
fillellipse(i+70/3-50,j-70/3,2,6);
fillellipse(i,j+70/3+9,6,2);
delay(100);
}
gotoxy(35,17);
printf("game over");
getch();
return 0;

}