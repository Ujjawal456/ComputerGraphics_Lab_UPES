#include<GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
int x1,y1,x2,y2,x3,y3;
int tx,ty;
void init()
{
glClearColor(0.0,0.0,0.0,0.5);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,800,0,600);
}
void tri()
{  printf("enter the first point as (x1,y1)=");
scanf("%d%d",&x1,&y1);
printf("enter the second point as (x2,y2)=");
scanf("%d%d",&x2,&y2);
printf("enter the third point as (x3,y3)= ");
scanf("%d%d",&x3,&y3);
printf("enter the translation coordinates as (tx,ty)= ");
scanf("%d%d",&tx,&ty);
glBegin(GL_TRIANGLES);
glColor3f(1.0,1.0,1.0);
glVertex2i(x1,y1);
glVertex2i(x2,y1);
glVertex2i(x3,y3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(1.0,0.0,0.0);
glVertex2i(tx+x1,ty+y1);
glVertex2i(tx+x2,ty+y1);
glVertex2i(tx+x3,ty+y3);
glEnd();
glFlush();
}
void rect()
{ GLint x4,y4;
printf("enter the first point as (x1,y1)=");
scanf("%d%d",&x1,&y1);
printf("enter the second point as (x2,y2)=");
scanf("%d%d",&x2,&y2);
printf("enter the third point as (x3,y3)= ");
scanf("%d%d",&x3,&y3);
printf("enter the last coordinate of as (x4,y4)= ");
scanf("%d%d",&x4,&y4);
printf("enter the translation coordinates as (tx,ty)= ");
scanf("%d%d",&tx,&ty);
glBegin(GL_QUADS);
glColor3f(1.0,1.0,1.0);
glVertex2i(x1,y1);
glVertex2i(x2,y1);
glVertex2i(x3,y3);
glVertex2i(x4,y4);
glEnd();
glBegin(GL_QUADS);
glColor3f(1.0,0.0,0.0);
glVertex2i(tx+x1,ty+y1);
glVertex2i(tx+x2,ty+y1);
glVertex2i(tx+x3,ty+y3);
glVertex2i(tx+x4,ty+y4);
glEnd();
glFlush();
}
void line()
{/*printf("enter the translation vector  as (tx,ty)= ");
scanf("%d%d",&tx,&ty);*/
glBegin(GL_LINES);
glColor3f(0.0,1.0,0.5);
glVertex2i(200,250);
glVertex2i(500,450);
glEnd();
printf("enter the translation vector  as (tx,ty)= ");
scanf("%d%d",&tx,&ty);
glBegin(GL_LINES);
glVertex2i(tx+200,ty+250);
glVertex2i(tx+500,ty+450);
glEnd();
glFlush();
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
GLint x,y=0;
printf("enter your choice 1.triangle 2.rectangle 3. line");
while(y<4)
{
scanf("%d",&x);
switch(x)
{
case 1:{ glClear(GL_COLOR_BUFFER_BIT);
tri();
break;}
case 2: {glClear(GL_COLOR_BUFFER_BIT);
rect();
break;}
case 3: {glClear(GL_COLOR_BUFFER_BIT);
line();
break;}
case 4: exit(0);
default:
printf("Invalid choice");
}
y++;
}
glFlush();
}
int main(int agrc, char* argv[])
{
glutInit(&agrc, argv);
glutInitWindowSize(800,700);
glutInitWindowPosition(0,0);
glutCreateWindow("Translation");
init();
glutDisplayFunc(display);
glutMainLoop();
}

