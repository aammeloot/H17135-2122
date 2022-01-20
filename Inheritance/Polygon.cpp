#include <iostream>

using namespace std;

// That's the base class
class Polygon {
protected:   // Means private except inherited
	int width, height;
public:
	void setValues(int a, int b)
	{
		width = a; height = b;
	}
};

// First derived class
class Rectangle : public Polygon
{
public:
	int area()
	{
		return width * height;
	}
};

// Second derived class
class Triangle : public Polygon
{
public:
	int area()
	{
		return width * height / 2;
	}
};

int main()
{
	Rectangle r;
	Triangle t;

	r.setValues(4, 5);  // This will call the method in Polygon
	t.setValues(4, 5); // Same here

	// These lines below will call the specific version of 
	// area for rectangle and triangle, respectively
	cout << r.area() << endl;
	cout << t.area() << endl;

	// Test code here
	return 0;
