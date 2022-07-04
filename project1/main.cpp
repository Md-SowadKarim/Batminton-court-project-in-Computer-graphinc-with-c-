#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <string>
#define PI 3.1416
using namespace std;

int windowWidth = 700, windowHeight = 700;
void rectangle(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4,float r,float g,float b)
{
    glBegin(GL_LINE_LOOP);
    glColor3f(r,g,b);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glVertex2f(x4,y4);
    glEnd();
}
void traingle(float x1,float y1,float x2,float y2,float x3,float y3,float r,float g,float b)
{
    glBegin(GL_LINE_LOOP);
    glColor3f(r,g,b);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
   // glVertex2f(x4,y4);
    glEnd();
}
void line(float x1,float y1,float x2,float y2,float r,float g,float b)
{
    glBegin(GL_LINES);
    glColor3f(r,g,b);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glEnd();
}
void circle(float r, float num_segments )
{
    glBegin(GL_TRIANGLE_FAN);
    for(int ii = 0; ii < num_segments; ii++)
    {
        float theta = 2.0 * 3.1415926 * float(ii) / float(num_segments);//get the current angle

        float x = r * cosf(theta);//calculate the x component
        float y = r * sinf(theta);//calculate the y component
        glVertex2f(x,y);//output vertex
    }
    glEnd();

}
void circle1(float x, float y, float r, float num_segments )
{
    glBegin(GL_TRIANGLE_FAN);
    for(int ii = 0; ii < num_segments; ii++)
    {
        float theta = 2.0 * 3.1415926 * float(ii) / float(num_segments);//get the current angle

        float x = r * cosf(theta);//calculate the x component
        float y = r * sinf(theta);//calculate the y component
        glVertex2f(x , y);//output vertex
    }
    glEnd();

}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(0, 700, 0, 700);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    glViewport(0, 0,windowWidth,windowHeight);
//================================= main task ===========================================

 glPushMatrix();
    rectangle(50.0,10.0,50.0,690.0,650.0,690.0,650.0,10.0,1.0,0.0,1.0);
    glPopMatrix();

    // ================== theird ===============
    glPushMatrix();
    line(50.0,50.0,650.0,50.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(50.0,650.0,650.0,650.0,1.0,0.0,1.0);
    glPopMatrix();

// ================ theird end ===============
// ================ side ======================
    glPushMatrix();
    line(100.0,10.0,100.0,690.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(600.0,10.0,600.0,690.0,1.0,0.0,1.0);
    glPopMatrix();

 // ================= side end ==================

// ================ middle ====================

    glPushMatrix();
    line(350.0,650.0,350.0,50.0,1.0,0.0,1.0);
    glPopMatrix();
    glPushMatrix();
    line(50.0,270.0,650.0,270.0,1.0,0.0,1.0);
    glPopMatrix();
    glPushMatrix();
    line(50.0,460.0,650.0,460.0,1.0,0.0,1.0);
    glPopMatrix();
// =================== middle end ==============

//============================= main task end =================================

//================================================================================
//    glPushMatrix();
 //   rectangle(140.0,200.0,140.0,400.0,180.0,400.0,180.0,150.0,1.0,0.0,1.0);
//    glPopMatrix();
//        glPushMatrix();
//    rectangle(420.0,140.0,420.0,400.0,460.0,400.0,460.0,200.0,1.0,0.0,1.0);
//    glPopMatrix();
//    glPushMatrix();
//    traingle(100.0,500.0,200.0,700.0,300.0,500.0,1.0,0.0,1.0);
//    glPopMatrix();
//


// glPushMatrix();
 //  traingle(295.0,425.0,305.0,425.0,300.0,430.0,1.0,0.0,1.0);
 //  glPopMatrix();


//
//    glPushMatrix();
//    rectangle(100.0,200.0,100.0,400.0,250.0,400.0,250.0,200.0,1.0,0.0,1.0);
//    glPopMatrix();
//============================ man symbol ================================
    glPushMatrix();
    glTranslatef(480,615,0);
    circle(10.0,10.0);
    glPopMatrix();

     glPushMatrix();
    line(480.0,615.0,480.0,550.0,1.0,0.0,1.0);
    glPopMatrix();

     glPushMatrix();
    line(480.0,605.0,510.0,580.0,1.0,0.0,1.0);
    glPopMatrix();
     glPushMatrix();
    line(480.0,605.0,450.0,580.0,1.0,0.0,1.0);
    glPopMatrix();

     glPushMatrix();
    line(480.0,550.0,455.0,525.0,1.0,0.0,1.0);
    glPopMatrix();
    glPushMatrix();
    line(480.0,550.0,505.0,525.0,1.0,0.0,1.0);
    glPopMatrix();


        glPushMatrix();
    glTranslatef(215,615,0);
    circle(10.0,10.0);
    glPopMatrix();


    glPushMatrix();
    line(215.0,615.0,215.0,550.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(215.0,605.0,245.0,575.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(215.0,605.0,185.0,575.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(215.0,550.0,240.0,520.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(215.0,550.0,190.0,520.0,1.0,0.0,1.0);
    glPopMatrix();




            glPushMatrix();
    glTranslatef(215,240.0,0);
    circle(10.0,10.0);
    glPopMatrix();

    glPushMatrix();
    line(215.0,230.0,215.0,180.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(215.0,230.0,245.0,195.0,1.0,0.0,1.0);
    glPopMatrix();

     glPushMatrix();
    line(215.0,230.0,185.0,195.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(215.0,180.0,245.0,150.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(215.0,180.0,185.0,150.0,1.0,0.0,1.0);
    glPopMatrix();





    glPushMatrix();
    glTranslatef(480.0,240.0,0);
    circle(10.0,10.0);
    glPopMatrix();

    glPushMatrix();
    line(480.0,230.0,480.0,180.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(480.0,230.0,510.0,200.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(480.0,230.0,450.0,200.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(480.0,180.0,510.0,150.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(480.0,180.0,450.0,150.0,1.0,0.0,1.0);
    glPopMatrix();
// ========================== man symbol end ==================

 // ==================== bar ========================
    glPushMatrix();
    line(70.0,320.0,25.0,450.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(70.0,320.0,0);
    circle(4.0,10.0);
    glPopMatrix();

    glPushMatrix();
    line(630.0,320.0,675.0,450.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(630.0,320.0,0);
    circle(4.0,10.0);
    glPopMatrix();
  // =============== bar end =========================
// =============== ball ============================

      glPushMatrix();
    glTranslatef(400.0,500.0,0);
    circle(4.0,10.0);
    glPopMatrix();

    glPushMatrix();
    line(400.0,500.0,410.0,490.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(400.0,500.0,415.0,496.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(400.0,500.0,405.0,485.0,1.0,0.0,1.0);
    glPopMatrix();

// ==================== ball end =====================


  // ============ net =========================

    glPushMatrix();
    line(25.0,450.0,675.0,450.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(65.0,335.0,635.0,335.0,1.0,0.0,1.0);
    glPopMatrix();
// ======= weidth
    glPushMatrix();
    line(50.0,380.0,650.0,380.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(53.0,360.0,650.0,360.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(38.0,415.0,665.0,415.0,1.0,0.0,1.0);
    glPopMatrix();
//========== height
    glPushMatrix();
    line(75.0,450.0,75.0,335.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(115.0,450.0,115.0,335.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(165.0,450.0,165.0,335.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(215.0,450.0,215.0,335.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(265.0,450.0,265.0,335.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(315.0,450.0,315.0,335.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(365.0,450.0,365.0,335.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(415.0,450.0,415.0,335.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(465.0,450.0,465.0,335.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(515.0,450.0,515.0,335.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(565.0,450.0,565.0,335.0,1.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    line(615.0,450.0,615.0,335.0,1.0,0.0,1.0);
    glPopMatrix();

// ==================== net end ===============


// ================= racket ========================

           glPushMatrix();
    glTranslatef(540.0,620.0,0);
    circle(7.0,10.0);
    glPopMatrix();
   glPushMatrix();
    line(510.0,580.0,540.0,620.0,1.0,0.0,1.0);
    glPopMatrix();

          glPushMatrix();
    glTranslatef(275.0,615.0,0);
    circle(7.0,10.0);
    glPopMatrix();
    glPushMatrix();
    line(245.0,575.0,275.0,615.0,1.0,0.0,1.0);
    glPopMatrix();

          glPushMatrix();
    glTranslatef(275.0,235.0,0);
    circle(7.0,10.0);
    glPopMatrix();
    glPushMatrix();
    line(245.0,195.0,275.0,235.0,1.0,0.0,1.0);
    glPopMatrix();

          glPushMatrix();
    glTranslatef(540.0,240.0,0);
    circle(7.0,10.0);
    glPopMatrix();
    glPushMatrix();
    line(510.0,200.0,540.0,240.0,1.0,0.0,1.0);
    glPopMatrix();




// ============================= man symbol end ==========================
//    glPushMatrix();
//    glTranslatef(350,300,0);
//    circle(50.0,50.0,5.0,100.0);
//    glPopMatrix();
//
//    glPushMatrix();
//    glTranslatef(200,300,0);
//    circle1(50.0,50.0,35.0,10.0);
//    glPopMatrix();
//    glPushMatrix();
//   // glTranslatef(400,100,0);
//    line(350.0,100.0,350.0,500.0,1.0,0.0,0.0);
//    glPopMatrix();

    glFlush();
    glutSwapBuffers();
}



int main (int argc, char **argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB| GLUT_DEPTH);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(windowWidth,windowHeight);
    glutCreateWindow("Racket[ Md. Sowad Karim - 20181053010 ]");

    glutDisplayFunc(display);

    glShadeModel( GL_SMOOTH );
    glEnable( GL_DEPTH_TEST );
    glutMainLoop();
    return 0;
}
