#include<graphics.h>
int main()
{
/*gm is graphic mode that generates the image using pixels.DETECT is a macro in the header file.
gd specifies the graphic driver to be used. */
int gd = DETECT , gm;
//it initializes the graphics system by loading the graphics from disk./
initgraph(&gd, &gm, "");
//Declaring the coordinates.
int x1 = 100, y1 = 100, x2 = 400, y2 = 400;
int dx, dy, steps,i;
float xi, yi;
dx = x2 - x1;
dy = y2 - y1;
//Checking the conditions to decide steps
if (dx > dy)
{
steps = dx;
}
else
{
steps = dy;
}
xi = float(dx/steps);
yi = float(dy/steps);
for(i = 0; i < steps; i++)
{
//Plots a pixel at location (x,y) of specified colour.
putpixel(x1, y1, WHITE);
x1 = x1 + xi;
y1 = y1 + yi;
}
//Used to pause the screen till the user hits any button.
getch();
//closes the graphics mode and deallocates all the allocated memory
closegraph();
return 0;
}

