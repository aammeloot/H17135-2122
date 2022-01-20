#include <iostream>

using namespace std;

int main()
{
	int time;
	std::cout << "What time is it ? " << std::endl;
	std::cin >> time;
	
	switch (time) {
	case 8:
		std::cout << "Breakfast time" << std::endl;
		break;
	case 12:
		std::cout << "Lunch time" << std::endl;
		break;
	case 19:
		std::cout << "Dinner time" << std::endl;
		break;
	default:
		std::cout << "Not time for food" << std::endl;
	}
	return 0;
}