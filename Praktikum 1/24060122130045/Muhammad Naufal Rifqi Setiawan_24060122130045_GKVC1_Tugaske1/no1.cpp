#include <GL/glut.h>

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
	glPointSize(10.0f);
    glBegin(GL_POINTS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0, 0.50, 0.0);
    glEnd();

    glLineWidth(10.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.10, 0.20, 0.0);
    glVertex3f(0.50, 0.20, 0.0);
    glEnd();
    
    glFlush();
}
int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(1000, 1000);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("garis dan titik");
    glutDisplayFunc(display);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}

