#include<iostream>

int main() {

	std::cout << "**** Using a while statement loop  ****" << std::endl << std::endl;
	int c = 'a';
	std::cout << c << std::endl;

	while (c <= 'z') {
		std::cout << char(c) << '\t' << c << std::endl;
		++c;
	}

	std::cout << std::endl << "****  Using a for-statement loop  ****" << std::endl<< std::endl;

	// using for loop
	for (int i = 'a'; i <='z'; i++) {
		std::cout << char(i) << '\t' << i << std::endl;
	}
}
