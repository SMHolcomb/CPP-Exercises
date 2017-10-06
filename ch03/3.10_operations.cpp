#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>



int main() { 
   
	std::string op;
	std::string symbolop;

	double num1, num2;
	double result;

	std::cout << "Enter an operator and two numbers separated by spaces" << std::endl;
	std::cout << "and I'll do the math for you." << std::endl;
	std::cout << "Valid operators include: + , - , * , / , 'plus', 'minus' , 'mul', and 'div'." << std::endl;
	std::cout << "example: + 1 3.12 : ";
	std::cin >> op >> num1 >> num2;
	std::cout << std::endl;

	std::transform(op.begin(), op.end(), op.begin(), ::tolower);

	if (op == "+" || op == "plus") {
		result = num1 + num2;
		symbolop = "+";
	}

	else if (op == "-" || op == "minus") {
		result = num1 - num2;
		symbolop = "-";
	}

	else if (op == "*" || op == "mul") {
		result = num1 * num2;
		symbolop = "*";
	}

	else if (op == "/" || op == "div") {
		result = num1 / num2;
		symbolop = "/";
	}

	else {
		std::cout << "I'm sorry I don't recognize that. Please try again." << std::endl;
		return 1;
	}

	std::cout << "The result of " << num1 << " " << symbolop << " " << num2 << " is " << result << std::endl;
	return 0;
}