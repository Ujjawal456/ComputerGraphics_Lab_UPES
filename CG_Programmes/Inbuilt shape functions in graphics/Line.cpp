#include<graphics.h>
int main(int argc, char* argv[])
{
int gd = DETECT, gm;
initgraph(&gd,&gm,(char*) " "); // this function will initialise the graphic mode with best graphic driver.
setcolor(5); // this function will set the color.
line(50,60,150,180);// this function will draw the line from first point to the end point.
getch();// takes a key from the user.
closegraph(); // it will close the graphic mode.
return 0;
}

