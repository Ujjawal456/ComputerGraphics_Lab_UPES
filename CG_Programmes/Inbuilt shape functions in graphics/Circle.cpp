#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
int main()
{
int gd = DETECT, gm;
initgraph(&gd,&gm,NULL);// this function initializes the graphic mode with suitable driver
int x=100,y=100,r=70;
setcolor(5);// this will set the color of the object.
circle(x,y,r);// draw the circle of specified radius with specified center.
getch();// takes a key from the user.
closegraph();// closes the graph mode.
return 0;
}

