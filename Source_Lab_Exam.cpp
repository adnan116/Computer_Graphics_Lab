#include<windows.h>
#include<glut.h>




void display()
{
	glClearColor(.65f,.20f,.65f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_POLYGON);
	glColor3f(0.5,0.6,0.7);
    glVertex2f(-0.2,-1);
    glVertex2f(-0.2,-0.8);	
	glVertex2f(-0.3,-0.8);
    glVertex2f(-0.3,-0.9);
	glVertex2f(-0.45,-0.9);
	glVertex2f(-0.45,-1);
    glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.25,0.9,0.8);
	glVertex2f(-0.2,-0.8);
	glVertex2f(-0.2,-0.3);
	glVertex2f(-0.3,-0.3);
	glVertex2f(-0.3,-0.8);
	glEnd();

	glTranslatef(0.3,0,0);
	glBegin(GL_QUADS);
	glColor3f(0.25,0.9,0.8);
	glVertex2f(-0.2,-0.8);
	glVertex2f(-0.2,-0.3);
	glVertex2f(-0.3,-0.3);
	glVertex2f(-0.3,-0.8);
	glEnd();

	glLoadIdentity();

	glBegin(GL_POLYGON);
	glColor3f(0.5,0.6,0.7);
    glVertex2f(0.25,-1);
    glVertex2f(0.25,-0.9);	
	glVertex2f(0.1,-0.9);
    glVertex2f(0.1,-0.8);
	glVertex2f(0,-0.8);
	glVertex2f(0,-1);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.25,0.9,0.8);
	glVertex2f(0,-0.45);
	glVertex2f(0,-0.3);
	glVertex2f(-0.2,-0.3);
	glVertex2f(-0.2,-0.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(0.1,-0.3);
	glVertex2f(0.1,0);
	glVertex2f(-0.3,0);
	glVertex2f(-0.3,-0.3);
	glEnd();

	glTranslatef(0,0.3,0);
	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	glVertex2f(0.1,-0.3);
	glVertex2f(0.1,0);
	glVertex2f(-0.3,0);
	glVertex2f(-0.3,-0.3);
	glEnd();

	glLoadIdentity();

	glBegin(GL_POLYGON);
	glColor3f(0.25,0.3,0.25);
    glVertex2f(0,0.3);
    glVertex2f(0,0.35);	
	glVertex2f(0,0.6);
    glVertex2f(-0.3,0.6);
	glVertex2f(-0.3,0.35);
	glVertex2f(-0.2,0.35);
	glVertex2f(-0.2,0.3);
    glEnd();

	glTranslatef(-0.35,0.6,0);
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
    glVertex2f(0,0);
    glVertex2f(0.4,0);	
	glVertex2f(0.4,0.15);
    glVertex2f(0.15,0.15);
	glVertex2f(0.15,0.25);
	glVertex2f(0,0.25);
    glEnd();

	glLoadIdentity();

	glTranslatef(-0.1,0.4,0);
	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(0,0);
	glVertex2f(0.05,0);
	glVertex2f(0.05,0.2);
	glVertex2f(0,0.2);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.05,0.6,0);
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
    glVertex2f(-0.02,0);
    glVertex2f(-0.02,-0.05);	
	glVertex2f(0.03,-0.05);
    glVertex2f(0.03,-0.15);
	glVertex2f(0.1,-0.15);
	glVertex2f(0.1,0);
    glEnd();

	glLoadIdentity();

	glTranslatef(-0.4,0.45,0);
	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(0,0);
	glVertex2f(0.1,0);
	glVertex2f(0.1,0.1);
	glVertex2f(0,0.1);
	glEnd();

	
	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(0.15,0);
	glVertex2f(0.3,0);
	glVertex2f(0.3,0.1);
	glVertex2f(0.15,0.1);
	glEnd();

	glLoadIdentity();

	glTranslatef(-0.3,0.50,0);
	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(0,0);
	glVertex2f(0.1,0);
	glVertex2f(0.1,0.04);
	glVertex2f(0,0.04);
	glEnd();

	glLoadIdentity();

	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(-0.3,-0.4);
	glVertex2f(-0.3,0.3);
	glVertex2f(-0.4,0.3);
	glVertex2f(-0.4,-0.4);
	glEnd();

	glTranslatef(0.5,0,0);
	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(-0.3,-0.4);
	glVertex2f(-0.3,0.3);
	glVertex2f(-0.4,0.3);
	glVertex2f(-0.4,-0.4);
	glEnd();

	glLoadIdentity();

	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	glVertex2f(-0.3,-0.5);
	glVertex2f(-0.3,-0.4);
	glVertex2f(-0.4,-0.4);
	glVertex2f(-0.4,-0.5);
	glEnd();

	glTranslatef(0.5,0,0);
	glBegin(GL_QUADS);
	glColor3f(1,1,1);
	glVertex2f(-0.3,-0.5);
	glVertex2f(-0.3,-0.4);
	glVertex2f(-0.4,-0.4);
	glVertex2f(-0.4,-0.5);
	glEnd();


	glLoadIdentity();

	glFlush();
}


int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("Lab Exam");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}