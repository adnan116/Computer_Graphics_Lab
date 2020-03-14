#include<cstdio>
#include <glut.h>
#include<math.h>
# define PI           3.14159265358979323846

GLfloat position = 0.0f;
GLfloat speed = 0.1f;

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.1f;

void update(int value) {
    if(position >1.0)
        position = -1.0f;
    position += speed;
	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}

void update1(int value) {
    if(position1 <-1.0)
        position1 = 1.0f;
    position1 -= speed1;
	glutPostRedisplay();
	glutTimerFunc(100, update1, 0);
}



void displayNight() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
  
   glBegin(GL_QUADS);		//sky
    glColor3ub(0, 0, 0);
    glVertex2f(1,0.3);
    glVertex2f(1,1);
	glVertex2f(-1,1);
    glVertex2f(-1,0.3);
    glEnd();

	GLfloat x=-.8f; GLfloat y=.85f; GLfloat radius =.13f;
	int triangleAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);			//sun
	glColor3ub(255, 255, 255);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

	glBegin(GL_QUADS);		//grass
    glColor3ub(153, 255, 51);
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

	glBegin(GL_QUADS);  //signal body
	glColor3ub(160,160,160);
	glVertex2f(.95,.1);
	glVertex2f(.95,.5);
	glVertex2f(.8,.5);
	glVertex2f(.8,.1);
	glEnd();

	GLfloat x1=.87f; GLfloat y1=.2f; GLfloat radius1 =.05f;
	int triangleAmount1 = 100; 

