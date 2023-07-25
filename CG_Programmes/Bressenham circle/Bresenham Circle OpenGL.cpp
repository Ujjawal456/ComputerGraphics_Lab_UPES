#include<GL/glut.h>
#include<stdio.h>
int xc,yc,r;    
void init()
{
  glClearColor(0.0,0.0,0.0,0.7); //used to set display window colour 
  glMatrixMode(GL_PROJECTION); //set current matrix mode to perform operations
  gluOrtho2D(-800,800,600,-600); //set dimension of coordinate system
  }
 void algo(int xc, int yc, int r)
 {
   int x=0, y=r;
   float dp= 3-2*r; //decision parameter
   glColor3f(1.0,0.5,0.7);  //to set colour of object
   glBegin(GL_POINTS); //begins and set primitive like point here
   glVertex2f(xc,yc);  //to print midpoint of circle
   while(x<=y)
   {
    x++;
    if(dp<0)
    {
     dp=dp+(4*x)+6;
     glVertex2f(xc+x,yc+y);
     glVertex2f(xc-x,yc+y); 
     glVertex2f(xc+x,yc-y);   
     glVertex2f(xc-x,yc-y);
     glVertex2f(xc+y,yc+x);
     glVertex2f(xc-y,yc+x);
     glVertex2f(xc+y,yc-x);
     glVertex2f(xc-y,yc-x);
     }
    else 
    { y--;
     dp=dp+4*(x-y)+10;
     glVertex2f(xc+x,yc+y);
     glVertex2f(xc-x,yc+y); 
     glVertex2f(xc+x,yc-y);   
     glVertex2f(xc-x,yc-y);
     glVertex2f(xc+y,yc+x);
     glVertex2f(xc-y,yc+x);
     glVertex2f(xc+y,yc-x);
     glVertex2f(xc-y,yc-x);
     }
   }
   glEnd(); //to close the primitive
   }
   void display()
   {  
     glClear(GL_COLOR_BUFFER_BIT); //to clear display window
     algo(xc,yc,r);
     glFlush();  //process openGL routines to finish program in finite time
   }
  int main(int argc, char* argv[])
  {
    printf("enter the center of the circle as (xcenter, ycenter) ");
    scanf("%d%d",&xc,&yc);
    printf("enter the radius of the circle r= ");
    scanf("%d",&r);
    glutInit(&argc, argv);  //to initialize glut library
    glutInitWindowSize(800,600); //to set window size
    glutInitWindowPosition(0,0); //to set window position
    glutCreateWindow("bresenhem Circle Algorithm"); //to create window
    init();
    glutDisplayFunc(display); //sends graphics to display window
    glutMainLoop(); //display everything and wait
    return 0;
    }

