#include<graphics.h>
//#include<sys/wait.h>
int x=50,y=50;
void rect()
{
rectangle(50,200,350,400);
rectangle(50+x,200+y,350+x,400+y);
}
void square()
{
rectangle(100,200,300,400);
rectangle(100+x,200+y,300+x,400+y);
}
void mycircle()
{
circle(100,200,50);
circle(100+x,200+y,50);
}
void mytriangle()
{
line(100,100,300,100);
line(300,100,200,50);
line(100,100,200,50);
line(100+x,100+y,300+x,100+y);
line(300+x,100+y,200+x,50+y);
line(100+x,100+y,200+x,50+y);
}
void myeclipse()
{
ellipse(100, 100, 0, 360, 50, 25);
ellipse(100+x, 100+y, 0, 360, 50, 25);
}
void mypolygon()
{
int arr[]={300,100,150,200,210,300,270,300,250,200,300,100};
drawpoly(6, arr);
int brr[]={300+x,100+y,150+x,200+y,210+x,300+y,270+x,300+y,250+x,200+y,300+x,100+y};
drawpoly(6, brr);
}
int main()
{
int ch=1;
char co='Y';
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
do
{
cleardevice();
switch(ch)
{
case 1:	setcolor(RED);
rect();
//setfillstyle(SOLID_FILL,RED);
//floodfill(300,400,RED);
break;
case 2:	setcolor(GREEN);
square();
break;
case 3:	setcolor(YELLOW);
mycircle();
break;
case 4:	setcolor(BLUE);
myeclipse();
break;
case 5:	setcolor(CYAN);
mytriangle();
break;
case 6:	setcolor(BROWN);
mypolygon();
break;
}
delay(1500);
ch++;
}while(ch!=7);
getch();
closegraph();
return 0;
}

