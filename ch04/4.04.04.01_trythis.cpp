#include<iostream>

int main() {

	int c = 'a';
	std::cout << c << std::endl;

	while (c <= 'z') {
		std::cout << char(c) << '\t' << c << std::endl;
		++c;

	}
}
