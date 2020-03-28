#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI           3.14159265358979323846

GLfloat j = 0;
GLfloat position = 0.0f;
GLfloat speed = 0.0f;

void update(int value) {
    if(position >1.0)
        position = -1.0f;
    position += speed;
	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}
void Idle()
{
    glutPostRedisplay();
}


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();
	glRotatef(j,0.0,0.0,1);
    glBegin(GL_QUADS);
    glColor3ub(155,123,139);
	glVertex2f(0,.1);
	glVertex2f(0,-.1);
	glVertex2f(.7,-.1);
	glVertex2f(.7,.1);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(155,123,139);
	glVertex2f(0,.1);
	glVertex2f(0,-.1);
	glVertex2f(-.7,-.1);
	glVertex2f(-.7,.1);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(155,123,139);
	glVertex2f(.1,0);
	glVertex2f(.1,.7);
	glVertex2f(-.1,.7);
	glVertex2f(-.1,0);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(155,123,139);
	glVertex2f(.1,0);
	glVertex2f(.1,-.7);
	glVertex2f(-.1,-.7);
	glVertex2f(-.1,0);
	glEnd();



	//glLoadIdentity();

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



void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	case 'a':
		j+=.1;
		glPopMatrix();
		break;
	case 'b':
	    glPopMatrix();
		j+=.2;
		break;
    case 'c':
        glPopMatrix();
		j+=.3;
		break;
    case 'd':
        glPopMatrix();
		j+=.4;
		break;
    case 'e':
        glPopMatrix();
		j+=.5;
		break;
	glutPostRedisplay();
	}
}


void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
        glPopMatrix();
        j=0;
	}
	else if (button == GLUT_RIGHT_BUTTON){
        glPopMatrix();
        j+=.1;
	}

	glutPostRedisplay();
}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow(" Analog Animated Clock");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
	glutIdleFunc(Idle);
	glutMainLoop();
	return 0;
}
