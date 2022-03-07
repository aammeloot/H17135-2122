/*
Question 5
Write a program that defines a class called MyClass,
which has two private data members of type int and double.

Outside the class, define a user-provided constructor
accepting two parameters.

The constructor initializes both data members with
arguments using the initializer.

Outside the class, define a function called printdata()
which prints the values of both data members.*/

#include <iostream>

using namespace std;

class MyClass
{
	int numberOfDoors;
	double displacement;
public:
	MyClass(int, double);
	void printData();
};

MyClass::MyClass(int v1, double v2)
{
	numberOfDoors = v1;
	displacement = v2;
}

void MyClass::printData()
{
	cout << "Number of doors " << numberOfDoors << endl;
	cout << "Engine size " << displacement << endl;
}

int main()
{
	// Using "normal" variables
	
	//MyClass c1(3, 2.5);
	//MyClass c2(5, 1.4);

	//c1.printData();
	//c2.printData();

	// using modern pointers

	auto c1 = make_unique<MyClass>(3, 2.5);
	auto c2 = make_unique<MyClass>(5, 1.4);

	c1->printData();
	c2->printData();


	return 0;
}