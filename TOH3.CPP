#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//CLOCKS_PER_SEC
//#include<unistd.h>
			 //for sleep
void getmousepos(int*,int*,int*);
int initmouse();
void showmouseptr();
//void autom();

union REGS i, o;
int main()
{int gd=DETECT,gm,i;
int status,button,x,y,tempx,tempy;
   char array[50];
double ttime;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//gotoxy(90,90);//cursor
setbkcolor(4);
settextstyle(3,0,3);
outtextxy(100,300,"project submitted by KUMARI ANJALI");
delay(1000);
cleardevice();
status = initmouse();
if ( status == 0 )
      printf("Mouse support not available.\n");
   else
   {   showmouseptr();
  getmousepos(&button,&x,&y);
  tempx=x;
  tempy=y;
  while(!kbhit())
  {getmousepos(&button,&x,&y);
  if(x!=tempx||y!=tempy)

   {cleardevice();
    for(i=0;i<=650;i+=8){
//cleardevice();
settextstyle(i,0,1);
setfillstyle(INTERLEAVE_FILL,BLUE);
bar(0,980,789,0);
line(0,40,670,40);
line(0,20,670,20);
setfillstyle(SOLID_FILL,RED);
bar3d(230,130,400,170,10,10);
bar3d(230,190,400,230,10,10);

outtextxy(250,150,"1:play automatic");
outtextxy(250,210,"2:play game");
outtextxy(300,200,"GAME BEGIN");
outtextxy(150,30,"TOWER OF HANOI");
//for(i=0;i<=600;i++){
outtextxy(i,400,"exit:press any other");
delay(15);

   //rectangle(200,200,300,300);
   sprintf(array,"X=%d,Y=%d",x,y);
   outtext(array); }
   tempx=x;
   tempy=y;
   }
  }
}

outtextxy(287,400,"enter your choice");

delay(1000);
//int choice;
//scanf("%d",&choice);
//if(choice==1)
 if(tempx>230 && tempx<400 && tempy>130 && tempy<170)
{   cleardevice();
setbkcolor(2);
outtextxy(300,200,"game begin");
delay(2500);
clock_t start,end;
start=clock();
srand(time(NULL));
//cleardevice();
//setbkcolor(2);
//outtextxy(300,200,"game begin");

//else
//outtext("jjgf");
//delay(700);
//------------------------------step first-----smallest box----------------------

for(i=340;i>=200;i=i-1)
{//  cleardevice();

sound(i);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(107,380,197,400,10,10); //3
bar3d(117,360,187,380,10,10); //2               2
bar3d(127,i,177,i+20,10,10);  //1               3           1
delay(1);                                  //   ---------------
//if(i==200)
//break;
//clearviewport();
}


for(i=127;i<=433;i=i+1)
{  //cleardevice();
sound(i);
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(107,380,197,400,10,10);
bar3d(117,360,187,380,10,10);
bar3d(i,200,i+50,220,10,10);
delay(1);
//if(i==433)
//break;
//clearviewport();
}

for(i=200;i<=380;i=i+1)
{ // cleardevice();
sound(i);
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(107,380,197,400,10,10);
bar3d(117,360,187,380,10,10);
bar3d(433,i,483,i+20,10,10);
delay(10);
//if(i==380)
//break;
//clearviewport();
}

//----------------------------------------------step second -----midibox--------------------

for(i=360;i>=200;i=i-1)
{sound(i);
 //cleardevice();
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(107,380,197,400,10,10);
bar3d(117,i,187,i+20,10,10);
bar3d(433,380,483,400,10,10);
delay(1);
//if(i==200)
//break;
//clearviewport();
}


for(i=117;i<=270;i=i+1)
{sound(i);
// cleardevice();
setfillstyle(SOLID_FILL,4);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(107,380,197,400,10,10);
bar3d(i,200,i+70,220,10,10);
bar3d(433,380,483,400,10,10);
delay(10);
//if(i==270)
//break;
//clearviewport();
}

for(i=360;i<=380;i=i+1)
{ // cleardevice();
sound(i);
setfillstyle(SOLID_FILL,4);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(107,380,197,400,10,10);
bar3d(270,i,340,i+20,10,10);
bar3d(433,380,483,400,10,10);
delay(10);
//if(i==380)
//break;
//clearviewport();
}
//-----------------------step-third-bigbox---------------------------
for(i=380;i>=200;i=i-1)
{  //cleardevice();
sound(i);
setfillstyle(SOLID_FILL,4);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(107,380,197,400,10,10);
bar3d(270,380,340,400,10,10);
bar3d(433,i,483,i+20,10,10);
delay(1);
//if(i==200)
//break;
//clearviewport();
}

for(i=433;i>=280;i=i-1)
{ // cleardevice();
sound(i);
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(107,380,197,400,10,10);
bar3d(270,380,340,400,10,10);
bar3d(i,200,i+50,220,10,10);
delay(10);
//if(i==280)
//break;
//clearviewport();
}

for(i=200;i<=360;i=i+1)
{ // cleardevice();
sound(i);
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(107,380,197,400,10,10);
bar3d(270,380,340,400,10,10);
bar3d(280,i,330,i+20,10,10);
delay(10);
//if(i==360)
//break;
//clearviewport();
}
//-------------------------------step-4--------------------------
for(i=380;i>=200;i=i-1)
{ // cleardevice();
sound(i);
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(107,i,197,i+20,10,10);
bar3d(270,380,340,400,10,10);
bar3d(280,360,330,380,10,10);
delay(10);
//if(i==200)
//break;
//clearviewport();
}

for(i=107;i<=413;i=i+1)
{ // cleardevice();
sound(i);
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(i,200,i+90,220,10,10);
bar3d(270,380,340,400,10,10);
bar3d(280,360,330,380,10,10);
delay(10);
//if(i==413)
//break;
//clearviewport();
}

for(i=200;i<=360;i=i+1)
{ // cleardevice();
sound(i);
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(413,i,503,i+20,10,10);
bar3d(270,380,340,400,10,10);
bar3d(280,360,330,380,10,10);
delay(10);
//if(i==360)
//break;
//clearviewport();
}
//--------------------------------step 5--------------------
for(i=360;i>=200;i=i-1)
{ // cleardevice();
sound(i);
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10);
bar3d(270,380,340,400,10,10);
bar3d(280,i,330,i+20,10,10);
delay(10);
//if(i==200)
//break;
//clearviewport();
}

for(i=280;i>=127;i=i-1)
{ // cleardevice();
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10);
bar3d(270,380,340,400,10,10);
bar3d(i,200,i+50,220,10,10);
sound(i);
delay(10);

//if(i==127)
//break;
//clearviewport();
}

