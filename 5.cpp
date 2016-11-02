#include <iostream>
using namespace std;

// declares MyPoint class
class MyPoint{
	private:
		int x;
	public:
		// default constructor
		MyPoint()
		{
			x = 0;
			y = 0;
		}
		// constructor 2
		MyPoint(int x, int y)
		{
			this->x = x;
			this->y = y;
		}
		// set the value of x and y
		void setX(int x)
		{
			this->x = x;
		}
		void setY(int y)
		{
			this->y = y;
		}
		// get the value of x and y
		int getX() const
		{
			return x;
		}
		int getY() const
		{
			return y;
		}
};

// declares MyCircle class
class MyCircle{
	private:
		MyPoint center(0, 0);
		int radius = 1;
	public:
		// default constructor
		MyCircle()
		{}
		int y;
		// constructor 2
		MyCircle(int x, int y, int radius)
		{
			center.setX(x);
			center.setY(y);
			this->radius = radius;
		}
		// constructor 3
		MyCircle(MyPoint center, int radius)
		{
			this->center = center;
			this->radius = radius;
		}
		
			
		
};
