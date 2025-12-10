#pragma once


class Circle
{

public:
	int X_axis;
	int Y_axis;
	int Radius;
	int Y_Dir;
	int X_Dir;
	unsigned char GetR() const { return R; }
	unsigned char GetG() const { return G; }
	unsigned char GetB() const { return B; }
	unsigned char GetA() const { return A; }
	Circle();
private:
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned char A;
};