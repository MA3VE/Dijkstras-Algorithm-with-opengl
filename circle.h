#include<iostream>
#include<GL/glut.h>
using namespace std;


void points(int x1,int y1,int x2,int y2)
{
	// cout<<"i am inside points";
	glBegin(GL_POINTS);
		glVertex2i(x1+x2,y1+y2);
		glVertex2i(x1+y2,y1+x2);
		glVertex2i(x1-y2,y1+x2);
		glVertex2i(x1-x2,y1+y2);
		glVertex2i(x1-x2,y1-y2);
		glVertex2i(x1-y2,y1-x2);
		glVertex2i(x1+y2,y1-x2);
		glVertex2i(x1+x2,y1-y2);
	glEnd();
}
void circle(int x,int y,int radius)
{
	// cout<<"i am inside circle";
	int condition = 3 - 2*radius;
	int x0 = 0, y0 = radius;
	points(x,y,x0,y0);
	int xn=0, yn=0;	
	while(y0>=x0)
	{
		if(condition<=0)
		{		
			xn = x0 + 1;
			yn = y0;
			points(x,y,xn,yn);
			condition = condition + 4*xn + 6;
			x0 = xn;
			y0 = yn;
		}
		else if(condition>0)
		{
			xn = x0 + 1;
			yn = y0 - 1;
			points(x,y,xn,yn);
			condition = condition + 4*xn - 4*yn + 10;
			x0 = xn;
			y0 = yn;		
		}
	}
}


