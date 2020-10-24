#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void p1();
void p2();
void p3();
void p4();
void p5();
void p6();
void p7();
void p8();
void p9();
void p10();
void p11();
void p12();
void p13();
void p14();
void p14();
void p15();
void p16();
void p17();
void p18();
void p19();
void p20();
void p21();
void p22();
void p23();
void p24();
void p25();
void p26();
void p27();

void getmousepos(int*,int*,int*);
int initmouse();
void showmouseptr();
//void auto1m();23445678222222527

union REGS i, o;
int ch1,ch2;

int main()
{ //  int c=0;
  int gd=DETECT,gm,i;
int status,button,x,y,tempx,tempy;
   char array[50];
double ttime;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//gotoxy(90,90);//cursor
setbkcolor(4);
settextstyle(3,0,3);
outtextxy(5,300,"2019 TowerOfHanoi Project Submitted by KUMARI ANJALI");
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
bar3d(230,250,400,290,10,10);

outtextxy(250,150,"1:Play Automatic");
outtextxy(250,210,"2:Play Game");
outtextxy(250,270,"3:How to Play");
outtextxy(150,30,"TOWER OF HANOI");
//for(i=0;i<=600;i++){
outtextxy(i,400,"EXIT:CLICK ANY WHERE");
delay(15);

   //rectangle(200,200,300,300);
   sprintf(array,"X=%d,Y=%d",x,y);
   outtext(array);
  // delay(1000);
   }
   tempx=x;
   tempy=y;
   }
  }
}

outtextxy(287,400,"enter your choice");

delay(500);
int c=0;

 if(tempx>230 && tempx<400 && tempy>130 && tempy<170)
{   cleardevice();
setbkcolor(2);
outtextxy(300,200,"game begin");
delay(2500);
clock_t start,end;
start=clock();
srand(time(NULL));


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
else if(tempx>230&&tempx<400 && tempy>190&&tempy<230)
{  cleardevice();
setbkcolor(2);
outtextxy(300,200,"game begin");
delay(2500);
clock_t start,end;
start=clock();
srand(time(NULL));
  p1();
 nosound();
end=clock();
cleardevice();
ttime=((double)(end-start))/CLK_TCK;
printf("total time of game is:%fsec & %d",ttime,c);
delay(5000);
}

else
  { cleardevice();
outtext("exiting this game.....");
delay(2000);
}
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


void p1()
{
sound(340);
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
bar3d(127,340,177,360,10,10);  //1               3           delay(1000);
//int ch1,ch2;
//int c=1;
//delay(1000);
scanf("%d%d",&ch1,&ch2);
if(ch1==1&&ch2==2)
p4();

else if(ch1==1&&ch2==3)
p5();
else                                {
outtextxy(300,250,"selection invalid");		  //   ---------------
delay(2000);
    p1();   }
}

void p3()
{
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
bar3d(433,340,483,360,10,10);
//c=c+1;
outtextxy(300,300,"hurry u won");
delay(1000);
}
void p2()
{
 setfillstyle(SOLID_FILL,RED);
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50);
bar3d(453,300,463,400,10,10);
bar3d(300,300,310,400,10,10);
bar3d(147,300,157,400,10,10);
setfillstyle(LINE_FILL,BLUE);
bar3d(260,380,350,400,10,10);
bar3d(270,360,340,380,10,10);
bar3d(280,340,330,360,10,10);
//c++;
outtextxy(300,300,"hurry u won ");
delay(1000);

}

