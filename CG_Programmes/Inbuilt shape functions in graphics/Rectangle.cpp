#include<graphics.h>
int main(int argc, char* argv[])
{
int gd = DETECT, gm;
initgraph(&gd,&gm,(char*) " "); // this function will initialise the graphic mode with best graphic driver.
setcolor(5); // this function will set the color.
rectangle(150,350,450,100);// this function will draw the     rectangle:
getch();// takes a key from the user.
closegraph(); // it will close the graphic mode.
return 0;
}


