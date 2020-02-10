#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
              

	glBegin(GL_QUADS);		//sky
    glColor3ub(51, 204, 255);
    glVertex2f(1,0.3);
    glVertex2f(1,1);
	glVertex2f(-1,1);
    glVertex2f(-1,0.3);
    glEnd();

	GLfloat x=-.7f; GLfloat y=.75f; GLfloat radius =.15f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);			//sun
	glColor3ub(252, 212, 64);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);		//grass
    glColor3ub(0, 153, 51);
    glVertex2f(1,0.3);
	glVertex2f(-1,0.3);
    glVertex2f(-1,0);
	glVertex2f(1,0);
    glEnd();

	glBegin(GL_QUADS);		//road
    glColor3ub(25, 51, 77);
    glVertex2f(1,0);
	glVertex2f(-1,0);
	glVertex2f(-1,-0.3);
	glVertex2f(1,-0.3);
    glEnd();

	glBegin(GL_QUADS);		//station room
    glColor3ub(0, 102, 255);
    glVertex2f(0.7,0);
	glVertex2f(0.7,0.4);
	glVertex2f(-0.2,0.4);
	glVertex2f(-0.2,0);
    glEnd();

	glBegin(GL_QUADS);		//station room roof
    glColor3ub(102, 153, 153);
    glVertex2f(0.9,0.4);
	glVertex2f(0.55,0.6);
	glVertex2f(-0.05,0.6);
	glVertex2f(-0.4,0.4);
    glEnd();

	glBegin(GL_QUADS);		//station room window1
    glColor3ub(102, 153, 153);
    glVertex2f(0.6,0.35);
	glVertex2f(0.4,0.35);
	glVertex2f(0.4,0.25);
	glVertex2f(0.6,0.25);
    glEnd();

	 glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(0.6,0.3);
     glVertex2f(0.4,0.3);
	 glVertex2f(0.5,.25);
     glVertex2f(0.5,.35);
     glEnd();

	glBegin(GL_QUADS);		//station room window2
    glColor3ub(102, 153, 153);
    glVertex2f(0.1,0.35);
	glVertex2f(-0.1,0.35);
	glVertex2f(-0.1,0.25);
	glVertex2f(0.1,0.25);
    glEnd();

	 glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(0.1,0.3);
     glVertex2f(-0.1,0.3);
	 glVertex2f(0,.25);
     glVertex2f(0,.35);
     glEnd();

	glBegin(GL_QUADS);		//station room door
    glColor3ub(102, 153, 153);
    glVertex2f(0.15,0);
	glVertex2f(0.35,0);
	glVertex2f(0.35,0.3);
	glVertex2f(0.15,0.3);
    glEnd();



			 
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