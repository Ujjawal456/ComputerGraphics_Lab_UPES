#include<stdio.h>
#include<graphics.h>

void flood_fill_8(int x,int y,int oldcolor,int fillcolor)
{
if(getpixel(x,y)==oldcolor)
{
putpixel(x,y,fillcolor);
flood_fill_8(x+1,y,oldcolor,fillcolor);
flood_fill_8(x,y+1,oldcolor,fillcolor);
flood_fill_8(x-1,y,oldcolor,fillcolor);
flood_fill_8(x,y-1,oldcolor,fillcolor);
flood_fill_8(x+1,y+1,oldcolor,fillcolor);
flood_fill_8(x-1,y+1,oldcolor,fillcolor);
flood_fill_8(x+1,y-1,oldcolor,fillcolor);
flood_fill_8(x-1,y-1,oldcolor,fillcolor);
}
}
int main()
{
int gd=DETECT,gm;

initgraph(&gd,&gm,"");
rectangle(100,200,300,350);
flood_fill_8(200,250,0,9); // 0 is black and 9 is lightblue
getch();
closegraph();
}

