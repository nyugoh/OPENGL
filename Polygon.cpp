#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>

void drawPolygon(void);
void drawTriangle(void);
void init(void);

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGl Polygon");
    init();
    glutDisplayFunc(drawTriangle); //Call a function to draw
    glutMainLoop();//Start the process events
    return 0;
}

void init(void){
    //Clear the backgroud
    glClearColor(0.0, 0.0, 0.0, 0.0);

    //Initialize the window
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

void drawPolygon(void){
    //Set the drawing color
    glClear(GL_COLOR_BUFFER_BIT); //Clear the color buffer
    glColor3f(0.0, 1.0, 0.0); //Set a new color - green

    //Begin drawing
    glBegin(GL_POLYGON); //Specify the primitive constant
        glVertex3f(-0.2, 0.2, 0.0);

        glColor3f(1.0, 1.0, 0.0); //Set a second color
        glVertex3f(0.8, 0.2, 0.0);

        glColor3f(0.0, 0.0, 1.0); //Set a 3rd color
        glVertex3f(0.8, 0.8, 0.0);

        glColor3f(0.5, 0.1, 0.8); //Set a 4th color
        glVertex3f(0.2, 0.8, 0.0);
    glEnd();
    glFlush();
}

//Draw a traingle
void drawTriangle(void){
    //clear color buffer
    glClear(GL_COLOR_BUFFER_BIT);
    //set the drawing color
    glColor3f(0.0, 0.0, 1.0);

    glBegin(GL_TRIANGLES);
        glVertex3f(0.5, 0.75, 0.0);
        glVertex3f(0.25, 0.2, 0.0);
        glVertex3f(0.75, 0.25, 0.0);
    glEnd();
    glFlush();
}
