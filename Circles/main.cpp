/*
	Start shape drawing file
*/

#include <iostream>
#include "Framework.h"
#include "Circle.h"
#include <vector>

// Variables with global scope - do not rename them, feel free to change values though

// Screen dimensions
int gScreenWidth{ 800 };
int gScreenHeight{ 600 };

// Delay to slow things down
int gTimeDelayMS{ 10 };

using namespace std;



int main()
{
	
	std::cout << "Hello circles" << endl;

	vector<Circle> circles;

	bool new_circle = false;

	int Max_Circles = 100;
	int Min_Circles = 0;
	srand(time(0));

	circles.resize(1);


	while (UpdateFramework())
	{
		std::cout << circles.size() << endl;
		for (Circle& circle: circles)
		{
			//Creates a circle on the screen using the set values

			ChangeColour(circle.GetR(), circle.GetG(), circle.GetB());
			DrawCircle(circle.X_axis, circle.Y_axis, circle.Radius);

			if (IsButtonPressed(EButton::eLeft))
			{
				//Locks the circles at the mouse position
				std::cout << "You Got me (;";
				int MouseX;
				int MouseY;
				GetMousePosition(MouseX, MouseY);
				circle.X_axis = MouseX;
				circle.Y_axis = MouseY;
			}

			//Sets initial direction?
			circle.Y_axis += circle.Y_Dir;
			circle.X_axis += circle.X_Dir;

			if (circle.Y_axis + circle.Radius * 2 >= gScreenHeight)
			{
				//Changes the variable to be negative and move backwards
				circle.Y_Dir = -circle.Y_Dir;
				new_circle = true;

			}
			else if (circle.Y_axis < 0)
			{
				circle.Y_Dir = -circle.Y_Dir;
				// Modifying the circle while iterating

			}

			if (circle.X_axis + circle.Radius * 2 >= gScreenWidth)
			{
				//Changes the variable to be negative and move backwards
				circle.X_Dir = -circle.X_Dir;
				new_circle = true;
			}
			else if (circle.X_axis < 0)
			{
				circle.X_Dir = -circle.X_Dir;
			}

			// randomly changes direction?
			if (rand() % 100 == 0)
			{
				circle.X_Dir = -circle.X_Dir;
			}
			if (rand() % 100 == 0)
			{
				circle.Y_Dir = -circle.Y_Dir;
			}
		}


		if (false && Max_Circles != circles.size()) 
		{
			
			Circle newCircle;
			newCircle.Radius = rand() % 20;
			newCircle.X_axis = rand() % gScreenWidth - newCircle.Radius * 2 - newCircle.Radius * 2;
			newCircle.Y_axis = rand() % gScreenHeight - newCircle.Radius * 2 - newCircle.Radius * 2;
			newCircle.Y_Dir = rand() % 20;

			if (rand() % 2 == 0)
			{
				newCircle.Y_Dir = -newCircle.Y_Dir;
			}

			newCircle.X_Dir = rand() % 20;
			if (rand() % 2 == 0)
			{
				newCircle.X_Dir = -newCircle.X_Dir;
			}
			newCircle.GetR();
			newCircle.GetG();
			newCircle.GetB();
			new_circle = false;

			circles.push_back(newCircle);
		}
		else if (IsButtonPressed(EButton::eRight) && circles.size() < Max_Circles)
		{
			Circle newCircle;
			newCircle.Radius = rand() % 20;
			newCircle.X_axis = rand() % gScreenWidth - newCircle.Radius * 2 - newCircle.Radius * 2;
			newCircle.Y_axis = rand() % gScreenHeight - newCircle.Radius * 2 - newCircle.Radius * 2;
			newCircle.Y_Dir = rand() % 20;

			if (rand() % 2 == 0)
			{
				newCircle.Y_Dir = -newCircle.Y_Dir;
			}

			newCircle.X_Dir = rand() % 20;
			if (rand() % 2 == 0)
			{
				newCircle.X_Dir = -newCircle.X_Dir;
			}
			newCircle.GetR();
			newCircle.GetG();
			newCircle.GetB();
			new_circle = false;

			circles.push_back(newCircle);
		}
		

		if (IsButtonPressed(EButton::eLeft))
		{
			

			

			
		}


	}

	std::cout << "Bye bye" << endl;




	return 0;
}






//circle[0].X_axis;
//circle[0].Y_axis;
//circle[0].Radius;

//circle[0].Y_Dir;
//circle[i].X_Dir;

//colour[0].R;
//colour[0].G;
//colour[i].B;
//colour[i].A;