//--------------------------Signal light--------------------

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,204,0);
		glVertex2f(x1, y1); 
		for(int i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi / triangleAmount1)),
			    y1 + (radius1 * sin(i * twicePi / triangleAmount1))
			);
		}
	glEnd();



	GLfloat x2=.87f; GLfloat y2=.32f; GLfloat radius2 =.05f;
	int triangleAmount2 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,0);
		glVertex2f(x2, y2); 
		for(int i = 0; i <= triangleAmount2;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi / triangleAmount2)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount2))
			);
		}
	glEnd();



	GLfloat x3=.87f; GLfloat y3=.44f; GLfloat radius3 =.05f;
	int triangleAmount3 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,0,0);
		glVertex2f(x3, y3); 
		for(int i = 0; i <= triangleAmount3;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePi / triangleAmount3)),
			    y3 + (radius3 * sin(i * twicePi / triangleAmount3))
			);
		}
	glEnd();


	glBegin(GL_QUADS);  //signal  stand
	glColor3ub(0,0,0);
	glVertex2f(.89,-.3);
	glVertex2f(.89,.1);
	glVertex2f(.86,.1);
	glVertex2f(.86,-.3);
	glEnd();



	glBegin(GL_QUADS);  //tree
	glColor3ub(128, 0, 0);
	glVertex2f(-.4,0);
	glVertex2f(-.4,.2);
	glVertex2f(-.5,.2);
	glVertex2f(-.5,0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0, 102, 0);
	glVertex2f(-.3,.15);
	glVertex2f(-.45,.3);
	glVertex2f(-.6,.15);
	glEnd();

	glTranslatef(0,.1,0);
	glBegin(GL_TRIANGLES);
	glColor3ub(0, 102, 0);
	glVertex2f(-.3,.15);
	glVertex2f(-.45,.3);
	glVertex2f(-.6,.15);
	glEnd();
	glLoadIdentity();

	glTranslatef(0,.2,0);
	glBegin(GL_TRIANGLES);
	glColor3ub(0, 102, 0);
	glVertex2f(-.3,.15);
	glVertex2f(-.45,.3);
	glVertex2f(-.6,.15);
	glEnd();

	glLoadIdentity();


	glScalef(1.3,1.3,0);
	glBegin(GL_QUADS);  //tree
	glColor3ub(128, 0, 0);
	glVertex2f(-.5,0);
	glVertex2f(-.5,.2);
	glVertex2f(-.6,.2);
	glVertex2f(-.6,0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0, 102, 0);
	glVertex2f(-.4,.15);
	glVertex2f(-.55,.3);
	glVertex2f(-.7,.15);
	glEnd();

	glTranslatef(0,.1,0);
	glBegin(GL_TRIANGLES);
	glColor3ub(0, 102, 0);
	glVertex2f(-.4,.15);
	glVertex2f(-.55,.3);
	glVertex2f(-.7,.15);
	glEnd();
	glLoadIdentity();
	
	glScalef(1.3,1.3,0);
	glTranslatef(0,.2,0);
	glBegin(GL_TRIANGLES);
	glColor3ub(0, 102, 0);
	glVertex2f(-.4,.15);
	glVertex2f(-.55,.3);
	glVertex2f(-.7,.15);
	glEnd();

	glLoadIdentity();

	glBegin(GL_QUADS);		//road aside
    glColor3ub(194, 194, 163);
	glVertex2f(1,-0.3);
	glVertex2f(-1,-0.3);
	glVertex2f(-1,-0.35);
	glVertex2f(1,-0.35);
    glEnd();

	glBegin(GL_QUADS);		//road aside
    glColor3ub(102, 102, 51);
	glVertex2f(1,-0.35);
	glVertex2f(-1,-0.35);
	glVertex2f(-1,-0.6);
	glVertex2f(1,-0.6);
    glEnd();

	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(1,-0.6);
	glVertex2f(-1,-0.6);
	glVertex2f(-1,-0.67);
	glVertex2f(1,-0.67);
    glEnd();

	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(1,-1);
	glVertex2f(-1,-1);
	glVertex2f(-1,-0.93);
	glVertex2f(1,-0.93);
    glEnd();

	glBegin(GL_QUADS);		//background train line
    glColor3ub(194, 194, 163);
	glVertex2f(1,-0.67);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(1,-0.93);
    glEnd();

	//----------inside train line------------

	glBegin(GL_QUADS);		
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();

	glTranslatef(0.25,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(0.5,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(0.75,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1.25,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1.5,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1.75,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2.25,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2.5,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2.75,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(3,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	
	glPushMatrix();
	glTranslatef(position,0.0f, 0.0f);
	glBegin(GL_QUADS);		//train
    glColor3ub(0, 102, 255);
	glVertex2f(0.675,-0.55);
	glVertex2f(0.675,-0.35);
	glVertex2f(0.4625,-0.35);
	glVertex2f(0.4625,-0.55);
    glEnd();

	glBegin(GL_QUADS);		//train
    glColor3ub(255, 51, 0);
	glVertex2f(0.56,-0.35);
	glVertex2f(0.65,-0.35);
	glVertex2f(0.65,-0.2);
	glVertex2f(0.56,-0.2);
    glEnd();

	glBegin(GL_QUADS);		//train
    glColor3ub(153, 51, 0);
	glVertex2f(0.4625,-0.55);
	glVertex2f(0.4625,-0.15);
	glVertex2f(0.25,-0.15);
	glVertex2f(0.25,-0.55);
    glEnd();

	glBegin(GL_QUADS);		//train
    glColor3ub(153, 51, 51);
	glVertex2f(0.25,-0.63);
	glVertex2f(0.25,-0.705);
	glVertex2f(0.05,-0.705);
	glVertex2f(0.05,-0.63);
    glEnd();

	glBegin(GL_QUADS);		//train
    glColor3ub(153, 102, 51);
	glVertex2f(0.825,-.86);
	glVertex2f(0.675,-0.55);
	glVertex2f(0.2,-0.55);
	glVertex2f(0.2,-0.86);
    glEnd();

	glBegin(GL_QUADS);		//train
    glColor3ub(51, 102, 0);
	glVertex2f(0.05,-.86);
	glVertex2f(0.05,-0.25);
	glVertex2f(-0.45,-0.25);
	glVertex2f(-0.45,-0.86);
    glEnd();

	glBegin(GL_QUADS);		//train
    glColor3ub(255, 255, 255);
	glVertex2f(-0.35,-0.55);
	glVertex2f(-0.2,-0.55);
	glVertex2f(-0.2,-0.35);
	glVertex2f(-0.35,-0.35);
    glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(position,0.0f, 0.0f);
	glTranslatef(0.2,0,0);
	glBegin(GL_QUADS);		//train
    glColor3ub(255, 255, 255);
	glVertex2f(-0.35,-0.55);
	glVertex2f(-0.2,-0.55);
	glVertex2f(-0.2,-0.35);
	glVertex2f(-0.35,-0.35);
    glEnd();
	glPopMatrix();
	glLoadIdentity();

	glPushMatrix();
	glTranslatef(position,0.0f, 0.0f);
	glTranslatef(-0.7,0,0);
	glBegin(GL_QUADS);		//train
    glColor3ub(153, 51, 51);
	glVertex2f(0.25,-0.63);
	glVertex2f(0.25,-0.705);
	glVertex2f(0.05,-0.705);
	glVertex2f(0.05,-0.63);
    glEnd();
	glPopMatrix();
	glLoadIdentity();
	

	glPushMatrix();
	glTranslatef(position,0.0f, 0.0f);
	glTranslatef(-0.7,0,0);
	glBegin(GL_QUADS);		//train
    glColor3ub(51, 102, 0);
	glVertex2f(0.05,-.86);
	glVertex2f(0.05,-0.25);
	glVertex2f(-0.45,-0.25);
	glVertex2f(-0.45,-0.86);
    glEnd();
	glPopMatrix();
	glLoadIdentity();
	

	glPushMatrix();
	glTranslatef(position,0.0f, 0.0f);
	glTranslatef(-0.5,0,0);
	glBegin(GL_QUADS);		//train
    glColor3ub(255, 255, 255);
	glVertex2f(-0.35,-0.55);
	glVertex2f(-0.2,-0.55);
	glVertex2f(-0.2,-0.35);
	glVertex2f(-0.35,-0.35);
    glEnd();
	

	
	glTranslatef(-0.2,0,0);
	glBegin(GL_QUADS);		//train
    glColor3ub(255, 255, 255);
	glVertex2f(-0.35,-0.55);
	glVertex2f(-0.2,-0.55);
	glVertex2f(-0.2,-0.35);
	glVertex2f(-0.35,-0.35);
    glEnd();
	
	glLoadIdentity();

	glPopMatrix();
	



	GLfloat x4=.625f; GLfloat y4=-.86f; GLfloat radius4 =.1f;
	int triangleAmount4 = 100; 

	glPushMatrix();
	glTranslatef(position,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(192,172,152);
		glVertex2f(x4, y4); 
		for(int i = 0; i <= triangleAmount4;i++) {
			glVertex2f(
		            x4 + (radius4 * cos(i *  twicePi / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi / triangleAmount4))
			);
		}
	glEnd();

	GLfloat x5=.355f; GLfloat y5=-.86f; GLfloat radius5 =.1f;
	int triangleAmount5 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(192,172,152);
		glVertex2f(x5, y5); 
		for(int i = 0; i <= triangleAmount5;i++) {
			glVertex2f(
		            x5 + (radius5 * cos(i *  twicePi / triangleAmount5)),
			    y5 + (radius4 * sin(i * twicePi / triangleAmount5))
			);
		}
	glEnd();

	GLfloat x6=-.1f; GLfloat y6=-.86f; GLfloat radius6 =.1f;
	int triangleAmount6 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(192,172,152);
		glVertex2f(x6, y6); 
		for(int i = 0; i <= triangleAmount6;i++) {
			glVertex2f(
		            x6 + (radius6 * cos(i *  twicePi / triangleAmount6)),
			    y6 + (radius6 * sin(i * twicePi / triangleAmount6))
			);
		}
	glEnd();

	GLfloat x7=-.35f; GLfloat y7=-.86f; GLfloat radius7 =.1f;
	int triangleAmount7 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(192,172,152);
		glVertex2f(x7, y7); 
		for(int i = 0; i <= triangleAmount7;i++) {
			glVertex2f(
		            x7 + (radius7 * cos(i *  twicePi / triangleAmount7)),
			    y7 + (radius7 * sin(i * twicePi / triangleAmount7))
			);
		}
	glEnd();

	GLfloat x8=-.78f; GLfloat y8=-.86f; GLfloat radius8 =.1f;
	int triangleAmount8 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(192,172,152);
		glVertex2f(x8, y8); 
		for(int i = 0; i <= triangleAmount8;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi / triangleAmount8)),
			    y8 + (radius8 * sin(i * twicePi / triangleAmount8))
			);
		}
	glEnd();

	GLfloat x9=-1.0f; GLfloat y9=-.86f; GLfloat radius9 =.1f;
	int triangleAmount9 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(192,172,152);
		glVertex2f(x9, y9); 
		for(int i = 0; i <= triangleAmount9;i++) {
			glVertex2f(
		            x9 + (radius9 * cos(i *  twicePi / triangleAmount9)),
			    y9 + (radius9 * sin(i * twicePi / triangleAmount9))
			);
		}
	glEnd();

	glPopMatrix();


	glLoadIdentity();

	glFlush();
}

void display1(int b)
{
    glutDisplayFunc(displayNight);
}

void displayDay() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
  
   glBegin(GL_QUADS);		//sky
    glColor3ub(51, 204, 255);
    glVertex2f(1,0.3);
    glVertex2f(1,1);
	glVertex2f(-1,1);
    glVertex2f(-1,0.3);
    glEnd();

	GLfloat x=-.8f; GLfloat y=.85f; GLfloat radius =.13f;
	int triangleAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);
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
	glPopMatrix();

	glBegin(GL_QUADS);		//grass
    glColor3ub(153, 255, 51);
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

	glBegin(GL_QUADS);  //signal body
	glColor3ub(160,160,160);
	glVertex2f(.95,.1);
	glVertex2f(.95,.5);
	glVertex2f(.8,.5);
	glVertex2f(.8,.1);
	glEnd();

	GLfloat x1=.87f; GLfloat y1=.2f; GLfloat radius1 =.05f;
	int triangleAmount1 = 100; 

