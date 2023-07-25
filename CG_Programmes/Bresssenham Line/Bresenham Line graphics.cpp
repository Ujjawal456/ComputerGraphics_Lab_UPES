#include<stdlib.h>
#include<graphics.h>
int main()
{
int dx,dy,pk,x,y,x1,y1,x2,y2;
int gd=DETECT,gm;
printf("Enter the co-ordinate value for x1: ");
scanf("%d", &x1);
printf("Enter the co-ordinate value for y1: ");
scanf("%d", &y1);
printf("Enter the co-ordinate value for x2: ");
scanf("%d", &x2);
printf("Enter the co-ordinate value for y2: ");
scanf("%d", &y2);
initgraph(&gd,&gm,(char*)" ");
setbkcolor(BLACK);
printf("Bresenham Line \n");
dx=x2-x1;
dy=y2-y1;
x=x1;
y=y1;
pk=2*dy-dx;
while(x<x1)
{
if(pk>=0)
{
putpixel(x,y,7);
y=y+1;
pk=pk+2*dy-2*dx;
}
else
{
putpixel(x,y,7);
pk=pk+2*dy;
}
x=x+1;
}
line(x1, y1, x2, y2);
delay(10000);
closegraph();
return 0;
}

