#include <iostream>
#include <string>

int main(void) {
	std::string message = "HI THIS IS BRAIN";
	std::string* stringPTR = &message;
	std::string& stringREF = message;

	std::cout << "adresses:" << std::endl;
	std::cout << "message=\"" << &message << "\",stringPTR=\"" << stringPTR << "\",stringREF=\"" << &stringREF << "\"" << std::endl;
	std::cout << "values:" << std::endl;
	std::cout << "message=\"" << message << "\",stringPTR=\"" << *stringPTR << "\",stringREF=\"" << stringREF << "\"" << std::endl;
}
