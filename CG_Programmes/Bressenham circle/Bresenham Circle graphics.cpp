#include<stdio.h>
#include<graphics.h>
void plotpixel(int xc,int yc, int x, int y)
{
putpixel(xc+x,yc+y,8);
putpixel(xc+x,yc-y,8);
putpixel(xc-x,yc+y,8);
putpixel(xc-x,yc-y,8);
putpixel(xc+y,yc+x,8);
putpixel(xc+y,yc-x,8);
putpixel(xc-y,yc+x,8);
putpixel(xc-y,yc-x,8);
}
void mycircle(int xc, int yc, int r)
{
int x=0, y=r;
float dp= 3-2*r;
while(x<=y)
{  x++;
if(dp<0)
{
dp=dp+(4*x)+6;
}
else
{
y--;
dp=dp+ 4*(x-y)+10;
}
plotpixel(xc,yc,x,y);
}
}
int main(int argc, char* argv[])
{
int xc, yc, r;
printf(" enter the center of the circle as (xcenter, ycenter) ");
scanf("%d%d",&xc,&yc);
printf( " enter the radius of the circle as r= ");
scanf("%d",&r);
int gd = DETECT, gm;
initgraph(&gd,&gm,NULL);
mycircle(xc,yc,r);
getch();
closegraph();
return 0;
}
   

