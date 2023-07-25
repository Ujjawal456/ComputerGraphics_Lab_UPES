#include<stdio.h>
#include<graphics.h>
void plotpoints(int xc,int yc, int x,int y)
{
putpixel(xc+x,yc+y,10);
putpixel(xc-x,yc+y,10);
putpixel(xc+x,yc-y,10);
putpixel(xc-x,yc-y,10);
putpixel(xc+y,yc+x,10);
putpixel(xc-y,yc+x,10);
putpixel(xc+y,yc-x,10);
putpixel(xc-y,yc-x,10);
}
void mpcircle(int xc, int yc, int r)
{
int x=0;
int y=r;
float dp;
dp=1.25-r;
//putpixel(xc+x,yc+y,10);
while(x<=y)
{x++;
if(dp<0)
{
dp=dp+2*x+1;
}
else
{
dp+=2*(x-y)+1;
y--;}
plotpoints(xc,yc,x,y);
}
}
int main(int argc, char* argv[])
{
int xc,yc,r;
printf("Enter the center of the circle as (xcenter, ycenter) ");
scanf("%d%d",&xc,&yc);
printf("Enter the radius of the circle as r= ");
scanf("%d",&r);
int gd=DETECT, gm;
initgraph(&gd,&gm,NULL);
mpcircle(xc,yc,r);
getch();
closegraph();
return 0;
}

