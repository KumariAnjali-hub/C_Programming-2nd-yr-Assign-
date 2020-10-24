#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
void getmousepos(int*,int*,int*);
int initmouse();
void showmouseptr();

union REGS i, o;

int main()
{        clrscr();
   int status,button,x,y,tempx,tempy, gd = DETECT, gm;
   char array[50];
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  rectangle(200,200,300,300);
  setbkcolor(12);
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
   rectangle(200,200,300,300);
   sprintf(array,"X=%d,Y=%d",x,y);
   outtext(array);
   tempx=x;
   tempy=y;
   }
  }
  }
  setbkcolor(4);
  delay(5000);
  printf("test");
 if(tempx>200 && tempx<300 && tempy>200 && tempy<300)
  {cleardevice();
  setbkcolor(3);
		outtextxy(200,200,"hello");
		delay(5000);
  }
   getch();
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