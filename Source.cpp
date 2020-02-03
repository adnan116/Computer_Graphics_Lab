#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);
              glBegin(GL_LINES);
              glColor3f(0.2,0.60,0.50);
              glVertex2f(-1,0);
              glVertex2f(1,0);
			  glVertex2f(0,-1);
              glVertex2f(0,1);
              glEnd();

			  /*glBegin(GL_TRIANGLES);
              glColor3f(0.5,0.90,0.8560);
              glVertex2f(0.5,0);
              glVertex2f(0,0.5);
			  glVertex2f(-0.5,0);

			  glColor3f(0.2,0.60,0.50);
			  glVertex2f(0.5,0);
			  glVertex2f(-0.5,0);
              glVertex2f(0,-0.5);

              glEnd();*/

			  glBegin(GL_QUADS);
              glColor3f(0.5,0.90,0.856);
              glVertex2f(0.7,0.75);
              glVertex2f(0.3,0.75);
			  glVertex2f(0.3,0.25);
              glVertex2f(0.7,0.25);
              glEnd();

			  glBegin(GL_TRIANGLES);
              glColor3f(0.565,0.25,0.60);
              glVertex2f(-0.1,0.25);
              glVertex2f(-0.4,0.5);
			  glVertex2f(-0.7,0.25);
			  glEnd();

			  glBegin(GL_POLYGON);
              glColor3f(0.185,0.69,0.50);
              glVertex2f(-0.3,-0.4);
              glVertex2f(-0.3,-0.3);
			  glVertex2f(-0.4,-0.25);
              glVertex2f(-0.7,-0.25);
			  glVertex2f(-0.8,-0.3);
			  glVertex2f(-0.8,-0.4);
              glVertex2f(-0.7,-0.45);
			  glVertex2f(-0.4,-0.45);
			  glEnd();

			  glBegin(GL_LINES);
              glColor3f(0.298,0.11,0.589);
              glVertex2f(0.9,-0.25);
              glVertex2f(0.3,-0.25);

			  glVertex2f(0.3,-0.25);
              glVertex2f(0.6,-0.5);

			  glVertex2f(0.6,-0.5);
              glVertex2f(0.9,-0.25);
              glEnd();

			  /*glBegin(GL_LINES);
              glColor3f(0.1,1,0.25);
              glVertex2f(0,-1);
              glVertex2f(0,1);
              glEnd();*/

			  /*glBegin(GL_QUADS);

              glColor3ub(134, 0, 125);
              glVertex2f(0.9,0.2);
              glVertex2f(0.9,0.3);
			  glVertex2f(-0.1,0.3);
              glVertex2f(-0.1,0.2);

			  glColor3ub(0, 0, 249);
              glVertex2f(0.9,0.3);
              glVertex2f(0.9,0.4);
			  glVertex2f(-0.1,0.4);
              glVertex2f(-0.1,0.3);

			  glColor3ub(0, 128, 24);
              glVertex2f(0.9,0.4);
              glVertex2f(0.9,0.5);
			  glVertex2f(-0.1,0.5);
              glVertex2f(-0.1,0.4);

			  glColor3ub(255, 255, 65);
              glVertex2f(0.9,0.5);
              glVertex2f(0.9,0.6);
			  glVertex2f(-0.1,0.6);
              glVertex2f(-0.1,0.5);

			  glColor3ub(255, 165, 44);
              glVertex2f(0.9,0.6);
              glVertex2f(0.9,0.7);
			  glVertex2f(-0.1,0.7);
              glVertex2f(-0.1,0.6);

			  glColor3ub(255, 0, 24);
              glVertex2f(0.9,0.7);
              glVertex2f(0.9,0.8);
			  glVertex2f(-0.1,0.8);
              glVertex2f(-0.1,0.7);

			  glColor3ub(128, 0, 0);
              glVertex2f(-0.1,0.8);
              glVertex2f(-0.15,0.8);
			  glVertex2f(-0.15,-0.8);
              glVertex2f(-0.1,-0.8);

              glEnd();*/
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
