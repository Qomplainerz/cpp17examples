#include <iostream>

int main()
{
	// variable declaration
	std::string userInput;
	
	// asking the user for input to initialize the variable
	std::cout << "Please type something here: ";
	getline (std::cin, userInput);
	
	// printing the user input on the screen
	std::cout << "You have entered: " << userInput;
	return 0;
}
