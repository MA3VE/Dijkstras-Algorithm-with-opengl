#include<iostream>
#include<GL/glut.h>
#include<GL/gl.h>
#include<math.h>
#include "circle.h"


void init(void){
    glClearColor(0.0,0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,800.0,0.0,800.0);
    // glOrtho()

}


void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    circle(100,100,100);
    glFlush();
}


int main(int argc,char * argv[]){
    glutInit(&argc,argv); 
    glutInitWindowPosition(100,100);
    glutInitWindowSize(800,800);
    glutCreateWindow("mini_project");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
