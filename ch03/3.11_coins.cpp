#include<iostream>


std::string multi(int count) {
	std::string multi;
	if ( count > 1 )
		multi = "s";
	return multi;
}

int main() {

	int pennies, nickels, dimes, quarters, halfdollars = 0;
	double total = 0;
	std::string cent = " pennies";

	std::cout << "How many pennies do you have? ";
	std::cin >> pennies;
	//std::cout << std::endl;
	std::cout << "How many nickels do you have? ";
	std::cin >> nickels;

	std::cout << "How many dimes do you have? ";
	std::cin >> dimes;

	std::cout << "How many quarters do you have? ";
	std::cin >> quarters;

	std::cout << "How many half-dollars do you have? ";
	std::cin >> halfdollars;

	if (pennies == 1)
		cent = " penny";

	std::cout << "You have " << pennies << cent << std::endl;
	std::cout << "You have " << nickels << " nickel" << multi(nickels) <<"." << std::endl;
	std::cout << "You have " << dimes << " dime" << multi(dimes) <<"." << std::endl;
	std::cout << "You have " << quarters << " quarter" << multi(quarters) <<"." << std::endl;
	std::cout << "You have " << halfdollars << " half-dollar" << multi(halfdollars) <<"." << std::endl;

	total = (.5 * halfdollars) + (.25 * quarters) + (.1 * dimes) + (.05 * nickels) + (.01 * pennies);

	if (total < 1) {

		std::cout << "The value of all your coins is " << total << " cents." << std::endl;
	}

	else {
		std::cout << "The value of all your coins is $" << total << "." << std::endl;
	}
	
	return 0;
}