#include <iostream>
#include <memory>
#include <vector>
#include "Person.h"

using namespace std;

int main()
{
	vector<shared_ptr<Person>> pList;

	// Create a list of 5 people
	for (int counter = 0; counter < 5; counter++)
	{
		string name;
		int age;
		cout << "What is the person called?" << endl;
		cin >> name;
		cout << "How old are they?" << endl;
		cin >> age;

		auto p = make_shared<Person>(name, age);
		pList.push_back(p);
	}

	// Display details of every person
	for (int counter = 0; counter < pList.size(); counter++)
	{
		cout << "Person: " << counter << endl;
		cout << "Name: " << pList[counter]->name() << endl;
		cout << "Age: " << pList[counter]->age() << endl;
		// No need to "delete" here as we're using smart pointers
	}

	return 0;
}