//--------------------------Signal light--------------------

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,204,0);
		glVertex2f(x1, y1); 
		for(int i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi / triangleAmount1)),
			    y1 + (radius1 * sin(i * twicePi / triangleAmount1))
			);
		}
	glEnd();



	GLfloat x2=.87f; GLfloat y2=.32f; GLfloat radius2 =.05f;
	int triangleAmount2 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,0);
		glVertex2f(x2, y2); 
		for(int i = 0; i <= triangleAmount2;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi / triangleAmount2)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount2))
			);
		}
	glEnd();



	GLfloat x3=.87f; GLfloat y3=.44f; GLfloat radius3 =.05f;
	int triangleAmount3 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,0,0);
		glVertex2f(x3, y3); 
		for(int i = 0; i <= triangleAmount3;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePi / triangleAmount3)),
			    y3 + (radius3 * sin(i * twicePi / triangleAmount3))
			);
		}
	glEnd();


	glBegin(GL_QUADS);  //signal  stand
	glColor3ub(0,0,0);
	glVertex2f(.89,-.3);
	glVertex2f(.89,.1);
	glVertex2f(.86,.1);
	glVertex2f(.86,-.3);
	glEnd();



	glBegin(GL_QUADS);  //tree
	glColor3ub(128, 0, 0);
	glVertex2f(-.4,0);
	glVertex2f(-.4,.2);
	glVertex2f(-.5,.2);
	glVertex2f(-.5,0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0, 102, 0);
	glVertex2f(-.3,.15);
	glVertex2f(-.45,.3);
	glVertex2f(-.6,.15);
	glEnd();

	glTranslatef(0,.1,0);
	glBegin(GL_TRIANGLES);
	glColor3ub(0, 102, 0);
	glVertex2f(-.3,.15);
	glVertex2f(-.45,.3);
	glVertex2f(-.6,.15);
	glEnd();
	glLoadIdentity();

	glTranslatef(0,.2,0);
	glBegin(GL_TRIANGLES);
	glColor3ub(0, 102, 0);
	glVertex2f(-.3,.15);
	glVertex2f(-.45,.3);
	glVertex2f(-.6,.15);
	glEnd();

	glLoadIdentity();


	glScalef(1.3,1.3,0);
	glBegin(GL_QUADS);  //tree
	glColor3ub(128, 0, 0);
	glVertex2f(-.5,0);
	glVertex2f(-.5,.2);
	glVertex2f(-.6,.2);
	glVertex2f(-.6,0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0, 102, 0);
	glVertex2f(-.4,.15);
	glVertex2f(-.55,.3);
	glVertex2f(-.7,.15);
	glEnd();

	glTranslatef(0,.1,0);
	glBegin(GL_TRIANGLES);
	glColor3ub(0, 102, 0);
	glVertex2f(-.4,.15);
	glVertex2f(-.55,.3);
	glVertex2f(-.7,.15);
	glEnd();
	glLoadIdentity();
	
	glScalef(1.3,1.3,0);
	glTranslatef(0,.2,0);
	glBegin(GL_TRIANGLES);
	glColor3ub(0, 102, 0);
	glVertex2f(-.4,.15);
	glVertex2f(-.55,.3);
	glVertex2f(-.7,.15);
	glEnd();

	glLoadIdentity();

	glBegin(GL_QUADS);		//road aside
    glColor3ub(194, 194, 163);
	glVertex2f(1,-0.3);
	glVertex2f(-1,-0.3);
	glVertex2f(-1,-0.35);
	glVertex2f(1,-0.35);
    glEnd();

	glBegin(GL_QUADS);		//road aside
    glColor3ub(102, 102, 51);
	glVertex2f(1,-0.35);
	glVertex2f(-1,-0.35);
	glVertex2f(-1,-0.6);
	glVertex2f(1,-0.6);
    glEnd();

	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(1,-0.6);
	glVertex2f(-1,-0.6);
	glVertex2f(-1,-0.67);
	glVertex2f(1,-0.67);
    glEnd();

	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(1,-1);
	glVertex2f(-1,-1);
	glVertex2f(-1,-0.93);
	glVertex2f(1,-0.93);
    glEnd();

	glBegin(GL_QUADS);		//background train line
    glColor3ub(194, 194, 163);
	glVertex2f(1,-0.67);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(1,-0.93);
    glEnd();

	//----------inside train line------------

	glBegin(GL_QUADS);		
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();

	glTranslatef(0.25,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(0.5,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(0.75,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1.25,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1.5,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1.75,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2.25,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2.5,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2.75,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(3,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	
	glPushMatrix();
	glTranslatef(position,0.0f, 0.0f);
	glBegin(GL_QUADS);		//train
    glColor3ub(0, 102, 255);
	glVertex2f(0.675,-0.55);
	glVertex2f(0.675,-0.35);
	glVertex2f(0.4625,-0.35);
	glVertex2f(0.4625,-0.55);
    glEnd();

	glBegin(GL_QUADS);		//train
    glColor3ub(255, 51, 0);
	glVertex2f(0.56,-0.35);
	glVertex2f(0.65,-0.35);
	glVertex2f(0.65,-0.2);
	glVertex2f(0.56,-0.2);
    glEnd();

	glBegin(GL_QUADS);		//train
    glColor3ub(153, 51, 0);
	glVertex2f(0.4625,-0.55);
	glVertex2f(0.4625,-0.15);
	glVertex2f(0.25,-0.15);
	glVertex2f(0.25,-0.55);
    glEnd();

	glBegin(GL_QUADS);		//train
    glColor3ub(153, 51, 51);
	glVertex2f(0.25,-0.63);
	glVertex2f(0.25,-0.705);
	glVertex2f(0.05,-0.705);
	glVertex2f(0.05,-0.63);
    glEnd();

	glBegin(GL_QUADS);		//train
    glColor3ub(153, 102, 51);
	glVertex2f(0.825,-.86);
	glVertex2f(0.675,-0.55);
	glVertex2f(0.2,-0.55);
	glVertex2f(0.2,-0.86);
    glEnd();

	glBegin(GL_QUADS);		//train
    glColor3ub(51, 102, 0);
	glVertex2f(0.05,-.86);
	glVertex2f(0.05,-0.25);
	glVertex2f(-0.45,-0.25);
	glVertex2f(-0.45,-0.86);
    glEnd();

	glBegin(GL_QUADS);		//train
    glColor3ub(255, 255, 255);
	glVertex2f(-0.35,-0.55);
	glVertex2f(-0.2,-0.55);
	glVertex2f(-0.2,-0.35);
	glVertex2f(-0.35,-0.35);
    glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(position,0.0f, 0.0f);
	glTranslatef(0.2,0,0);
	glBegin(GL_QUADS);		//train
    glColor3ub(255, 255, 255);
	glVertex2f(-0.35,-0.55);
	glVertex2f(-0.2,-0.55);
	glVertex2f(-0.2,-0.35);
	glVertex2f(-0.35,-0.35);
    glEnd();
	glPopMatrix();
	glLoadIdentity();

	glPushMatrix();
	glTranslatef(position,0.0f, 0.0f);
	glTranslatef(-0.7,0,0);
	glBegin(GL_QUADS);		//train
    glColor3ub(153, 51, 51);
	glVertex2f(0.25,-0.63);
	glVertex2f(0.25,-0.705);
	glVertex2f(0.05,-0.705);
	glVertex2f(0.05,-0.63);
    glEnd();
	glPopMatrix();
	glLoadIdentity();
	

	glPushMatrix();
	glTranslatef(position,0.0f, 0.0f);
	glTranslatef(-0.7,0,0);
	glBegin(GL_QUADS);		//train
    glColor3ub(51, 102, 0);
	glVertex2f(0.05,-.86);
	glVertex2f(0.05,-0.25);
	glVertex2f(-0.45,-0.25);
	glVertex2f(-0.45,-0.86);
    glEnd();
	glPopMatrix();
	glLoadIdentity();
	

	glPushMatrix();
	glTranslatef(position,0.0f, 0.0f);
	glTranslatef(-0.5,0,0);
	glBegin(GL_QUADS);		//train
    glColor3ub(255, 255, 255);
	glVertex2f(-0.35,-0.55);
	glVertex2f(-0.2,-0.55);
	glVertex2f(-0.2,-0.35);
	glVertex2f(-0.35,-0.35);
    glEnd();
	

	
	glTranslatef(-0.2,0,0);
	glBegin(GL_QUADS);		//train
    glColor3ub(255, 255, 255);
	glVertex2f(-0.35,-0.55);
	glVertex2f(-0.2,-0.55);
	glVertex2f(-0.2,-0.35);
	glVertex2f(-0.35,-0.35);
    glEnd();
	
	glLoadIdentity();

	glPopMatrix();
	



	GLfloat x4=.625f; GLfloat y4=-.86f; GLfloat radius4 =.1f;
	int triangleAmount4 = 100; 

	glPushMatrix();
	glTranslatef(position,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(192,172,152);
		glVertex2f(x4, y4); 
		for(int i = 0; i <= triangleAmount4;i++) {
			glVertex2f(
		            x4 + (radius4 * cos(i *  twicePi / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi / triangleAmount4))
			);
		}
	glEnd();

	GLfloat x5=.355f; GLfloat y5=-.86f; GLfloat radius5 =.1f;
	int triangleAmount5 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(192,172,152);
		glVertex2f(x5, y5); 
		for(int i = 0; i <= triangleAmount5;i++) {
			glVertex2f(
		            x5 + (radius5 * cos(i *  twicePi / triangleAmount5)),
			    y5 + (radius4 * sin(i * twicePi / triangleAmount5))
			);
		}
	glEnd();

	GLfloat x6=-.1f; GLfloat y6=-.86f; GLfloat radius6 =.1f;
	int triangleAmount6 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(192,172,152);
		glVertex2f(x6, y6); 
		for(int i = 0; i <= triangleAmount6;i++) {
			glVertex2f(
		            x6 + (radius6 * cos(i *  twicePi / triangleAmount6)),
			    y6 + (radius6 * sin(i * twicePi / triangleAmount6))
			);
		}
	glEnd();

	GLfloat x7=-.35f; GLfloat y7=-.86f; GLfloat radius7 =.1f;
	int triangleAmount7 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(192,172,152);
		glVertex2f(x7, y7); 
		for(int i = 0; i <= triangleAmount7;i++) {
			glVertex2f(
		            x7 + (radius7 * cos(i *  twicePi / triangleAmount7)),
			    y7 + (radius7 * sin(i * twicePi / triangleAmount7))
			);
		}
	glEnd();

	GLfloat x8=-.78f; GLfloat y8=-.86f; GLfloat radius8 =.1f;
	int triangleAmount8 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(192,172,152);
		glVertex2f(x8, y8); 
		for(int i = 0; i <= triangleAmount8;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi / triangleAmount8)),
			    y8 + (radius8 * sin(i * twicePi / triangleAmount8))
			);
		}
	glEnd();

	GLfloat x9=-1.0f; GLfloat y9=-.86f; GLfloat radius9 =.1f;
	int triangleAmount9 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(192,172,152);
		glVertex2f(x9, y9); 
		for(int i = 0; i <= triangleAmount9;i++) {
			glVertex2f(
		            x9 + (radius9 * cos(i *  twicePi / triangleAmount9)),
			    y9 + (radius9 * sin(i * twicePi / triangleAmount9))
			);
		}
	glEnd();

	glPopMatrix();


	glLoadIdentity();

	glFlush();
	glutTimerFunc(3000,display1,0);

}








int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Translation Animation");
   glutDisplayFunc(displayDay);
   glutTimerFunc(100, update, 0);
   glutTimerFunc(100, update1, 0);
   glutMainLoop();
   return 0;
}
