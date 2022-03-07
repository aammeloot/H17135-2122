/*
Question 4
Write a program that defines
a class called MyClass with one
private data member of type int
called x and two member functions.

The first member function called
setx(int myvalue) will set the value
of x to its parameter myvalue.

The second member function is called getx(),
is of type int and returns a value of x.

Make an instance of the class and use the object
to access both member functions.*/

#include <iostream>

using namespace std;

// Class definition
// x is private
class MyClass
{
	int x;
public:
	void setX(int value);
	int getX();
};


// This function is an access to
// Write a value in x
void MyClass::setX(int value)
{
	x = value;
}

// This functions returns a copy
// of x 
int MyClass::getX()
{
	return x;
}

int main()
{
	//  Create an object "Myclass"
	MyClass c;
	// Set x to 25
	c.setX(25);
	// Print value of x#
	cout << c.getX() << endl;

	return 0;
}