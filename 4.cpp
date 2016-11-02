#include <iostream>
using namespace std;

// declares MyPoint class
class MyPoint{
	private:
		int x;
		int y;
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
		// set point x and y
		void setX(int x)
		{
			this->x = x;
		}
		void setY(int y)
		{
			this->y = y;
		}
		// set XY point
		void setXY(int x, int y)
		{
			this->x = x;
			this->y = y;
		}
		// get x, y and xy point
		int getX() const
		{
			return x;
		}
		int getY() const
		{
			return y;
		}
		int* getXY() const
		{
			return new int[2]; 
		}
		// toString
		string toString()
		{
			string display;
			display = "(" + x + ", " + y + ")";
			
			return display;
		}
		// distance
		double distance(int x, int y)
		{
			this->x -= x;
			this->y -= y;
		}
		// distance 2
		double distance(MyPoint another)
		{
			
		}
		// distance 3
		double distance()
		{
			x -= 0;
			y -= 0;
		}
};

// main function
int main(){
	
	// creates MyPoint objects
	MyPoint point1(5, 4); // x = 5 and y = 4
	MyPoint point2(10, 5);
	MyPoint point3(2, 8);
	
	// get the 3 distance from the 3 objects
	point1.distance(2, 2);
	point3.distance();
	
	// display the distance
	cout << point1.toString() << endl;
	cout << point3.toString() << endl;
	
	
}
