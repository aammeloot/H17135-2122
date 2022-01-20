#include <iostream>

int main()
{
	
	std::string password;
	std::cin >> password;

	while (password != "pass123")
	{
		std::cout << "Try again";
		std::cin >> password;
	}
	std::cout << "Hello" << std::endl;

	do
	{
		std::cin >> password;
	}
	while (password != "pass123");


	for (int i = 0; i < 10; i++)
	{
		std::cout << "number " << i << std::endl;
	}


	std::cout << "Hello" << std::endl;



	return 0;
}