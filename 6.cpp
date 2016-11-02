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
		// toString
		string toString()
		{
			string display;
			display = "X: " + x + " Y: " + y;
			
			return display;
		}
};

// declares MyTriangle class
class MyTriangle{
	private:
		MyPoint v1;
		MyPoint v2;
		MyPoint v3;
	public:
		// constructor
		MyTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
		{
			v1.setX(x1);
			v1.setY(y1);
			v2.setX(x2);
			v2.setY(y2);
			v3.setX(x3);
			v3.setY(y3);
		}
		// constructor 2
		MyTriangle(MyPoint v1, MyPoint v2, MyPoint v3)
		{
			
		}
		// toString
		string toString()
		{
			string display;
			display = v1->toString() + ", " + v2->toString() + ", " + v3->toString();
		}
		// get perimeter
		double getPerimeter() const
		{
			return v1 + v2 + v3;
		}
		// get type
		string getType() const
		{
			
		}
};

// main function
int main(){
	
	
	
}
