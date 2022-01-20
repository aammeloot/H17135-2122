#include <iostream>

using namespace std;

/*int main()
{
	// This is a pointer
	int* aNumber;
	// This allocates the memory
	aNumber = new int;
	// This sets the value in the memory zone
	*aNumber = 5;

	cout << "The memory address (pointer) is " << aNumber << endl;
	cout << "The value stored is " << *aNumber << endl;

	aNumber += 10;
	cout << *aNumber << endl;

	delete aNumber;
	return 0;
}*/


int main()
{
	// This is allocating an array
	int* array = new int[10];

	for (int counter = 0; counter < 10; counter++)
	{
		array[counter] = counter + 1;
	}

	for (int counter = 0; counter < 10; counter++)
	{
		//cout << array[counter] << endl;
		cout << array+counter << ": " << * (array + counter) << endl;
	}

	delete[] array;
	return 0;
}