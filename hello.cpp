#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>

//Draw a polygon
void drawPolygon(void){
    //Clear all pixels
    glClear(GL_COLOR_BUFFER_BIT);
    //sET THE color
    glColor3f(1.0, 0.0, 0.0); // Red

    //Begin Drawing
    glBegin(GL_POLYGON);
        glVertex3f(-0.5, -0.5, 0.0);
        glVertex3f(-0.5, 0.5, 0.0);
        glVertex3f(0.5, 0.5, 0.0);
        glVertex3f(0.5, -0.5, 0.0);
    glEnd();

    //Send the content to the screen
    glFlush();
}

//Draw an inverted traingle
void drawTriangle()
{
    glClearColor(0.4, 0.4, 0.4, 0.4);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 1.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

        glBegin(GL_TRIANGLES);
                glVertex3f(-0.2, 0.2, 0);
                glVertex3f(0.2, 0.2, 0);
                glVertex3f(0, -1, 0);
        glEnd();

    glFlush();
}

//Initialize drawing window
void init(void) {
    //Set the backgroud color
    glClearColor(0.0, 0.0, 0.0, 0.0);

    //Set the drawing mode
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}


int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Hello Polygon");
    init();
    glutDisplayFunc(drawPolygon);
    glutMainLoop();
    return 0;
}
