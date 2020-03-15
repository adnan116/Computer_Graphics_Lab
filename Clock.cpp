#include <windows.h>
#include <glut.h>
#include<math.h>>

# define PI           3.14159265358979323846

 GLfloat h=0.0f;
 GLfloat m=0.0f;
 GLfloat s=0.0f;
void Idle()
{
    glutPostRedisplay();
}


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);



	//row-1
	glBegin(GL_QUADS);
    glColor3ub(155,123,139);
	glVertex2f(-1,1);
	glVertex2f(-1,0);
	glVertex2f(-0.6,0);
	glVertex2f(-0.6,1);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(0,191,255);
	glVertex2f(-0.6,1);
	glVertex2f(-0.6,0);
	glVertex2f(-0.2,0);
	glVertex2f(-0.2,1);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(155,123,139);
	glVertex2f(-0.2,1);
	glVertex2f(-0.2,0);
	glVertex2f(0.2,0);
	glVertex2f(0.2,1);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(0,191,255);
	glVertex2f(0.2,1);
	glVertex2f(0.2,0);
	glVertex2f(0.6,0);
	glVertex2f(0.6,1);
	glEnd();
	//glLoadIdentity();

	glBegin(GL_QUADS);
    glColor3ub(155,123,139);
	glVertex2f(0.6,1);
	glVertex2f(0.6,0);
	glVertex2f(1,0);
	glVertex2f(1,1);
	glEnd();




	//row-2    
	glBegin(GL_QUADS);
    glColor3ub(0,191,255);
	glVertex2f(-1,0);
	glVertex2f(-1,-1);
	glVertex2f(-0.6,-1);
	glVertex2f(-0.6,0);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(155,123,139);
	glVertex2f(-0.6,0);
	glVertex2f(-0.6,-1);
	glVertex2f(-0.2,-1);
	glVertex2f(-0.2,0);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(0,191,255);
	glVertex2f(-0.2,0);
	glVertex2f(-0.2,-1);
	glVertex2f(0.2,-1);
	glVertex2f(0.2,0);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(155,123,139);
	glVertex2f(0.2,0);
	glVertex2f(0.2,-1);
	glVertex2f(0.6,-1);
	glVertex2f(0.6,0);
	glEnd();
	//glLoadIdentity();

	glBegin(GL_QUADS);
    glColor3ub(0,191,255);
	glVertex2f(0.6,0);
	glVertex2f(0.6,-1);
	glVertex2f(1,-1);
	glVertex2f(1,0);
	glEnd();


	//clock
	glScalef(1.3,1.3,0);
	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.6f;
	int triangleAmount = 500;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(192,192,192);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x=.0f;  y=.0f;  radius =.55f;

	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glLineWidth(2.5);


    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);//hour
	glVertex2f(-.350,.0);
	glVertex2f(0.0,0.0);
	glEnd();

	glPopMatrix();
	glRotatef(m,0.0,0.0,0.1);

	glBegin(GL_LINES);
    glColor3ub(0, 0, 0);//minuite
	glVertex2f(0.0,.4);
	glVertex2f(0.0,0.0);
	glEnd();

	glPopMatrix();
	m-=0.0001f;
	glLoadIdentity();

	glPopMatrix();
    glRotatef(s,0.0,0.0,0.1);

	glBegin(GL_LINES);
    glColor3ub(0, 0, 0);//second
	glVertex2f(0.0,0.0);
	glVertex2f(-.3,-.4);
	glEnd();
	glPopMatrix();
	s-=0.0057f;
	glLoadIdentity();


	//12
	glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
	glVertex2f(0.0,0.46);
	glVertex2f(0.0,0.54);
	glLineWidth(4.5);
	glEnd();

	
	//3
	glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
	glVertex2f(0.45,0.0);
	glVertex2f(0.54,0.0);
	glLineWidth(4.5);
	glEnd();

	
	//6
	glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
	glVertex2f(0.0,-0.46);
	glVertex2f(0.0,-0.54);
	glLineWidth(4.5);
	glEnd();


	//9
	glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
	glVertex2f(-0.45,0.0);
	glVertex2f(-0.54,0.0);
	glLineWidth(4.5);
	glEnd();


	
	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow(" Analog Animated Clock");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutIdleFunc(Idle);
	glutMainLoop();
	return 0;
}