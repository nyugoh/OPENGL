#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>

void init(void);
void drawName(void);

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Blessed Joe codes");
    init();
    glutDisplayFunc(drawName);
    glutMainLoop();
    return 0;
}

//Initialize Pipeline
void init(void){
    //Set the backgroud
    glClearColor(0.0, 0.0, 0.0, 0.0);

    //Set the scene
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

//Draw the name
void drawName(void){
    //clear the buffers
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);

    glBegin(GL_LINES);
        //Draw letter J
        glVertex2f(0.02, 0.5);
        glVertex2f(0.2, 0.5);
        glVertex2f(0.1, 0.5);
        glVertex2f(0.1, 0.1);
        glVertex2f(0.02, 0.1);
        glVertex2f(0.1, 0.1);

        //Draw the letter O
        glColor3f(0.0, 1.0, 0.0); // - Green Color
        glVertex2f(0.3, 0.1);
        glVertex2f(0.3, 0.5);
        glVertex2f(0.3, 0.5);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.5, 0.1);
        glVertex2f(0.5, 0.1);
        glVertex2f(0.3, 0.1);

        //Draw the letter e
        glColor3f(0.0, 0.0, 1.0); // -Blue color
        glVertex2f(0.9, 0.1);
        glVertex2f(0.7, 0.1);

        glVertex2f(0.7, 0.1);
        glVertex2f(0.7, 0.5);

        glVertex2f(0.7, 0.5);
        glVertex2f(0.9, 0.5);

        glVertex2f(0.9, 0.5);
        glVertex2f(0.7, 0.25);
    glEnd();
    glFlush();
}
