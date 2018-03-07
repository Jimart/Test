#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
    GLfloat x,y,i;
   
    glPointSize(5);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.6f,0.3f,0.0f);
    glBegin(GL_POINTS);
    
   
   for (i=-3.0; i<=3;i+=0.001)
    {   x=i;
		y=sin((M_PI)*x);
		glColor3f(i,i+0.2,i+0.3);
		glVertex2f(x,y);
       
    }
    glColor3f(0.1f,0.3f,0.0f);
     for (i=-3.0; i<=3;i+=0.001)
    {   x=i;
		y=cos((M_PI)*x);
		glVertex2f(x,y);
       
    }




/*    glBegin(GL_QUAD_STRIP);
    
// FIRST
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0f,0.5f,0.0f); 
    glVertex3f(-0.5f,0.5f,0.0f);
    glVertex3f(0.5f,0.0f,0.0f); 
    glVertex3f(-0.5f,0.0f,0.0f); 
 // SECOND
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.7f,-0.5f,0.0f); 
    glVertex3f(-0.7f,-0.5f,0.0f); 
 // THIRD 
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.8f,-0.8f,0.0f); 
    glVertex3f(-0.9f,-0.8f,0.0f);  
*/

    //glPointSize(2.0f);
    //glTranslatef(0.0f,0.0f,-0.2f);
    //glBegin(GL_LINE);
    //glBegin(GL_LINE_LOOP);
    //glBegin(GL_TRIANGLES);
    //dibujamos un triangulo
    //glColor3f(0.0f, 0.0f, 1.0f);
    //glVertex3f(0.0f,0.8f,0.0f); //coordenadas del primer triangulo
    //glColor3f(1.0f, 0.0f, 1.0f);
    //glVertex3f(-0.6f,-02.0f,0.0f); //coordenadas del segundo triangulo
    //glColor3f(0.0f, 0.0f, 1.0f);
    //glVertex3f(0.6f,-0.2f,0.0f); //coordenadas del tercer vertice
    //glColor3f(0.0f, 0.0f, 1.0f);
    //glVertex3f(0.0f,1.0f,0.0f);
    //glColor3f(0.0f, 0.0f, 1.0f);
    //glVertex3f(0.0f,0.0f,0.0f);
    //glColor3f(1.0f, 0.0f, 1.0f);

    //glVertex3f(1.0f,0.0f,0.0f);
    //glColor3f(0.0f, 1.0f, 1.0f);
    //glVertex3f(0.5f,0.5f,0.5f);
    //glColor3f(1.0f, 1.0f, 1.0f);
    //glVertex3f(1.0f,1.0f,1.0f);
    glEnd();
    glFlush ();

    

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-5.0, 5.0, -5.0, 5.0, -5.0, 5.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Puntos OpenGL");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
