#include <iostream>
using namespace std;

int main()
{
	// variable declaration
	string userInput;
	
	// asking the user for input to initialize the variable
	cout << "Please type something here: ";
	getline (cin, userInput);
	
	// printing the user input on the screen
	cout << "You have entered: " << userInput;
	return 0;
}
