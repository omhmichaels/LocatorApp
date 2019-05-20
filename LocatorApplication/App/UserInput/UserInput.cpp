/*
 *
 * # Title: UserInput Testing And Dev
 * # Description: Main File to test UserInput Components
 * # Author: Michael Martin and ______________
 * # Class: COMPSCI 1

  * # Tests: 2/2
  > Compilation: PASSED
  > Logic: PASSED
 */



#include "UserInput.h"

using namespace std;

int main() {

	string prompt = "\nUSER STRING INPUT: %s\n USER INT INPUT: %i\n";

	// Test Input functionality
	userInput.setIntInput();
	userInput.setStringInput();

	return(0);
}