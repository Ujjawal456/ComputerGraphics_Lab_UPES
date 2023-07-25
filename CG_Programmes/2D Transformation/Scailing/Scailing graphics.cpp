#include<graphics.h>
#include<math.h>
int main(int argc, char* argv[])
{
int gd = DETECT, gm;
float sx, sy;
printf("enter the scaling factor as {sx,sy} ");
scanf("%f%f",&sx,&sy);
initgraph(&gd,&gm,"");
int a[]={300,100,150,200,210,300,270,300,250,200,300,100};
drawpoly(6,a);
delay(10000);
int b[]={300*sx,100*sy,150*sx,200*sy,210*sx,300*sy,270*sx,300*sy,250*sx,200*sy,300*sx,100*sy};
drawpoly(6,b);
getch();
closegraph();
return 0;
}


