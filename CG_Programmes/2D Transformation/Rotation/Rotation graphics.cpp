#include<graphics.h>
#include<stdio.h>
#include<math.h>
int main(int argc, char* argv[])
{ int theta;
printf("enter the angle of rotation in degrees ");
scanf("%d",&theta);
int gd = DETECT, gm;
initgraph(&gd,&gm,"");
double a[2][2]= { {cos(theta*3.14/180), -sin(theta*3.14/180)},
{ sin(theta*3.14/180), cos(theta*3.14/180)}};
double obj[2][3] = { { 100,200,200},
{100,100,200}};
int c[8]={100,100,200,100,200,200,100,100};
drawpoly(4,c);
double final[2][3]={{0.0,0.0,0.0},
{0.0,0.0,0.0}};
for(int i=0; i<2;i++)
{
for(int j=0; j<3;j++)
{ for(int k=0;k<2;k++)
{
final[i][j]+=a[i][k]*obj[k][j];
}
}
}
int r[8], k=0;
for(int i=0; i<2;i++)
{
for(int j=0; j<3;j++)
{
printf("%0.2lf   ",final[i][j]);
r[k]=final[i][j];
k++;
}
printf("\n");
}
delay(1000);
r[6]=r[0];
r[7]=r[1];
drawpoly(4,r);
getch();
closegraph();
return 0;
}

