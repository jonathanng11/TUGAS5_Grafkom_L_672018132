#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <math.h>
void init(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);


float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth,a;

void glut()
{
    glLoadIdentity();
       gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
       glRotatef(xrot, 1.0f,0.0f, 0.0f);
       glRotatef(yrot, 0.0f, 1.0f, 0.0f);
}


void init(void){
  glClearColor(1,1,1,0);
   glMatrixMode(GL_PROJECTION);
   glEnable(GL_DEPTH_TEST);
   is_depth=1;
   glMatrixMode(GL_MODELVIEW);
   glPointSize(5.0);
   glLineWidth(1.0f);
   }


   void rumah(void){
    //BANGUNAN 1
   //depan
    glBegin(GL_POLYGON);
    glColor3f(220/255.0f,220/255.0f,220/255.0f);
    glVertex3f(-40,30,40);
    glVertex3f(0,30,40);
    glVertex3f(0,-30,40);
    glVertex3f(-40,-30,40);
    glEnd();

    //kiri
    glBegin(GL_POLYGON);
    glColor3f(105/255.0f,105/255.0f,105/255.0f);
    glVertex3f(-40,30,40);
    glVertex3f(-40,-30,40);
    glVertex3f(-40,-30,-40);
    glVertex3f(-40,30,-40);
    glEnd();

    //kanan
    glBegin(GL_POLYGON);
    glColor3f(105/255.0f,105/255.0f,105/255.0f);
    glVertex3f(0,30,40);
    glVertex3f(0,-30,40);
    glVertex3f(0,-30,-40);
    glVertex3f(0,30,-40);
    glEnd();

    //belakang
    glBegin(GL_POLYGON);
    glColor3f(220/255.0f,220/255.0f,220/255.0f);
    glVertex3f(-40,30,-40);
    glVertex3f(0,30,-40);
    glVertex3f(0,-30,-40);
    glVertex3f(-40,-30,-40);
    glEnd();

    //atas
    glBegin(GL_QUADS);
    glColor3f(128/255.0f,128/255.0f,128/255.0f);
    glVertex3f(-45,30,45);
    glVertex3f(0,30,45);
    glVertex3f(0,30,-45);
    glVertex3f(-45,30,-45);
    glEnd();

    //atas depan
    glBegin(GL_POLYGON);
    glColor3f(220/255.0f,220/255.0f,220/255.0f);
    glVertex3f(-45,30,45);
    glVertex3f(0,30,45);
    glVertex3f(0,32,45);
    glVertex3f(-45,32,45);
    glEnd();

    //atas kanan
    glBegin(GL_POLYGON);
    glColor3f(105/255.0f,105/255.0f,105/255.0f);
    glVertex3f(0,32,45);
    glVertex3f(0,30,45);
    glVertex3f(0,30,-45);
    glVertex3f(0,32,-45);
    glEnd();

    //atas kiri
    glBegin(GL_POLYGON);
    glColor3f(105/255.0f,105/255.0f,105/255.0f);
    glVertex3f(-45,32,45);
    glVertex3f(-45,30,45);
    glVertex3f(-45,30,-45);
    glVertex3f(-45,32,-45);
    glEnd();

    //atas belakang
    glBegin(GL_POLYGON);
    glColor3f(220/255.0f,220/255.0f,220/255.0f);
    glVertex3f(-45,30,-45);
    glVertex3f(0,30,-45);
    glVertex3f(0,32,-45);
    glVertex3f(-45,32,-45);
    glEnd();

    //atas2
    glBegin(GL_QUADS);
    glColor3f(128/255.0f,128/255.0f,128/255.0f);
    glVertex3f(-45,32,45);
    glVertex3f(0,32,45);
    glVertex3f(0,32,-45);
    glVertex3f(-45,32,-45);
    glEnd();

    //dasar
    glBegin(GL_QUADS);
    glColor3f(27/255.0f,128/255.0f,1/255.0f);
    glVertex3f(-50,-30,50);
    glVertex3f(50,-30,50);
    glVertex3f(50,-30,-60);
    glVertex3f(-50,-30,-60);
    glEnd();


    //BANGUNAN 2

    //depan
    glBegin(GL_POLYGON);
    glColor3f(220/255.0f,220/255.0f,220/255.0f);
    glVertex3f(40,30,30);
    glVertex3f(0,55,30);
    glVertex3f(0,-30,30);
    glVertex3f(40,-30,30);
    glEnd();

    //belakang
    glBegin(GL_POLYGON);
    glColor3f(220/255.0f,220/255.0f,220/255.0f);
    glVertex3f(40,30,-50);
    glVertex3f(0,55,-50);
    glVertex3f(0,-30,-50);
    glVertex3f(40,-30,-50);
    glEnd();

    //kiri
    glBegin(GL_POLYGON);
    glColor3f(105/255.0f,105/255.0f,105/255.0f);
    glVertex3f(0,55,30);
    glVertex3f(0,-30,30);
    glVertex3f(0,-30,-50);
    glVertex3f(0,55,-50);
    glEnd();

    //kanan
    glBegin(GL_POLYGON);
    glColor3f(105/255.0f,105/255.0f,105/255.0f);
    glVertex3f(40,30,30);
    glVertex3f(40,-30,30);
    glVertex3f(40,-30,-50);
    glVertex3f(40,30,-50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(128/255.0f,128/255.0f,128/255.0f);
    glVertex3f(0,55,30);
    glVertex3f(0,55,-50);
    glVertex3f(40,30,-50);
    glVertex3f(40,30,30);
    glEnd();
    }

    void jendela(void)
    {
        //pintu
    glBegin(GL_POLYGON);
    glColor3f(210/255.0f,105/255.0f,30/255.0f);
    glVertex3f(15,0,30.01);
    glVertex3f(4,0,30.01);
    glVertex3f(4,-30,30.01);
    glVertex3f(15,-30,30.01);
    glEnd();

    glBegin(GL_POINTS);
    glColor3f(0,0,0);
    glVertex3f(14,-15,30.02);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(210/255.0f,105/255.0f,30/255.0f);
    glVertex3f(0,-30,-20);
    glVertex3f(0,10,-20);
    glVertex3f(0,10,0);
    glVertex3f(0,-30,0);
    glEnd();

    //JENDELA DEPAN
    glBegin(GL_POLYGON);
    glColor3f(184/255.0f,134/255.0f,11/255.0f);
    glVertex3f(20,10,30.01);
    glVertex3f(35,10,30.01);
    glVertex3f(35,-25,30.01);
    glVertex3f(20,-25,30.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(240/255.0f,248/255.0f,254/255.0f);
    glVertex3f(21,9,30.02);
    glVertex3f(34,9,30.02);
    glVertex3f(34,-24,30.02);
    glVertex3f(21,-24,30.02);
    glEnd();



    //JENDELA
    glBegin(GL_POLYGON);
    glColor3f(184/255.0f,134/255.0f,11/255.0f);
    glVertex3f(-30,-5,40.01);
    glVertex3f(-10,-5,40.01);
    glVertex3f(-10,-20,40.01);
    glVertex3f(-30,-20,40.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(240/255.0f,248/255.0f,254/255.0f);
    glVertex3f(-29,-6,40.02);
    glVertex3f(-11,-6,40.02);
    glVertex3f(-11,-19,40.02);
    glVertex3f(-29,-19,40.02);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(184/255.0f,134/255.0f,11/255.0f);
    glVertex3f(-30,5,40.01);
    glVertex3f(-10,5,40.01);
    glVertex3f(-10,20,40.01);
    glVertex3f(-30,20,40.01);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(240/255.0f,248/255.0f,254/255.0f);
    glVertex3f(-29,6,40.02);
    glVertex3f(-11,6,40.02);
    glVertex3f(-11,19,40.02);
    glVertex3f(-29,19,40.02);
    glEnd();

    //JENDELA SAMPING 1
    glBegin(GL_POLYGON);
    glColor3f(184/255.0f,134/255.0f,11/255.0f);
    glVertex3f(-40.01,20,30);
    glVertex3f(-40.01,-20,30);
    glVertex3f(-40.01,-20,15);
    glVertex3f(-40.01,20,15);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(240/255.0f,248/255.0f,254/255.0f);
    glVertex3f(-40.02,19,29);
    glVertex3f(-40.02,-19,29);
    glVertex3f(-40.02,-19,16);
    glVertex3f(-40.02,19,16);
    glEnd();

    //JENDELA SAMPING 2
    glBegin(GL_POLYGON);
    glColor3f(184/255.0f,134/255.0f,11/255.0f);
    glVertex3f(-40.01,20,-15);
    glVertex3f(-40.01,-20,-15);
    glVertex3f(-40.01,-20,-30);
    glVertex3f(-40.01,20,-30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(240/255.0f,248/255.0f,254/255.0f);
    glVertex3f(-40.02,19,-16);
    glVertex3f(-40.02,-19,-16);
    glVertex3f(-40.02,-19,-29);
    glVertex3f(-40.02,19,-29);
    glEnd();

    }

    void linelooping(void)
    {
        //GARIS LINE LOOP
    //depan
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-40,30,40);
    glVertex3f(0,30,40);
    glVertex3f(0,-30,40);
    glVertex3f(-40,-30,40);
    glEnd();

    //kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-40,30,40);
    glVertex3f(-40,-30,40);
    glVertex3f(-40,-30,-40);
    glVertex3f(-40,30,-40);
    glEnd();

    //kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(0,30,40);
    glVertex3f(0,-30,40);
    glVertex3f(0,-30,-40);
    glVertex3f(0,30,-40);
    glEnd();

    //belakang
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-40,30,-40);
    glVertex3f(0,30,-40);
    glVertex3f(0,-30,-40);
    glVertex3f(-40,-30,-40);
    glEnd();

    //atas
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-45,30,45);
    glVertex3f(0,30,45);
    glVertex3f(0,30,-45);
    glVertex3f(-45,30,-45);
    glEnd();

    //atas depan
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-45,30,45);
    glVertex3f(0,30,45);
    glVertex3f(0,32,45);
    glVertex3f(-45,32,45);
    glEnd();

    //atas kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(0,32,45);
    glVertex3f(0,30,45);
    glVertex3f(0,30,-45);
    glVertex3f(0,32,-45);
    glEnd();

    //atas kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-45,32,45);
    glVertex3f(-45,30,45);
    glVertex3f(-45,30,-45);
    glVertex3f(-45,32,-45);
    glEnd();

    //atas belakang
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-45,30,-45);
    glVertex3f(0,30,-45);
    glVertex3f(0,32,-45);
    glVertex3f(-45,32,-45);
    glEnd();

    //atas2
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-45,32,45);
    glVertex3f(0,32,45);
    glVertex3f(0,32,-45);
    glVertex3f(-45,32,-45);
    glEnd();
    //bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-50,-30,50);
    glVertex3f(50,-30,50);
    glVertex3f(50,-30,-60);
    glVertex3f(-50,-30,-60);
    glEnd();


    //BANGUNAN 2
    //depan
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(40,30,30);
    glVertex3f(0,55,30);
    glVertex3f(0,-30,30);
    glVertex3f(40,-30,30);
    glEnd();

    //belakang
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(40,30,-50);
    glVertex3f(0,55,-50);
    glVertex3f(0,-30,-50);
    glVertex3f(40,-30,-50);
    glEnd();

    //kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(105/255.0f,105/255.0f,105/255.0f);
    glVertex3f(0,55,30);
    glVertex3f(0,-30,30);
    glVertex3f(0,-30,-50);
    glVertex3f(0,55,-50);
    glEnd();

    //kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(40,30,30);
    glVertex3f(40,-30,30);
    glVertex3f(40,-30,-50);
    glVertex3f(40,30,-50);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(0,55,30);
    glVertex3f(0,55,-50);
    glVertex3f(40,30,-50);
    glVertex3f(40,30,30);
    glEnd();


    //JENDELA
    glBegin(GL_LINE_LOOP);
    glColor3f(184/255.0f,134/255.0f,11/255.0f);
    glVertex3f(-30,-5,40.01);
    glVertex3f(-10,-5,40.01);
    glVertex3f(-10,-20,40.01);
    glVertex3f(-30,-20,40.01);
    glEnd();

    }

    void display(void)
{
    if(a){
        if (is_depth){
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            rumah();
    }
        else
        glClear(GL_COLOR_BUFFER_BIT);
        rumah();
        jendela();
    }
    else
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        rumah();
        jendela();
        linelooping();
    glPopMatrix();
    glutSwapBuffers();
}

    void idle()
{
    if (!mouseDown)
    {
        xrot += 0.3f;
        yrot += 0.4f;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;


}

void mouseMotion(int x, int y)
{
    glut();
    if (mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }

}
void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi =1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50, lebar / tinggi, 5, 500);
    glTranslated(0, -5, -150);
    glMatrixMode(GL_MODELVIEW);

}

