#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>


void display(void)
{
    /* CIRCUNFERENCIA
     glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5);
    glColor3f(1.0,0.0,0.0);
    
    GLfloat angulo;
    int i;
   
    glBegin(GL_POINTS);
	for (i=0; i<360;i+=1)
	{
		angulo =i*M_PI/180.0f;//grados a radianes
		//glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(cos(angulo),  sin(angulo), 0.0f);
	}
    
    glEnd();
    glFlush ();
*/
	//comente esta linea
	 glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5);
     glBegin(GL_POINTS);
    
    GLfloat x, y, i;
    
   
    glColor3f(1.0, 1.0, 1.0);
    for (i=-3.0; i<=3.0;i+=0.1f)
    {
    x=i;
    y=sin((M_PI)*x);
    glVertex2f(x,y);
	}
    
   
    glColor3f(1.0, 0.0, 0.0);
    for (i=-3.0; i<=3.0;i+=0.1f)
    {
    x=i;
    y=cos((M_PI)*x);
    glVertex2f(x,y);
	}
     glEnd();
    glFlush ();


}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 4.0, 0.0, 4.0, -4.0, -4.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (850, 850);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
