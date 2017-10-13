#include<iostream>

int main() {

	const double YEN_CONV = .0089;   // as of 10/11/17, 1 yen = .089 dollars
	const double KRONER_CONV = .16;   // as of 10/11/17, 1 yen = .089 dollars
	const double POUND_CONV = 1.32;   // as of 10/11/17, 1 yen = .089 dollars


	char currency_type;
	std::string currency_desc;
	double currency_value;
	double converted_value;	

	std::cout << "Please enter a monetary value followed by the currency type ('k' for kroner, 'p' for pounds, or 'y' for yen" << std::endl;
	std::cin >> currency_value >> currency_type;

	// handle upper and lowercase currency types  - no validation at this time for currency value
	//std::transform(currency_type.begin(), currency_type.end(), currency_type.begin(), ::tolower);
	char c = (tolower(currency_type));    


	switch(c) {

		case 'y':
			currency_desc = "Japanese Yen";
			converted_value = currency_value * YEN_CONV;
			break;

		case 'k':
			currency_desc = "Danish Krone";
			converted_value = currency_value * KRONER_CONV;
			break;

		case 'p':
			currency_desc = "British Pounds";
			converted_value = currency_value * POUND_CONV;
			break;

		default:
			std::cout << "I'm sorry, I don't recognize currency type " << currency_type << std::endl;
			std::cout << "Please run and try again." << std::endl;
			return 1;
	}

	std::cout << std::endl << currency_value << " " << currency_desc << " is $" << converted_value << " U.S. Dollars.  (source: Google , 10/11/17)" << std::endl << std::endl;
	return 0;
}
