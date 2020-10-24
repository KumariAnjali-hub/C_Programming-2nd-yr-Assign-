#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
int main()
{int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//setbkcolor(3);
//setcolor(10);
bar(0,0,200,400);

setfillstyle(CLOSE_DOT_FILL,4);
setcolor(7);
bar(200,0,360,160);
setfillstyle(CLOSE_DOT_FILL,BLUE);
setcolor(6);
bar(440,0,600,160);
setfillstyle(CLOSE_DOT_FILL,GREEN);
setcolor(5);
bar(200,240,360,400);
setfillstyle(CLOSE_DOT_FILL,YELLOW);
setcolor(4);
bar(440,240,600,400);
setfillstyle(CLOSE_DOT_FILL,3);
fill(i)

getch();

closegraph();
return 0;
}