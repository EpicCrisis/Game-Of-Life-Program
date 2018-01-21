#ifndef _TRIANGLE_DEMO_H
#define _TRIANGLE_DEMO_H

#include <cmath>
#include <vector>
#include <iostream>
#include "demo_base.h"
#include "lodepng.h"

class TriangleDemo : public DemoBase
{
private:	

public:

	void init()
	{

	}

	void deinit()
	{

	}

	void drawAxis(const Matrix& viewMatrix)
	{
		glLoadMatrixf((GLfloat*)viewMatrix.mVal);
		glBegin(GL_LINES);

		glColor3f(1.0f, 0.3f, 0.3f);
		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(1.0f, 0.0f, 0.0f);

		glColor3f(0.3f, 1.0f, 0.3f);
		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(0.0f, 1.0f, 0.0f);

		glColor3f(0.3f, 0.3f, 1.0f);
		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(0.0f, 0.0f, 1.0f);

		glEnd();
	}

	void draw(const Matrix& viewMatrix)
	{
		drawAxis(viewMatrix);

		glLoadMatrixf((GLfloat*)viewMatrix.mVal);

		//glColor4f(1.0f, 1.0f, 1.0f, 1.0f);

		// Show Wireframes //
		//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	}
};

#endif