void p21()
{
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
bar3d(280,380,330,400,10,10);
  // c++;
scanf("%d%d",&ch1,&ch2);

if(ch1==2&&ch2==3)
p3();

else if(ch1==3&&ch2==1)
p16();
else if(ch1==2&&ch2==1)
p15();
else if(ch1==1||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(2000);
    p1();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
//delay(1000)//delay(1000);
}

//---------------------2----------------------
void p4()
{
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
bar3d(280,380,330,400,10,10);
//c++;
scanf("%d%d",&ch1,&ch2);

if(ch1==2&&ch2==3)
p5();

else if(ch1==1&&ch2==3)
p6();
else if(ch1==2&&ch2==1)
p1();
else if(ch1==3||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(2000);
    p1();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
//delay(1000);
  }
void p5()
{
sound(340);
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
bar3d(433,380,483,400,10,10);  //1               3           1
//c++;//delay(1000);                                  //   ---------------
scanf("%d%d",&ch1,&ch2);
if(ch1==3&&ch2==2)
p4();

else if(ch1==1&&ch2==2)
p7();
else if(ch1==3&&ch2==1)
p1();
else if(ch1==2||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(2000);
    p1();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}
void p6()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(107,380,197,400,10,10); //3
bar3d(423,380,493,400,10,10); //2               2
bar3d(280,380,330,400,10,10);  //1               3           1
//c++//delay(1000);
scanf("%d%d",&ch1,&ch2);
if(ch1==2&&ch2==3)
p8();

else if(ch1==2&&ch2==1)
p9();
else if(ch1==3&&ch2==1)
p4();
//else if(ch1==3)                               {
//outtextxy(300,250,"selection invalid");     //   ---------------
//delay(2000);
  //  p1();   }
else
{
  outtextxy(300,250,"you lost---game over");
  delay(5000);
}
}



void p8()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(107,380,197,400,10,10); //3
bar3d(423,380,493,400,10,10); //2               2
bar3d(433,360,483,380,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==3&&ch2==2)
p6();

else if(ch1==1&&ch2==2)
p12();
else if(ch1==3&&ch2==1)
p9();
else if(ch1==2||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(2000);
    p8();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}


void p9()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(107,380,197,400,10,10); //3
bar3d(423,380,493,400,10,10); //2               2
bar3d(127,360,177,380,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==3&&ch2==2)
p10();

else if(ch1==1&&ch2==3)
p8();
else if(ch1==1&&ch2==2)
p6();
else if(ch1==2||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(1000);
    p9();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}
void p12()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(260,380,350,400,10,10); //3
bar3d(423,380,493,400,10,10); //2               2
bar3d(433,360,483,380,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==3&&ch2==2)
p19();

else if(ch1==3&&ch2==1)
p20();
else if(ch1==2&&ch2==1)
p8();
else if(ch1==1||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(1000);
    p12();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}
void p19()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(260,380,350,400,10,10); //3
bar3d(423,380,493,400,10,10); //2               2
bar3d(280,360,330,380,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==2&&ch2==3)
p12();

else if(ch1==3&&ch2==1)
p24();
else if(ch1==2&&ch2==1)
p20();
else if(ch1==1||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(2000);
    p19();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}
void p20()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(260,380,350,400,10,10); //3
bar3d(423,380,493,400,10,10); //2               2
bar3d(127,380,177,400,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==3&&ch2==2)
p27();

else if(ch1==1&&ch2==3)
p12();
else if(ch1==1&&ch2==2)
p12();
//else if(ch1==3)                               {
//outtextxy(300,250,"selection invalid");     //   ---------------
//delay(2000);
  //  p1();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}

void p26()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(260,380,350,400,10,10); //3
bar3d(270,360,340,380,10,10); //2               2
bar3d(433,380,483,400,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==3&&ch2==1)
p27();
else if(ch1==3&&ch2==2)
p2();
else if(ch1==2&&ch2==1)
p17();
else if(ch1==1||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(2000);
    p26();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}

void p27()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(260,380,350,400,10,10); //3
bar3d(270,360,340,380,10,10); //2               2
bar3d(127,380,177,400,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==2&&ch2==3)
p20();

else if(ch1==1&&ch2==3)
p26();
else if(ch1==1&&ch2==2)
p2();
else if(ch1==3||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(2000);
    p27();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}
void p17()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(260,380,350,400,10,10); //3
bar3d(117,380,187,400,10,10); //2               2
bar3d(433,380,483,400,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==3&&ch2==2)
p24();

else if(ch1==1&&ch2==2)
p26();
else if(ch1==3&&ch2==1)
p25();
//else if(ch1==3)                               {
//outtextxy(300,250,"selection invalid");     //   ---------------
//delay(2000);
  //  p1();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}
void p25()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(260,380,350,400,10,10); //3
bar3d(117,380,187,400,10,10); //2               2
bar3d(127,360,177,380,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==2&&ch2==3)
p22();

else if(ch1==1&&ch2==3)
p17();
else if(ch1==1&&ch2==2)
p24();
else if(ch1==3||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(1000);
    p25();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}

void p22()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10); //3
bar3d(117,380,187,400,10,10); //2               2
bar3d(127,360,177,380,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==3&&ch2==2)
p25();

else if(ch1==1&&ch2==3)
p23();
else if(ch1==1&&ch2==2)
p16();
else if(ch1==2|| ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(1000);
    p22();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}

void p23()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10); //3
bar3d(117,380,187,400,10,10); //2               2
bar3d(433,360,483,380,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==3&&ch2==2)
p16();