void keyboard(unsigned char key, int x, int y)
{

    switch(key)
    {
        case 'w':
        case 'W':
            glTranslated(0,0,3);
            break;
        case 'd':
        case 'D':
            glTranslated(3,0,0);
            break;
        case 's':
        case 'S':
            glTranslated(0,0,-3);
            break;
        case 'a':
        case 'A':
            glTranslated(-3,0,0);
            break;
        case '7':
            glTranslated(0,3,0);
            break;
        case '9':
            glTranslated(0,-3,0);
            break;
        case '2':
            glRotated(2,1,0,0);
            break;
        case '8':
            glRotated(-2,1,0,0);
            break;
        case '6':
            glRotated(2,0,1,0);
            break;
        case '4':
            glRotated(-2,1,0,0);
            break;
        case '1':
            glRotated(2,0,0,1);
            break;
        case '3':
            glRotated(-2,0,0,1);
            break;
        case '5':
            if (is_depth)
            {
                is_depth = 0;
                glDisable(GL_DEPTH_TEST);
            }
            else
            {
                is_depth = 1;
                glEnable(GL_DEPTH_TEST);
            }
    }
    display();


}

int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(250, 80);
    glutInitWindowSize(800, 600);
    glutCreateWindow("672018132 - Jonathan Nandika Gustin");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutReshapeFunc(ukuran);
    glutMainLoop();

    return 0;
}
