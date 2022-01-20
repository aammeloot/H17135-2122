#include <iostream>

using namespace std;

class Rectangle
{
	// Anything private is invisible
	// outside the class
	// Try to expose as little data as possible
	int width, height;

public:
	// Anything public is going to be part of your
	// object's interface
	// Try to expose mostly methods, even if their
	// Job is solely to change some data
	void setValues(int x, int y)
	{
		width = x;
		height = y;
	}

	int getArea()
	{
		int a = width * height;
		return a;
	}
};

int main()
{
	Rectangle r, t, u;
	
	// Rectagle is a Class (a type of data)
	// r, t, u are objects (i.e. indivdual instances of a Rectangle)
	r.setValues(2, 3);
	t.setValues(5, 4);
	u.setValues(6, 7);

	cout << "area: " << r.getArea() << endl;
	cout << "area: " << t.getArea() << endl;
	cout << "area: " << u.getArea() << endl;

	return 0;
}