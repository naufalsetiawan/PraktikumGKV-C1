#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

	glLineWidth(10.0f);
	glBegin(GL_LINE_STRIP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.1, 0.0, 0.0);
    glVertex3f(0.1, 0.1, 0.0);
    glVertex3f(0.2, 0.1, 0.0);
    glEnd();
    
    glLineWidth(10.0f);
	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.2, 0.0, 0.0);
    glVertex3f(0.3, 0.0, 0.0);
    glVertex3f(0.3, 0.1, 0.0);
    glVertex3f(0.4, 0.1, 0.0);
    glEnd();
    
	glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-0.4, 0.1, 0.0);
    glVertex3f(-0.4, 0.0, 0.0);
    glVertex3f(-0.2, 0.0, 0.0);
    glVertex3f(-0.2, 0.1, 0.0);
    glVertex3f(-0.3, 0.2, 0.0);
    glEnd();
    
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-0.8, 0.1, 0.0);
    glVertex3f(-0.8, 0.0, 0.0);
    glVertex3f(-0.6, 0.0, 0.0);
	glVertex3f(-0.6, 0.1, 0.0);
	glVertex3f(-0.7, 0.2, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.25, 0.5, 0.40);
    glVertex3f(-0.3, -0.3, 0.0);
    glVertex3f(-0.3, -0.6, 0.0);
    glVertex3f(0.3, -0.6, 0.0);
    glVertex3f(0.3, -0.3, 0.0);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(-0.8, 0.3);
    glVertex2f(-0.6, 0.6);
    glColor3f(0.2, 0.8, 0.2);
    glVertex2f(-0.4, 0.3);
    glVertex2f(-0.2, 0.6);
    glColor3f(0.25, 0.5, 0.40);
    glVertex2f(0.0, 0.3);
    glVertex2f(0.2, 0.6);

    glEnd();
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(1000, 1000);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("no 2");
    glutDisplayFunc(display);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
