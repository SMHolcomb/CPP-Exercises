#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>



int main() { 
   
   //input as double so we can check and throw error later

    double input;
    int number;
    std::string result;

    std::cout << "Enter an integer and I'll tell you whether it's odd or even: ";
    std::cin >> input;
    std::cout << std::endl;
    
    // check to be sure input is a double
    if(std::cin.fail()) {

    	std::cout << "Please try again and enter a valid integer" << std::endl;
    	return 1;
    }

    //check to be sure input wasn't a double 
    if (input != ceil(input)) {
    	std::cout << "Please try again and enter a valid integer" << std::endl;
    	return 1;
    }

    //convert to int so we can use mod
    number = int(input);
    if (number%2==0) {
    	result = "even";
    }
    else {
    	result = "odd";
    }

    std::cout << "The value " << input << " is an " << result << " input." << std::endl; 
    return 0;
    
}