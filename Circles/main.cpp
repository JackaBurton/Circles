/*
	Start shape drawing file
	1
*/

#include <iostream>
#include "Framework.h"
#include "Circle.h"
#include <vector>

// Variables with global scope - do not rename them, feel free to change values though

// Screen dimensions
int gScreenWidth{ 800 };
int gScreenHeight{ 600 };
bool cooldown = false;

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

			circle.Draw();
			circle.Update();

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

			
			


		}


		if (false && Max_Circles != circles.size()) 
		{
			
			Circle newCircle;


			circles.push_back(newCircle);
		}

		if (IsButtonPressed(EButton::eRight) && circles.size() < Max_Circles && !cooldown)
		{
			
			Circle newCircle;
			circles.push_back(newCircle);
			cooldown = true;
		}
		else if (IsButtonPressed(EButton::eRight) == false)
		{
			cooldown = false;
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
