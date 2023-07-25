#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<stdio.h>
int r;
int counter =0;
int xc,yc;
void init()
{
 glClearColor(0.0,0.0,0.0,0.7);
 glShadeModel(GL_SMOOTH);
 glViewport(0,0,700,700);
 glMatrixMode(GL_PROJECTION);
 gluOrtho2D(-700,700,-700,700);
  }
  void mouse(int button, int state, int mousex, int mousey)
  {
    if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {  counter++;
      if(counter>4)
         counter=0;
     }
     glutPostRedisplay();
     }
  void circle(int r)
  { 
    int x=0;
    int y=r;
    float p=5/4-r;
    //glColor3f(0.2,0.8,0.7);
    glBegin(GL_POLYGON);
    while(x<y)
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
         glEnd();
         glFlush();
         }
     void display()
      {
        glClear(GL_COLOR_BUFFER_BIT);
        if(counter==1)
           glColor3f(1.0,1.0,0.0);
        else if(counter==2)
           glColor3f(0.5,0.0,1.0);
        else if(counter==3)
            glColor3f(0.0,1.0,1.0);
        else if(counter==4)
            glColor3f(0.6,0.2,0.7);
        circle(r);
        }
    int main(int argc, char* argv[])
    { printf("enter the center of the circle (xc,yc) ");
       scanf("%d%d",&xc,&yc);
      printf("enter the radius of the circle r = ");
      scanf("%d",&r);
      glutInit(&argc, argv);
      glutInitWindowPosition(0,0);
      glutInitWindowSize(700,700);
      glutCreateWindow("Color Changes on Mouse click");
      init();
      glutDisplayFunc(display);
      glutMouseFunc(mouse);
      glutMainLoop();
      }