else if(ch1==1&&ch2==2)
p18();
else if(ch1==3&&ch2==1)
p22();
else if(ch1==2||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(1000);
    p23();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}

void p16()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10); //3
bar3d(117,380,187,400,10,10); //2               2
bar3d(280,380,330,400,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==2&&ch2==3)
p23();

else if(ch1==1&&ch2==3)
p21();
else if(ch1==2&&ch2==1)
p22();
else if(/*ch1==3*/ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(2000);
    p16();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}

void p24()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(260,380,350,400,10,10); //3
bar3d(117,380,187,400,10,10); //2               2
bar3d(280,360,330,380,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==2&&ch2==3)
p17();

else if(ch1==1&&ch2==3)
p19();
else if(ch1==2&&ch2==1)
p25();
else if(ch1==3||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(1000);
    p24();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}
void p18()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10); //3
bar3d(270,380,340,400,10,10); //2               2
bar3d(433,360,483,380,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==3&&ch2==2)
p13();

else if(ch1==3&&ch2==1)
p14();
else if(ch1==2&&ch2==1)
p23();
else if(ch1==1||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(2000);
    p1();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}
void p13()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10); //3
bar3d(270,380,340,400,10,10); //2               2
bar3d(280,360,330,380,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==2&&ch2==3)
p18();

else if(ch1==3&&ch2==1)
p11();
else if(ch1==2&&ch2==1)
p14();
else if(ch1==1||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(1000);
    p13();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}
void p14()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10); //3
bar3d(270,380,340,400,10,10); //2               2
bar3d(127,380,177,400,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==2&&ch2==3)
p15();

else if(ch1==1&&ch2==3)
p18();
else if(ch1==1&&ch2==2)
p13();
else if(/*ch1==3*/ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(1000);
    p14();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}
void p15()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(413,380,503,400,10,10); //3
bar3d(423,360,493,380,10,10); //2               2
bar3d(127,380,177,400,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==3&&ch2==2)
p14();

else if(ch1==1&&ch2==3)
p3();
else if(ch1==1&&ch2==2)
p21();
else if(ch1==2||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(2000);
    p15();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}
void p10()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(107,380,197,400,10,10); //3
bar3d(270,380,340,400,10,10); //2               2
bar3d(127,360,177,380,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==1&&ch2==2)
p11();

else if(ch1==1&&ch2==3)
p10();
else if(ch1==2&&ch2==3)
p9();
else if(ch1==3||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(1000);
    p10();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}
void p11()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(107,380,197,400,10,10); //3
bar3d(270,380,340,400,10,10); //2               2
bar3d(280,360,330,380,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==2&&ch2==3)
p7();

else if(ch1==1&&ch2==3)
p13();
else if(ch1==2&&ch2==1)
p10();
else if(ch1==3||ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(1000);
    p11();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}
void p7()
{
sound(340);
setfillstyle(SOLID_FILL,RED); //full bgcolor
bar(0,980,789,0);
setfillstyle(LINE_FILL,BLUE);
bar3d(5,400,615,450,20,50); //rectangular bar
bar3d(453,300,463,400,10,10); //pie3
bar3d(300,300,310,400,10,10); //pie2
bar3d(147,300,157,400,10,10); //pie1
setfillstyle(LINE_FILL,BLUE);
bar3d(107,380,197,400,10,10); //3
bar3d(270,380,340,400,10,10); //2               2
bar3d(433,380,483,400,10,10);  //1               3           1
//c++;
scanf("%d%d",&ch1,&ch2);//delay(1000);
if(ch1==3&&ch2==2)
p11();

else if(ch1==3&&ch2==1)
p10();
else if(ch1==2&&ch2==1)
p6();
else if(/*ch1==3*/ch1==ch2)                               {
outtextxy(300,250,"selection invalid");     //   ---------------
delay(1000);
    p7();   }
else
{
  outtextxy(300,250,"ypu lost---game over");
  delay(5000);
}
}