for(i=200;i<=380;i=i+1)
{//  cleardevice();
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
sound(i);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10);
bar3d(270,380,340,400,10,10);
bar3d(127,i,177,i+20,10,10);
delay(10);
//if(i==380)
//break;
//clearviewport();
}
////////////////////----------------step=6-------------------
for(i=380;i>=200;i=i-1)
{ // cleardevice();
sound(i);
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10);
bar3d(270,i,340,i+20,10,10);
bar3d(127,380,177,400,10,10);
delay(10);
//if(i==200)break;
//clearviewport();
}
for(i=270;i<=423;i=i+1)
{ // cleardevice();
sound(i);
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10);
bar3d(i,200,i+70,220,10,10);
bar3d(127,380,177,400,10,10);
sound(i);
delay(10);

//if(i==423)
//break;
//clearviewport();
}
for(i=200;i<=360;i=i+1)
{ // cleardevice();
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10);
bar3d(423,i,493,i+20,10,10);
bar3d(127,380,177,400,10,10);
sound(i);
delay(10);
//if(i==360)
//break;
//clearviewport();

}
//---------------------------------step-7---------------------------
for(i=380;i>=200;i=i-1)
{ // cleardevice();
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10);
bar3d(423,360,493,380,10,10);
bar3d(127,i,177,i+20,10,10);
delay(2);
sound(i);
//if(i==200)
//break;
//clearviewport();
}

for(i=127;i<=433;i=i+1)
{  //cleardevice();
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10);
bar3d(423,360,493,380,10,10);
bar3d(i,200,i+50,220,10,10);
sound(i);
delay(2);
//if(i==433)
//break;
//clearviewport();
}

for(i=127;i<=340;i=i+1)
{ // cleardevice(); sound(i);
setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10);
bar3d(423,360,493,380,10,10);
bar3d(433,i,483,i+20,10,10);
delay(10);
if(i==340)
{sound(2*i*i);
delay(50);}
//clearviewport();

}  nosound();
end=clock();
cleardevice();
ttime=((double)(end-start))/CLK_TCK;
printf("total time of game is:%f",ttime);
delay(5000);
}
else         {                 cleardevice();
outtext("exiting this game.....");
delay(3000);}
getch();
closegraph();
return 0;
}


int initmouse()
{
   i.x.ax = 0;
   int86(0X33, &i, &o);
   return ( o.x.ax );
}

void showmouseptr()
{
   i.x.ax = 1;
   int86(0X33, &i, &o);
}
void getmousepos(int *button,int*x,int*y)
{ i.x.ax=3;
int86(0X33,&i,&o);
*button=o.x.bx;
*x=o.x.cx;
*y=o.x.dx;

}