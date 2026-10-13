#include <iostream>
#include <numbers>

enum class COLOR
{
	RED,
	YELLOW,
	BLUE,
	CYAN
};

enum class WeekDay
{
	Mon,
	Tue,
	Wed,
	Thu,
	Friday,
	Sat,
	Sun
};

enum class PlayerHealthStatus
{
	Healthy,
	Damaged,
	GravelyWounded,
	Dead
};

const int HEALTHY_THRESHOLD = 65;

int main()
{
	//game loop
	PlayerHealthStatus player1status = PlayerHealthStatus::Healthy;

	int health = 100;
	int damagetoapply = 25;

	health -= damagetoapply;

	// use local const variables instead of raw literals
	const int healthyThreshold = HEALTHY_THRESHOLD;
	const int damagedThreshold = 25;
	const int gravelyThreshold = 0;

	if (health >= healthyThreshold)
	{
		player1status = PlayerHealthStatus::Healthy;
	}
	else if (health >= damagedThreshold)
	{
		player1status = PlayerHealthStatus::Damaged;
	}
	else if (health > gravelyThreshold)
	{
		player1status = PlayerHealthStatus::GravelyWounded;
	}
	else
	{
		player1status = PlayerHealthStatus::Dead;
	}

	if (health == healthyThreshold)
	{
		//msg to 
	}

	if (health < healthyThreshold)
	{
		//not full!
	}


	switch (player1status)
	{
	case PlayerHealthStatus::Healthy:
		std::cout << "all good, play on\n";
		break;
	case PlayerHealthStatus::Damaged:
		std::cout << "find some health box\n";
		break;
	case PlayerHealthStatus::GravelyWounded:
		std::cout << "hide now!\n";
		//update widget, bla bla bla
		break;
	case PlayerHealthStatus::Dead:
		std::cout << "showing you're dead msg, restart game level\n";
		break;
	default:
		break;
	}


	//Password validation example
	const unsigned correct_password_from_db = 12345;
	int user_password = 0;

	const int max_tries = 3;
	int currenttries = 4;

	if (currenttries >= max_tries)
	{
		std::cout << "blocked!\n";
	}
	else
	{
		std::cout << "enter password:";
		std::cin >> user_password;

		if (user_password == correct_password_from_db)
		{
			std::cout << "welcome\n";
		}
		else
		{
			std::cout << "try again\n";
		}
	}


	/*mini calculator example
	 number 1
	symbols: +, -, *, /
	number 2
	out result*/

	double a;
	double b;
	char symbol = '+';

	std::cin >> a >> symbol >> b;

	double result = 0.0;

	switch (symbol)
	{
	case '*':
		result = a * b;
		break;
	case '/':
		if (b == 0)
		{
			std::cout << "Please do not divide by 0";
			result = 0;
		}
		else
		{
			result = a / static_cast<double>(b);
		}
		break;
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	default:
		std::cout << "Unsupported operation\n";
		break;
	}

	std::cout << " = " << result;

	//Ternanry operator example
	int a1 = 10;
	int b1 = 20;
	
	//if-else way
	int max = 0;
	if (a1 > b1)
	{
		max = a1;
	}
	else
	{
		max = b1;
	}

	//ternary way
	int max_ternary = (a1 > b1) ? a1 : b1;

}
