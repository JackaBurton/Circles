//1
#include "Circle.h"
#include <iostream>
#include <cstdlib>
#include "Framework.h"

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

void Circle::Draw()
{
	ChangeColour(GetR(), GetG(), GetB());
	DrawCircle(X_axis, Y_axis, Radius);
}

void Circle::Update()
{
	//Moves The Circle
	Y_axis += Y_Dir;
	X_axis += X_Dir;

	if (Y_axis + Radius * 2 >= gScreenHeight)
	{
		//Changes the variable to be negative and move backwards
		Y_Dir = -Y_Dir;
		

	}
	else if (Y_axis < 0)
	{
		Y_Dir = -Y_Dir;
		// Modifying the circle while iterating

	}

	if (X_axis + Radius * 2 >= gScreenWidth)
	{
		//Changes the variable to be negative and move backwards
		X_Dir = -X_Dir;
		
	}
	else if (X_axis < 0)
	{
		X_Dir = -X_Dir;
	}

	// randomly changes direction?
	if (rand() % 100 == 0)
	{
		X_Dir = -X_Dir;
	}
	if (rand() % 100 == 0)
	{
		Y_Dir = -Y_Dir;
	}
}
