#include<iostream>

int square(int i) {

	int sqr = i;

	for(int c = 1; c < i; c++) {
		sqr += i;
	}
	return sqr;
}


int main() {

//implement square() without using the multiplication operator the run some version of the first program using that square()
// assumption is that first program is to loop through multiple numbers and print the square

//loop through from 1 to 100 and print the square
	for (int i = 1; i <= 100; i++) {

		int s = square(i);
		std::cout << i << '\t' << s << std::endl;
	}

	return 0;
}
