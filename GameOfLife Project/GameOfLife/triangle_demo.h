#ifndef _TRIANGLE_DEMO_H
#define _TRIANGLE_DEMO_H

#include "demo_base.h"
#include <iostream>

enum cellState
{
	Dead, Alive
};

class TriangleDemo : public DemoBase
{
private:

public:

	float MoveX = 0.0f;
	float MoveY = 0.0f;
	float MoveZ = 0.0f;

	void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
	{
		std::cout << "key : " << key << std::endl;

		if (key == GLFW_KEY_A && action == GLFW_PRESS)
		{
			MoveX -= 1.0f;

			std::cout << "key : " << key << std::endl;
		}
		if (key == GLFW_KEY_D && action == GLFW_PRESS)
		{
			MoveX += 1.0f;
		}
		if (key == GLFW_KEY_W && action == GLFW_PRESS)
		{
			MoveY -= 1.0f;
		}
		if (key == GLFW_KEY_S && action == GLFW_PRESS)
		{
			MoveY += 1.0f;
		}
		if (key == GLFW_KEY_Z && action == GLFW_PRESS)
		{
			MoveZ -= 1.0f;
		}
		if (key == GLFW_KEY_X && action == GLFW_PRESS)
		{
			MoveZ += 1.0f;
		}
	}

	void DrawCell(float sizeX = 1.0f, float sizeY = 1.0f)
	{
		sizeX /= 2.0f;
		sizeY /= 2.0f;
		glBegin(GL_TRIANGLES);

		glColor3f(1.0f, 1.0f, 1.0f);

		// Positive Square
		glVertex3f(-sizeX + MoveX, sizeY + MoveY, 0.0f + MoveZ);
		glVertex3f(-sizeX + MoveX, -sizeY + MoveY, 0.0f + MoveZ);
		glVertex3f(sizeX + MoveX, -sizeY + MoveY, 0.0f + MoveZ);

		glVertex3f(-sizeX + MoveX, sizeY + MoveY, 0.0f + MoveZ);
		glVertex3f(sizeX + MoveX, sizeY + MoveY, 0.0f + MoveZ);
		glVertex3f(sizeX + MoveX, -sizeY + MoveY, 0.0f + MoveZ);

		// Finished Drawing The Triangles
		glEnd();
	}

	void InitGrid(int gridSizeX, int gridSizeY)
	{
		for (int i = 0; i < gridSizeX; i++)
		{
			for (int j = 0; j < gridSizeY; j++)
			{
				DrawCell(10.0f, 10.0f);
			}
		}
	}

	void CellUpdate()
	{

	}

	void ApplyCellUpdate()
	{

	}

	void init()
	{
	
	}

	void deinit()
	{

	}

	void draw()
	{
		//test drawing
		/*glBegin(GL_TRIANGLES);
			glColor3f(1.0f, 0.0f, 0.0f); glVertex3f(0 + MoveX, 0 + MoveY, 0 + MoveZ);
			glColor3f(0.0f, 1.0f, 0.0f); glVertex3f(0 + MoveX, 500 + MoveY, 0 + MoveZ);
			glColor3f(0.0f, 0.0f, 1.0f); glVertex3f(500 + MoveX, 500 + MoveY, 0 + MoveZ);
		glEnd();*/

		/*for (int i = 0; i < 50; i++)
		{
			for (int j = 0; j < 50; j++)
			{
				DrawCell(100.0f, 100.0f, 1);
			}
		}*/

		InitGrid(50, 50);
	}

	void onMouseButton(int button, int action)
	{
		std::cout << "mouse button : " << button << ", " << action << std::endl;
	}

	void onMouseMove(double x, double y)
	{
		std::cout << "mouse pos : " << x << ", " << y << std::endl;
	}

};

#endif
