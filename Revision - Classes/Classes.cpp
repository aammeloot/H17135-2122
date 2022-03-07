#include <iostream>
#include <vector>

using namespace std;

// Class is a blueprint for objects
// Objects are complex variables that contain
// - Their own data (private)
// - Their own functions (called methods)
// They are self-contained and ideally can be
// Exported and used in different projects

class Rectangle
{
	// Private member variables of the rectangle
	int _height, _width;
	// Public functions 
public:
	// Access functions
	int height() { return _height; }
	int width() { return _width;  }

	// To create the rectangle, you need a constructor
	Rectangle(int h, int w)
	{
		_height = h;
		_width = w;
	}

	// You can create more than one constructor
	Rectangle()
	{
		_height = 10;
		_width = 10;
	}

	// A method returning the area of the rectangle
	int area() { return _height * _width; }
};












int main()
{
	// Creating a single rectangle
	Rectangle r1(10, 20);
	// Make use of the rectangle's methods
	cout << "The rectangle has height: " << r1.height() << " metres" << endl;
	cout << "The area is: " << r1.area() << " sq metres" << endl;

	Rectangle r2;
	cout << r2.area() << endl;

	// If I want to create a lot of rectangles, use pointers;

	vector<Rectangle*>vList;

	for (int counter = 0; counter < 5; counter++)
	{
		Rectangle* r = new Rectangle((counter + 1) * 10, (counter + 1) * 20);
		vList.push_back(r);
	}

	// Go through the list of rectangles, display area, delete them
	for (int counter = 0; counter < vList.size(); counter++)
	{
		cout << "area: " << vList[counter]->area() << endl;
		delete vList[counter];
	}


	return 0;
}
