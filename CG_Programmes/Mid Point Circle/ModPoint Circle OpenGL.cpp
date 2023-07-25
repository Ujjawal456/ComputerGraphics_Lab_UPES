#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<stdio.h>
int r;     //radius of circle
int xc,yc;   //centre of circle
void init()
{
  glClearColor(0.0,0.0,0.0,0.7);  //set display window colour to black
  glShadeModel(GL_SMOOTH);  //to select flat or smooth shading
  glMatrixMode(GL_PROJECTION);//set current matrix mode to perform operation
  gluOrtho2D(-800,800,-600,600); //set dimension of coordinate system
  }
  void circle(int r)
  { 
    int x=0;
    int y=r;
    float p=5/4-r;
    glColor3f(0.2,0.8,0.7); //set colour of object
    glBegin(GL_POINTS);  //begins & set primitive like POLYGON here
    glVertex2i(xc,yc);  //to print the midpoint of circle
    while(x<=y)
    {
      if(p<0)
      { x++;
        p=p+2*x+1;
         glVertex2i(xc+x,yc+y);
         glVertex2i(xc-x,yc+y);
         glVertex2i(xc+x,yc-y);
         glVertex2i(xc-x,yc-y);
         glVertex2i(xc+y,yc+x);
         glVertex2i(xc-y,yc+x);
         glVertex2i(xc+y,yc-x);
         glVertex2i(xc-y,yc-x);
        }
       else
       {
         x++,y--;
         p=p+2*(x-y)+1;
         glVertex2i(xc+x,yc+y);
         glVertex2i(xc-x,yc+y);
         glVertex2i(xc+x,yc-y);
         glVertex2i(xc-x,yc-y);
         glVertex2i(xc+y,yc+x);
         glVertex2i(xc-y,yc+x);
         glVertex2i(xc+y,yc-x);
         glVertex2i(xc-y,yc-x);   
       }
     }
         glEnd(); //to close the primitive
         glFlush(); //process opengl routine as quickly as possible
   }
     void display()
      {
        glClear(GL_COLOR_BUFFER_BIT); //clear display window
        circle(r);
      }
    int main(int argc, char* argv[])
    { 
      printf("enter the center of the circle (xc,yc) ");
      scanf("%d%d",&xc,&yc);
      printf("enter the radius of the circle r = ");
      scanf("%d",&r);
      glutInit(&argc, argv);  //initialize GLUT
      glutInitWindowPosition(0,0);  //set display window position
      glutInitWindowSize(800,600);  //set window size
      glutCreateWindow("Mid point circle algorithm");//create display window
      init();
      glutDisplayFunc(display);  //send graphics to display window
      glutMainLoop();  //display everything and wait
    }


