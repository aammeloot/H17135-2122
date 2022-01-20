#include <iostream>

using namespace std;

class Player // Main character in a football game
{
	string name;
	int attackLevel, defenceLevel; // Characteristics
	int x, y; // Position
	bool possession; // Possessing the ball or not
	int kickAngle;

public:
	// Constructor method: initialises the player starting stats
	Player(const string& _name, int _attack, int _defence, int _startx, int _starty)
	{
		// Set up the starting values for the player
		name = _name;
		attackLevel = _attack;
		defenceLevel = _defence;
		x = _startx;
		y = _starty;
		possession = false;
		kickAngle = 0;
	}

	// Methods to access
	// Name: read-only
	const string& getName() { return name;  }
	// Position: read-only
	int getX() { return x;  }
	int getY() { return y; }
	// Possession
	bool getPossession() { return possession;  }
	void setPossession(bool _pos) { possession = _pos; }

	// Methods
	void kick()
	{
		if (possession == true)
		{
			cout << name << " kicked the ball " << 2 * attackLevel << " metres towards " << kickAngle << endl;
			possession = false;
		}
		else
		{
			cout << name << " does not possess the ball" << endl;
		}
	}

	void moveUp() 
	{ 
		y += 10;
		kickAngle = 0;
	}
	void moveDown() 
	{ 
		y -= 10;
		kickAngle = 180;
	}

	void moveLeft() 
	{ 
		x -= 10;
		kickAngle = 270;
	}

	void moveRight() { 
		x += 10;
		kickAngle = 90;
	}

	void summary() {
		cout << "Name: " << name << endl;
		cout << "attack, defence" << attackLevel << " " << defenceLevel << endl;
		cout << "x: " << x << "y: " << y << endl;
		cout << "possession: " << (possession ? "yes" : "no") << endl;
	}
};




int main()
{
	Player n("Ngolo Kante", 5, 5, 76, 50);

	n.summary();

	n.moveUp();
	n.moveLeft();
	n.setPossession(true); // Catch the ball
	n.moveLeft();
	n.kick();

	n.summary();

	//Player m("Karim Benzema", 9, 3, 5, 50);

	return 0;
}