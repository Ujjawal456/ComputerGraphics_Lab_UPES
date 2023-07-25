#include<GL/glut.h>
#include<stdio.h>
float sx, sy;
void init()
{
glClearColor(0.0,0.0,0.0,0.5);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,800,0,1000);
}
void scale()
{
glBegin(GL_POLYGON);
glVertex2f(100*sx,250*sy);
glVertex2f(100*sx,200*sy);
glVertex2f(150*sx,300*sy);
glVertex2f(200*sx,250*sy);
glVertex2f(200*sx,200*sy);
glVertex2f(150*sx,150*sy);
glVertex2f(100*sx,200*sy);
glEnd();
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(100,250);
glVertex2f(100,200);
glVertex2f(150,300);
glVertex2f(200,250);
glVertex2f(200,200);
glVertex2f(150,150);
glVertex2f(100,200);
glEnd();
scale();
glFlush();
}
int main(int argc, char* argv[])
{
printf("enter the scaling factors as {sx,sy}" );
scanf("%f%f",&sx,&sy);
glutInit(&argc,argv);
glutInitWindowSize(800,1000);
glutCreateWindow("Scaling in opengl");
init();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}

