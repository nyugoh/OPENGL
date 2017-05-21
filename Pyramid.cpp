#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>

void Pyramid(void);
void init(void);

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Pyramids of Gizah");
    init();
    glutDisplayFunc(Pyramid);
    glutMainLoop();
    return 0;
}

void init(void){
    //Set the backgroud color
    glClearColor(0.0, 0.0, 0.0, 0.0);

    //Initialize the drawing window
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 0.0);
}

//Draw the Pyramid
void Pyramid(void){
    glClear(GL_COLOR_BUFFER_BIT); //
    glColor3f(1.0, 0.0, 0.0);

    glBegin(GL_LINES);
        glVertex3f(0.0, 0.0, 0.0);
        glVertex3f(0.5, 0.5, 0.0);
        glVertex3f(0.5, 0.5, 0.0);
        glVertex3f(0.75, 0.0, 0.0);
    glEnd();
    glFlush();
}
