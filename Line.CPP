#include<stdio.h)
#include<comio.h>
#include<graphics.h>
#include<math.h>

void main()
{
float x,y,x1,x2,y1,y2;
float pixel;
float dx,dy;

int i,gd,gm;
printf("Enter the value of x1:: ");
scanf("%f",&x1);

printf("Enter the value of x2:: ");
scanf("%f",&x2);
printf("Enter the value of y1:: ");
scanf("%f",&y1);


printf("Enter the value of y2:: ");
scanf("%f",&y2);


detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\TC\\BGI");
dx=abs(x2-x1);
dy=abs(y2-y1);


if(dx>=dy)pixel=dx;
else pixel=dy;
dx=dx/pixel;
dy=dy/pixel;
x=x1;
y=y1;
i=1;
while()}{
putpixel(x,y,1);
x=x+dx;
y=y+dy;;
i++;
delay(500);


}

getch();
closegraph();
}