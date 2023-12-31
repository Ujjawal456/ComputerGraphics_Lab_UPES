#include <GL/glut.h>       // GLUT, include glu.h and gl.h
#include <stdio.h>
void init()
{
    // Set display window color to as glClearColor(R,G,B,Alpha)
    glClearColor(0.0, 1.0, 1.0, 0.1);
    // Set projection parameters.
    glMatrixMode(GL_PROJECTION);
    // Set 2D Transformation as gluOrtho2D(Min Width, Max Width, Min Height, Max Height)
    gluOrtho2D(0.0, 800, 0.0, 600);
}
void home()
{
    //Roof
    glClear(GL_COLOR_BUFFER_BIT);     // Clear display window
    // Set line segment color as glColor3f(R,G,B)
    glColor3f(1.0, 0.6, 0.5);
    glBegin(GL_POLYGON);
    glVertex2i(200, 550);
    glVertex2i(600, 550);
    glVertex2i(700, 400);
    glVertex2i(300, 400);
    glEnd();
    // Top of Front Wall
    glColor3f(1.0, 0.9, 0.1);
    glBegin(GL_TRIANGLES);
    glVertex2i(195, 545+5);
    glVertex2i(100-5, 395+5);
    glVertex2i(300-5, 395+5);
    glEnd();
    // Front Wall
    glColor3f(0.3, 0.9, 0.1);
    glBegin(GL_POLYGON);
    glVertex2i(100-5, 350+45);
    glVertex2i(300-5, 350+45);
    glVertex2i(300-5, 100+45);
    glVertex2i(100-5, 100+45);
    glEnd();
    // Front Door
    glColor3f(1.0, 0.6, 0.5);
    glBegin(GL_POLYGON);
    glVertex2i(150-5, 250+45);
    glVertex2i(250-5, 250+45);
    glVertex2i(250-5, 100+45);
    glVertex2i(150-5, 100+45);
    glEnd();
    //side Wall
    glColor3f(1.0, 1.0, 0.1);
    glBegin(GL_POLYGON);
    glVertex2i(300, 350+45);
    glVertex2i(700, 350+45);
    glVertex2i(700, 100+45);
    glVertex2i(300, 100+45);
    glEnd();
    // window one
    glColor3f(0.6, 0.6, 0.5);
    glBegin(GL_POLYGON);
    glVertex2i(330, 320);
    glVertex2i(450, 320);
    glVertex2i(450, 230);
    glVertex2i(330, 230);
    glEnd();
    // line of window one
    glColor3f(0.1, 0.1, 0.1);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(390, 320);
    glVertex2i(390, 230);
    glVertex2i(330, 273);
    glVertex2i(450, 273);
    glEnd();
    // window two
    glColor3f(0.2, 0.3, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(530, 320);
    glVertex2i(650, 320);
    glVertex2i(650, 230);
    glVertex2i(530, 230);
    glEnd();
    // lines of window two
    glColor3f(0.1, 0.1, 0.1);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(590, 320);
    glVertex2i(590, 230);
    glVertex2i(530, 273);
    glVertex2i(650, 273);
    glEnd();
    //Borders
    // Process all OpenGL routine s as quickly as possible
    glFlush();
}
int main(int argc, char** argv)
{
    // Initialize GLUT
    glutInit(&argc, argv);
    // Set display mode
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    // Set top - left display window position.
    glutInitWindowPosition(100, 100);
    // Set display window width and height
    glutInitWindowSize(800, 600);
    // Create display window with the given title
    glutCreateWindow("2D House ");
    // Execute initialization procedure
    init();
    // Send graphics to display window
    glutDisplayFunc(home);
    // Display everything and wait.
    glutMainLoop();
}

