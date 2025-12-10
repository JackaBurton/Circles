#include "Circle.h"
#include <iostream>
#include <cstdlib>

extern int gScreenWidth;
extern int gScreenHeight;

Circle::Circle()
{
	Radius = 10 + rand() % 11;
	X_axis = rand() % gScreenWidth - Radius * 2 - Radius * 2;
	Y_axis = rand() % gScreenHeight - Radius * 2 - Radius * 2;
	Y_Dir = rand() % 20 - 1;
	if (rand() % 2 == 0)
	{
		Y_Dir = -Y_Dir;
	}
	X_Dir = rand() % 20 - 1;
	if (rand() % 2 == 0)
	{
		X_Dir = -X_Dir;
	}
	R = rand() % 255;
	G = rand() % 255;
	B = rand() % 255;
	A = 255;
}
