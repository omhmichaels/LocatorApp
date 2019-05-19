#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class UserInput {

private: 
	int i_Input;
	string s_Input;
	

public:
	
	// SET: String Input
	void setStringInput() {
		cin >> s_Input;
		cout << s_Input << " was input by user\n";
	}
	//SET: Int Input
	void setIntInput() {
		cin >> i_Input;
		cout << i_Input << " WAS INPUT\n";
	}


	int getIntInput() {
		return i_Input;
	}

	string getStringInput() {
		return s_Input;
	}


};

UserInput userInput;