#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI           3.14159265358979323846

GLfloat j = 0;


void Idle()
{
    glutPostRedisplay();
}

void speedUp(int value){
	j+=0.3;
	glutPostRedisplay();
	glutTimerFunc(1,speedUp,0);
}

void speedDown(int value){
	j-=0.3;
	glutPostRedisplay();
	glutTimerFunc(1,speedDown,0);
}

void display() {
	glClearColor(0.3f, 0.3f, 0.3f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);


	//fan
	glPushMatrix();
	glRotatef(j,0.0,0.0,1);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
	glVertex2f(0,.1);
	glVertex2f(0,-.1);
	glVertex2f(.7,-.1);
	glVertex2f(.7,.1);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
	glVertex2f(0,.1);
	glVertex2f(0,-.1);
	glVertex2f(-.7,-.1);
	glVertex2f(-.7,.1);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(255,255,255);
	glVertex2f(.1,0);
	glVertex2f(.1,.7);
	glVertex2f(-.1,.7);
	glVertex2f(-.1,0);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(255,255,255);
	glVertex2f(.1,0);
	glVertex2f(.1,-.7);
	glVertex2f(-.1,-.7);
	glVertex2f(-.1,0);
	glEnd();

    glPopMatrix();



	//fan circle

	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.2f;
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


	 x=.0f;  y=.0f;  radius =.15f;

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


	glFlush();
}

void nonRotateDisplay() {
	glClearColor(0.3f, 0.3f, 0.3f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	//fan
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
	glVertex2f(0,.1);
	glVertex2f(0,-.1);
	glVertex2f(.7,-.1);
	glVertex2f(.7,.1);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
	glVertex2f(0,.1);
	glVertex2f(0,-.1);
	glVertex2f(-.7,-.1);
	glVertex2f(-.7,.1);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(255,255,255);
	glVertex2f(.1,0);
	glVertex2f(.1,.7);
	glVertex2f(-.1,.7);
	glVertex2f(-.1,0);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(255,255,255);
	glVertex2f(.1,0);
	glVertex2f(.1,-.7);
	glVertex2f(-.1,-.7);
	glVertex2f(-.1,0);
	glEnd();



	//fan circle

	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.2f;
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


    x=.0f;  y=.0f;  radius =.15f;
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


	glFlush();
}



void speedControl(int key, int x, int y)
{
	switch(key)
		{
		case GLUT_KEY_UP:
		glutDisplayFunc(display);
		glutIdleFunc(Idle);
		glutTimerFunc(0,speedUp,0);
		break;
		case GLUT_KEY_DOWN:
		glutDisplayFunc(display);
		glutIdleFunc(Idle);
		glutTimerFunc(0,speedDown,0);
		break;
		}
	glutPostRedisplay();
}



void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
        glutDisplayFunc(nonRotateDisplay);
	}
	else if (button == GLUT_RIGHT_BUTTON){
        glutDisplayFunc(display);
		glutIdleFunc(Idle);
		glutTimerFunc(0,speedUp,0);
	}

	glutPostRedisplay();
}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Celling Fan");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
    glutMouseFunc(handleMouse);
	glutSpecialFunc(speedControl);
	glutMainLoop();
	return 0;
}
