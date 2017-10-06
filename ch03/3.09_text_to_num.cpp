#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>



int main() { 
   
	std::string input;
	int  numeric;

    std::cout << "Enter a 'spelled out' number between 0 and four (i.e. \"one\", \"three\" etc ) " << std::endl;
    std::cout << "and I'll provide the numeric format: ";
    std::cin >> input;

    // account for upper, lowercase spelling options from user
    std::transform(input.begin(), input.end(), input.begin(), :: tolower);

    std::cout << input << std::endl;

    if(input == "zero") {
    	numeric = 0;
    }
    
    else if(input == "one") {
    	numeric = 1;
    }
    
    else if(input == "two") {
    	numeric = 2;
    }
    
    else if(input == "three") {
    	numeric = 3;
    }
    
    else if(input == "four") {
    	numeric = 4;
    }
    
    else {
    	std::cout << " Not a number I know. Please try again." << std::endl;
    	return 1;
    }

    std::cout << "The corresponding digit is " << numeric << std::endl;
    return 0;
}