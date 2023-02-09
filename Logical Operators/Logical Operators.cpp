#include <iostream>

/*

the logical operators are used in boolean expressions to evaluate things

&& - check if two conditions are true
|| - check if one of the conditions are true
! - reverse the logical state of it's operand

ex:

*/


int main()
{
	int temperature;
	bool sunny = true;

	std::cout << "Enter the temperature: ";
	std::cin >> temperature;

	if (temperature > 0 && temperature < 30) {
		std::cout << "Temperature is noice\n";
	}
	else {
		std::cout << "Temperature is bad\n";
	}

	/*
	alternatively, we could write it as:

	if (temperature < 0 || temperature > 30) {
		std::cout << "Temperature is bad";
	}
	else {
		std::cout << "Temperature is noice";
	}
	
	*/

	if (!sunny) { //i'm checking if it's not sunny outside
		std::cout << "It's sunny outside";
	}
	else {
		std::cout << "It's cloudy outside";
	}

	return 0;
}