#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
GLfloat i = 0;

void Idle()
{
	glutPostRedisplay();
}
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);
			  glPushMatrix();
			  glRotatef(i,0,0,1);
			  glTranslatef(.2,.2,0);
              glBegin(GL_LINES);
              glColor3f(0.2,0.60,0.50);
              glVertex2f(0,0);
              glVertex2f(.2,.2);
              glEnd();

			 
			  /*glBegin(GL_QUADS);
              glColor3f(0.5,0.90,0.856);
              glVertex2f(0.7,0.75);
              glVertex2f(0.3,0.75);
			  glVertex2f(0.3,0.25);
              glVertex2f(0.7,0.25);
              glEnd();*/

			  glPopMatrix();
			  i+=0.1;
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutIdleFunc(Idle);
	glutMainLoop();
	return 0;
}