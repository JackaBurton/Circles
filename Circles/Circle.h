#pragma once

//This is the class constructor, I think...
class Circle
{

public:
	Circle();
	void Draw();
	void Update();
	unsigned char GetR() const { return R; }
	unsigned char GetG() const { return G; }
	unsigned char GetB() const { return B; }
	unsigned char GetA() const { return A; }
	int X_axis;
	int Y_axis;
private:
	int Radius;
	int Y_Dir;
	int X_Dir;
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned char A;
};