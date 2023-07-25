#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
float xa,ya,xb,yb;
void init()
{
glClearColor(0.0,0.0,0.0,0.0); // Set display-window color to white.
glMatrixMode(GL_PROJECTION);   // Set projection parameters.
gluOrtho2D(0.0,500.0,0.0,500.0); // set he dimension of coordinate system
}
void line_func()
{
glClear(GL_COLOR_BUFFER_BIT); // clear display window
glColor3f(1.0,0.0,0.0);
float m,c,x,y;
m = (yb-ya)/(xb-xa);
c = ya-m*xa;
glBegin(GL_POINTS);
for(x=xa;x<xb;x++)
{
y=m*x+c;
y = y+0.5;
glVertex2i(x,(int)y);
}
glEnd();
glFlush();
}
int main(int argc,char** argv)
{
printf("Enter the two end-points of the line: ");
printf("nx1 =");
scanf("%f",&xa);
printf("y1 =");
scanf("%f",&ya);
printf("x2 =");
scanf("%f",&xb);
printf("y2 =");
scanf("%f",&yb);
glutInit(&argc,argv);
glutInitWindowPosition(100,200);
glutInitWindowSize(600,600);
glutCreateWindow("Line y=mx+c OpenGL");
init();
glutDisplayFunc(line_func);
glutMainLoop();
}

