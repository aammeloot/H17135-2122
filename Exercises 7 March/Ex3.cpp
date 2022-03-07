/* Question 3
Write a program that defines a class called MyClass 
with one member function calledprintmessage().

Define the printmessage() member function outside 
the class and have it output the "Hello World." string.

Create an instance of that class and use the object
to call the member function. 
*/

#include <iostream>

using namespace std;

class MyClass
{
public:
	void printMessage();
};

void MyClass::printMessage()
{
	cout << "Hello, World!" << endl;
}


int main()
{
	MyClass c;
	c.printMessage();

	return 0;
}

