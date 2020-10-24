	 #include<conio.h>
	 #include<stdio.h>
	 #include<string.h>
	 #include<graphics.h>
	 #include<dos.h>
	 #include<time.h>
			    void pic1();
			    void pic2();

	 int main()

	 {/*float f=0.1;
		 if(f==0.1)printf("y");
	 else printf("n");*/

  int gd=DETECT,gm,i;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");

    setbkcolor(3);
	 pic1();
//	 pic2();
closegraph();
cleardevice();

	   getch();
	   return 0;

	 }
	 void pic1()   {
	 setfillstyle(SOLID_FILL,7);
		 printf("*");
	 bar(250,200,400,250);
	 bar3d(250,250,260,400,5,10);
	 bar3d(390,250,400,400,5,10);
	 setfillstyle(LINE_FILL,BLUE);
	 bar3d(300,180,350,190,25,25);
	 setfillstyle(LINE_FILL,4);
	 bar3d(290,160,340,170,25,25)   ;
	 bar3d(290,200,340,210,25,25);
	  delay(1000);
	 }