#include<stdio.h>
#include<graphics.h>
void boundary_fill_4(int x,int y,int fillcolor,int boundarycolor)
{
if(getpixel(x,y)!=boundarycolor && getpixel(x,y)!=fillcolor)
{
putpixel(x,y,fillcolor);
boundary_fill_4(x+1,y,fillcolor,boundarycolor);
boundary_fill_4(x,y+1,fillcolor,boundarycolor);
boundary_fill_4(x-1,y,fillcolor,boundarycolor);
boundary_fill_4(x,y-1,fillcolor,boundarycolor);
}
}
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
rectangle(80,380,240,430); //this will draw a rectangle.
delay(1000);// it will delay the executuon of remaining code by 1000ms.
boundary_fill_4(85,385,1,15); // 1 is blue and 15 is white
getch();
closegraph();
}


