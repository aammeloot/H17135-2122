#include<iostream>

using namespace std;

// Define a new type
struct node
{
	int value; // Data
	struct node* next; // Pointer to another node;
};

int main()
{
	// Create a node
	node *i, *j, *k;

	i = new node;
	j = new node;
	k = new node;

	i->value = 5;
	i->next = k;

	j->value = 8;
	j->next = i;

	k->value = 10;
	k->next = j;

	// Traverse the list
	// Creating a pointer to a node and setting it with
	// The address of the first node
	node* current_elt = i;
	do // Loop
	{
		// Displaying the content of the current node (using the -> syntax)
		cout << "Address: " << current_elt << " Value: " << current_elt->value << endl;
		// Take the address of the next node and set it as "current"
		current_elt = current_elt->next;
	}
	// When we reached the last element, just stop
	while (current_elt != NULL);
	
	delete i;
	delete j; 
	delete k;

	return 0;
}