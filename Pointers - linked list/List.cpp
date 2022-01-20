#include <iostream>

using namespace std;

struct node {
	int value;
	struct node* next;
};

node* addElement(int newValue, node* start)
{
	// If the list is empty, create the first node
	if (start == NULL)
	{
		// Allocate the node
		start = new node;
		// Set the value
		start->value = newValue;
		// Set next to null
		start->next = NULL;

		return start;
	}
	else
	{
		// Create a pointer current element
		node* currentNode = start;
		// go to the last element
		// While are not at the last element
		while (currentNode->next != NULL)
		{
			currentNode = currentNode->next; // Move list forward
		}

		// Create a new node
		node* newNode = new node;
		newNode->value = newValue;
		newNode->next = NULL;
		// Set new node as last element of list
		currentNode->next = newNode;

		return start;
	}
}

void displayList(node* start)
{
	node* currentNode = start;
	while (currentNode != NULL)
	{
		cout << currentNode->value << endl;
		currentNode = currentNode->next;
	}
}

void deleteWholeList(node* start)
{
	node *currentNode, *nextNode;
	currentNode = start;
	while (currentNode != NULL)
	{
		// Before anything, save the reference to the next element
		nextNode = currentNode->next;
		// And then only after that you can delete the current node
		delete currentNode;
		// Set current node to next node
		currentNode = nextNode;
	}
}

// Search and delete value if exists
node* deleteNode(int value, node* start)
{
	// For this one I'll need a reference to
	// The current, next and previous ones

	node* previousNode = NULL;
	node* currentNode = start;
	node* nextNode = NULL;

	// Go through all the elements
	while (currentNode != NULL)
	{
		// First update nextNode
		if (currentNode != NULL)
		{
			nextNode = currentNode->next;
		}

		// If the value matches
		if (currentNode->value == value)
		{
			// Case 1 - This is the first node
			if (previousNode == NULL)
			{
				// Save next node, delete current, and return next as start point
				nextNode = currentNode->next;
				delete currentNode;
				return nextNode;
			} 
			// Case 2 somewhere in the middle 
			else if (previousNode != NULL && nextNode != NULL)
			{
				delete currentNode;
				// Recreating a link
				previousNode->next = nextNode;
				return start;
			}
			else // Last element
			{
				delete currentNode;
				previousNode->next = NULL;
				return start;
			}
		}

		// For this to work, i need to update
		// Currentnode, previousnode, next node

		previousNode = currentNode;
		currentNode = nextNode;
	}
}

int main()
{
	node* list = NULL;

	// Loop to build the list

	int newValue;
	do
	{
		cout << "Please enter a positive integer, or a negative value to end" << endl;
		cin >> newValue;
		list = addElement(newValue, list); // Add element to list
	} while (newValue >= 0);

	displayList(list);

	cout << "Enter a value to delete" << endl;
	cin >> newValue;

	list = deleteNode(newValue, list);
	cout << "New list" << endl;
	displayList(list);

	deleteWholeList(list);

}