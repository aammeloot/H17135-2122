#pragma once
#include <iostream>

using namespace std;

class Person
{
	string _name;
	int _age;
public:

	// Constructor
	// Objects can be big and parameters are copies originals
	// To avoid making a copy create a "constant reference"
	Person(const string &n, int a);
	string name();
	int age();
};

