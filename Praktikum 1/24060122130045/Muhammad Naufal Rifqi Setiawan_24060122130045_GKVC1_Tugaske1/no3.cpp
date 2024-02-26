#include <GL/glut.h>

void ayam(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3f(0.0f, 0.0f, 0.0f);
    glRectf(-0.6, 0.1, -0.55, 0.2);    
    glRectf(-0.55, 0.2, -0.5, 0.3);
    glRectf(-0.5, 0.3, -0.45, 0.35);
    glRectf(-0.45, 0.35, -0.25, 0.4);
	glRectf(-0.3, 0.2, -0.25, 0.4);
	glRectf(-0.25, 0.15, -0.2, 0.2);
 
 	glRectf(-0.2, 0.1, -0.15, 0.05);
 	
 	glRectf(-0.1, 0.05, 0.0, 0.0);
 	
	glRectf(-0.2, 0.1, -0.15, 0.15);
	glRectf(-0.15, 0.15, -0.05, 0.2);
	glRectf(-0.05, 0.2, 0.1, 0.25);
	glRectf(0.05, 0.2, 0.1, 0.0);
	glRectf(0.0 ,-0.05 , 0.1, 0.0);

	glRectf(0.05 ,-0.05 , 0.1, -0.15);
	glRectf(0.0 ,-0.15 , 0.05, -0.25);
	glRectf(-0.1 ,-0.25 , 0.0, -0.3);
	
	glRectf(-0.25 ,-0.2 , -0.1, -0.25);
	glRectf(-0.3 ,-0.15 , -0.25, -0.2);
	
	glRectf(-0.15 ,-0.3 , -0.1, -0.35);
	glRectf(-0.2 ,-0.35 , -0.15, -0.4);
	glRectf(-0.3 ,-0.3 , -0.2, -0.35);
	glRectf(-0.4 ,-0.35 , -0.35, -0.4);
	glRectf(-0.55 ,-0.3 , -0.45, -0.35);

	glRectf(-0.60 ,-0.35 , -0.55, -0.4);
	glRectf(-0.6 ,-0.25 , -0.55, -0.3);
	glRectf(-0.65 ,-0.2 , -0.6, -0.25);
	glRectf(-0.7 ,-0.05 , -0.65, -0.2);
	glRectf(-0.65 ,0.0 , -0.6, -0.05);
	glRectf(-0.6 ,0.0 , -0.55, 0.05);
	glRectf(-0.65 ,0.05 , -0.6, 0.1);
	

	glRectf(-0.55, 0.1, -0.5, 0.15);
	glRectf(-0.4, 0.15, -0.35, 0.05);
	

    glColor3f(0.949, 0.647, 0.384);
    glRectf(-0.6, 0.05, -0.45, 0.1);
	glRectf(-0.55, 0.0, -0.4, 0.05);
	

    glColor3f(0.949, 0.647, 0.384);
    glRectf(-0.55, -0.35, -0.4, -0.4);
	

    glColor3f(0.949, 0.647, 0.384);
    glRectf(-0.35, -0.35, -0.2, -0.4);
	
	
	glColor3f(0.863, 0.349, 0.400);
	glRectf(-0.55, 0.0, -0.45, -0.1);
	
	glColor3f(0.863, 0.349, 0.400);
	glRectf(-0.45, 0.35, -0.3, 0.3);
	glRectf(-0.5, 0.3, -0.3, 0.25);
	glRectf(-0.5, 0.25, -0.45, 0.2);
	
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(1000, 1000);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("ini ayam");
    glutDisplayFunc(ayam);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
}
