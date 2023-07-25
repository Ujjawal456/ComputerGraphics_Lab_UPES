#include<GL/glut.h>
int count=0;
void init()
{
  glClearColor(1.0,1.0,1.0,0.4);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(-1.0,1.0,-1.0,1.0);
  }
  void mouse(int button, int state, int x, int y)
  {
    if(state == GLUT_DOWN)
       count++;
    glutPostRedisplay();
    }
         
 void rotate()
 { 
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);
    glRectf(-0.25,-0.25,0.25,0.25);
    if(count==1)
    {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glColor3f(1.0,1.0,0.0);
    glRotatef(45.0,0.20,0.20,0.0);
    glRectf(-0.25,-0.25,0.25,0.25);
    glPopMatrix();
    glutPostRedisplay();
    glutSwapBuffers();
    }
    glFlush();
    }
   
int main(int argc, char* argv[])
{
  glutInit(&argc,argv);
  glutInitWindowSize(800,600);
  //glutInitDisplayMode(GLUT_DOUBLE| GLUT_RGB);
  glutCreateWindow("Transformation");
  init();
  glutDisplayFunc(rotate);
  glutMouseFunc(mouse);
  glutMainLoop();
  }

