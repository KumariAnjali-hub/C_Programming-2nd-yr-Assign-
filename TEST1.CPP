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
//------------------won----column 1---------
//void p1()
//{
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
bar3d(127,340,177,360,10,10);  //1               3           1
delay(1000);                                  //   ---------------

//}
//void p2()
//{
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
delay(1000);
//}
//void p3()
//{   
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
delay(1000);                                                                                       
//}
//---------------------2----------------------
//void p4()
//{
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
delay(1000);

//void p5()
//{
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
bar3d(280,380,330,400,10,10);  //1               3           1
delay(1000);                                  //   ---------------

//}
//void p6()
//{
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
delay(1000);

//}

//void p9()
//{
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
delay(1000);

//}

//void p8()
//{
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
delay(1000);
//}
//void p12()
//{
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
delay(1000);
//}
//void p19()
//{
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
delay(1000);
//}
//void p20()
//{
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
delay(1000);
//}
//void p27()
//{
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
delay(1000);
//}
//void p26()
//{
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
delay(1000);
//}
//void p17()
//{
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
delay(1000);
//}
//void p25()
//{
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
delay(1000);
//}

//void p22()
//{
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
delay(1000);

//}

//void p23()
//{
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
delay(1000);
//}

//void p16()
//{
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
delay(1000);

//}

//void p24()
//{
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
delay(1000);
//}
//void p18()
//{
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
delay(1000);
 //}
//void p13()
//{
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
delay(1000);

//}
//void p14()
//{
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
delay(1000);//}

//void p15()
//{
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
delay(1000);
//}
//void p10()
//{
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
delay(1000);
//}
//void p11()
//{
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
delay(1000);
//}
//void p7()
//{
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
delay(1000);
//}
//void p5()
//{
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
delay(1000);
		 /*
//}

//void p22()
//{
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
delay(1000);

//}
	      */


nosound();
getch();
closegraph();
return 0;
}