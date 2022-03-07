#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Primitive types
	int age = 40;
	double temperature = 10.5;
	char initial = 'a';
	bool happy = true;

	// Classes / objects
	string name = "Aurelien"; // std::string
	vector<string> students; // List

	// Pointers -> instead of containing a value
	// They contain a memory address to either
	// A variable or an object
	int* level = new int(3);	// This allocates the
								// Value in a different
								// Memory zone
								// Called the "heap"

	string* courseName = new string("HND Cybersecurity");

	// You need to clean memory after using pointers
	delete level;
	delete courseName;

	// You access the memory address of any variable using &
	cout << "The address of name is " << &name << endl;

	return 0;
}
