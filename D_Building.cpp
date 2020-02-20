#include<windows.h>
#include<glut.h>
#include<math.h>
# define PI           3.14159265358979323846


GLfloat twicePi = 2.0f * PI;


void display()
{
	glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);		 //sky
    glColor3ub(51, 204, 255);
    glVertex2f(1,0.3);
    glVertex2f(1,1);
	glVertex2f(-1,1);
    glVertex2f(-1,0.3);
    glEnd();

	GLfloat x=-.85f; GLfloat y=.87f; GLfloat radius =.1f;			// sun
	int triangleAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);			
	glColor3ub(252, 212, 64);
	glVertex2f(x, y); // center of circle
	for(int i = 0; i <= triangleAmount;i++) 
	{
		glVertex2f(
				x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
		);
	}
	glEnd();

	//D-Building

	glBegin(GL_QUADS);		
    glColor3ub(204, 204, 179);
    glVertex2f(1,-0.5);
	glVertex2f(1,0.3);
	glVertex2f(-1,0.3);
	glVertex2f(-1,-0.5);
    glEnd();

	glBegin(GL_QUADS);		
    glColor3ub(25, 51, 77);
    glVertex2f(1,-0.5);
	glVertex2f(-1,-0.5);
	glVertex2f(-1,-1);
	glVertex2f(1,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168, 204, 215);
    glVertex2f(.7,-.6);
    glVertex2f(.7,-.4);
    glVertex2f(-.4,-.4);
    glVertex2f(-.4,-.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(132, 115, 90);
    glVertex2f(.7,-.4);
    glVertex2f(.7,-.3);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168, 204, 215);
    glVertex2f(.7,-.3);
    glVertex2f(.7,-.1);
    glVertex2f(-.4,-.1);
    glVertex2f(-.4,-.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(132, 115, 90);
    glVertex2f(.7,-.1);
    glVertex2f(.7,0);
    glVertex2f(-.4,0);
    glVertex2f(-.4,-.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168, 204, 215);
    glVertex2f(.7,0);
    glVertex2f(.7,.2);
    glVertex2f(-.4,.2);
    glVertex2f(-.4,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(132, 115, 90);
    glVertex2f(.7,.2);
    glVertex2f(.7,.3);
    glVertex2f(-.4,.3);
    glVertex2f(-.4,.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168, 204, 215);
    glVertex2f(.7,.3);
    glVertex2f(.7,.5);
    glVertex2f(-.4,.5);
    glVertex2f(-.4,.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(132, 115, 90);
    glVertex2f(.7,.5);
    glVertex2f(.7,.6);
    glVertex2f(-.4,.6);
    glVertex2f(-.4,.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(132, 115, 90);
    glVertex2f(.9,-.6);
    glVertex2f(.9,.6);
    glVertex2f(.9,.6);
    glVertex2f(.9,-.6);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(132, 115, 90);
    glVertex2f(.750,-.750);
    glVertex2f(.750,.6);
    glVertex2f(.7,.6);
    glVertex2f(.7,-.750);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(132, 115, 90);
    glVertex2f(.7,-.750);
    glVertex2f(.7,-.6);
    glVertex2f(-.5,-.6);
    glVertex2f(-.5,-.750);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(132, 115, 90);
    glVertex2f(-.4,-.6);
    glVertex2f(-.4,.6);
    glVertex2f(-.5,.6);
    glVertex2f(-.5,-.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(112, 128, 144);
    glVertex2f(.750,-.750);
    glVertex2f(.9,-.6);
    glVertex2f(.9,.775);
    glVertex2f(.750,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2f(.9,.775);
    glVertex2f(-.85,.775);
    glVertex2f(-.5,.6);
    glVertex2f(.750,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(132, 115, 90);
    glVertex2f(-.8,-.6);
    glVertex2f(-.5,-.750);
    glVertex2f(-.5,-.6);
    glVertex2f(-.8,-.450);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168, 204, 215);
    glVertex2f(-.5,-.6);
    glVertex2f(-.5,-.1);
    glVertex2f(-.8,.1);
    glVertex2f(-.8,-.450);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(132, 115, 90);
    glVertex2f(-.5,-.1);
    glVertex2f(-.5,0);
    glVertex2f(-.8,.15);
    glVertex2f(-.8,.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(132, 115, 90);
    glVertex2f(-.5,.6);
    glVertex2f(-.8,.75);
    glVertex2f(-.8,.65);
    glVertex2f(-.5,.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168, 204, 215);
    glVertex2f(-.5,0);
    glVertex2f(-.5,.5);
    glVertex2f(-.8,.65);
    glVertex2f(-.8,.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(132, 115, 90);
    glVertex2f(-.8,.75);
    glVertex2f(-.85,.775);
    glVertex2f(-.85,-.57);
    glVertex2f(-.8,-.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(47,79,79);
    glVertex2f(-.4,-.750);
    glVertex2f(-.4,-.8);
    glVertex2f(.3,-.8);
    glVertex2f(.3,-.750);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(132, 115, 90);
    glVertex2f(-.4,-.8);
    glVertex2f(-.350,-.850);
    glVertex2f(.4,-.850);
    glVertex2f(.3,-.8);
    glEnd();



    //window divider


    glBegin(GL_LINES);
    glColor3f(255,255,255);
    glVertex2f(.7,-.167);
    glVertex2f(-.4,-.167);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(255,255,255);
    glVertex2f(.7,-.240);
    glVertex2f(-.4,-.240);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(255,255,255);
    glVertex2f(.7,.147);
    glVertex2f(-.4,.147);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(255,255,255);
    glVertex2f(.7,.067);
    glVertex2f(-.4,.067);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(255,255,255);
    glVertex2f(.7,.447);
    glVertex2f(-.4,.447);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(255,255,255);
    glVertex2f(.7,.367);
    glVertex2f(-.4,.367);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(255,255,255);
    glVertex2f(.7,-.467);
    glVertex2f(-.4,-.467);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(255,255,255);
    glVertex2f(.7,-.540);
    glVertex2f(-.4,-.540);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(255,255,255);
    glVertex2f(-.8,-.100);
    glVertex2f(-.5,-.250);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(255,255,255);
    glVertex2f(-.8,-.350);
    glVertex2f(-.5,-.500);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(255,255,255);
    glVertex2f(-.8,.500);
    glVertex2f(-.5,.350);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(255,255,255);
    glVertex2f(-.8,.250);
    glVertex2f(-.5,.100);
    glEnd();


	//National Flag


	glBegin(GL_QUADS);
	glColor3ub(0, 0, 51);
    glVertex2f(-0.9,-0.1);
    glVertex2f(-0.95,-0.1);
	glVertex2f(-0.95,-1);
    glVertex2f(-0.9,-1);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 102, 0);
    glVertex2f(-0.9,-0.1);
    glVertex2f(-0.25,-0.1);
	glVertex2f(-0.25,-0.5);
    glVertex2f(-0.9,-0.5);
    glEnd();

	GLfloat x1=-.6f; GLfloat y1=-.3f; GLfloat radius1 =.13f;
	int triangleAmount1 = 100; //# of triangles used to draw circle

	glBegin(GL_TRIANGLE_FAN);		
	glColor3ub(255, 0, 0);
	glVertex2f(x1, y1); // center of circle
	for(int i = 0; i <= triangleAmount;i++) 
	{
		glVertex2f(
				x1 + (radius1 * cos(i *  twicePi / triangleAmount1)),
			    y1 + (radius1 * sin(i * twicePi / triangleAmount1))
		);
	}
	glEnd();


    glFlush();



}
int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("AIUB D-BUILDING");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
