#include "Person.h"

/* Person(const string &n, int);
	string name();
	int age();*/

Person::Person(const string& n, int a)
{
	_name = n;
	_age = a;
}

string Person::name()
{
	return _name;
}

int Person::age()
{
	return _age;
}