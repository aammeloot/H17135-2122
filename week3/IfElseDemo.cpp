#include <iostream>

using namespace std;

int main()
{
	// Vars
	int time;
	cout << "What time is it? 0-23" << endl;
	cin >> time;

	// If/Else if / Else
	if (time >= 6 && time < 12)
	{
		cout << "Good morning" << endl;
	}
	else if (time >= 12 && time < 19)
	{
		cout << "Good afternoon" << endl;
	}
	else
	{
		cout << "Good evening / good night" << endl;
	}

	return 0;
}