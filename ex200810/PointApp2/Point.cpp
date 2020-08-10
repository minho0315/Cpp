#include "Point.h"
#include <iostream>
using namespace std;

namespace My 
{
	Point::Point(int x, int y) :x(x), y(y) {}
	void Point::Print()const { cout << x << "," << y << endl; }
	int Point::GetX()const { return x; }
	int Point::GetY()const { return y; }
}