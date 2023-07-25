#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/glext.h>
#include<stdio.h>
void init()
{
glClearColor(0.0,0.0,0.0,0.0); // Set display-window color to black.
glMatrixMode(GL_PROJECTION);   // Set current matrix mode to perform operations
gluOrtho2D(0.0,200.0,0.0,150.0); // set the dimension of coordinate system
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT); // Clear display window.
glColor3f(1.0,1.0,1.0);  // set the colour of object.
int x1=0,y1=0,x2=100,y2=100;
float delx,dely,steps;
delx=x2-x1;
dely=y2-y1;
steps=delx>=dely?delx:dely;
float xinr=0,yinr=0;
glBegin(GL_LINES); // begins & set primitive like line here
{
   for(int i=0;i<=steps;i++)
   {
        glVertex2f(x1+xinr,y1+yinr); //used to give coordinates to set vertex
        xinr+=delx/steps;
        yinr+=dely/steps;
   }
}
glEnd();  // to close the primitive
glFlush();	// Process all OpenGL routines as quickly as possible.
}
int main(int argc,char **argv)
{
glutInit(&argc,argv);	 // Initialize GLUT
glutInitWindowPosition(200,100);	// Set display window position
glutInitWindowSize(600,600);	// to set window size
glutCreateWindow("Line-Program"); // create the display window
init();
glutDisplayFunc(display);  // Send graphics to display window.
glutMainLoop(); }  // Display everything and wait

