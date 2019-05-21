/*
Title: CSV File Manipulator
Description: Enabales Reading of Csv file into a string of raw data or as a vector containing each row as a string
Responsibilities:
  1) read csv data into vector of strings for each row
  2) Split Csv data into vector of strings containing row elements that data as
  3) Pass data to DataPrepper
	- Csv Elements

Components:

Dependancies:
  1) FileManipulator
	- readFile

Dependants:
  1) DataPrepper
	- Element Data Vector

*/

#pragma once
#include "../FileManipulator/FileManipulator.h"

#include <sstream>
#include <iterator>

using namespace std;

// CSV FILE MANIPULATION
class CSV_Manipulator {

private:


	// Const For delimiters 
	const char COMMA = ',';
	const char SPACE = ' ';
	const char NEW_LINE = '\n';

	// String to hold individual row
	string row;

	// To be passed to FileManipulator for writing
	string formattedRow;

	// Vetor holding CSV Lines
	vector<string> csvRows;

	// Potentially obsolete
	// Vector holding CsvRow Elements
	//vector<string> csvElements;

	// Create vector to return element data set.
	vector<string> elementDataSet;

	vector<string> testDataSet;

	

public:

	// TODO:  Debug
	// CSV File Object for Reading
	ifstream* readFile;
	
	

	vector<MovementDataSet> dataSet;

	//------------------------------
	// TODO: Debugg Not working with setCsvAll
	// SET: Read File 
	void setReadFile() {
		readFile = &fileManipulator.readFile;
	}
	// SET: *Original Read data to string 
	void setCsvRows(ifstream& readFile) {

		// point read pointer at beginning of file 
		readFile.seekg(0, ios::beg);

		string row;

		// Loop through lines of this file until EOF
		while (readFile) {

			// Read a Line from File 
			getline(readFile, row);

			// Store line as string in a vector 
			csvRows.push_back(row);
		}
	}
	// SET_NEW: SET ROWS AND EMELENTS
	// SET: Read data to string 
	void setCsvAll(ifstream readFile) {
		
		// point read pointer at beginning of file 
		readFile.seekg(0, ios::beg);

		string row;
		
		// Counter for error checking
		int c;

		// Loop through lines of this file until EOF
		// TODO: Fix error with readFile loop. Not initializing.
		while (readFile) {
			cout << "FFKJGDJKNHGJKDF";
			// Create place holder string to hold the value of the element
			string element;

			// Read a Line from File 
			getline(readFile, row);

			// Use an input string stream to capture the row as a stream. This allows you to use getline to return a value of true or false when it reaches the '\0' to terminate the stream.
			istringstream rowStream(row);

			// Read a Line from File 
			getline(readFile, row);


			// We use getline() to take in a string stream. We denote that we want to capture a individual string in our element variable. Finally we specify our delimiter.
			while (getline(rowStream, element, COMMA)) {

				

				// Push the Element string captured from the stream into our elementDataSet vector
				elementDataSet.push_back(element);
				cout << "\nElement: " << element << endl;
				cout <<"DATASET:"<< elementDataSet.at(c)<<endl<<endl;

				// Increment debugger
				c++;
			}

			// Store line as string in a vector 
			csvRows.push_back(row);
		}
	}
	/*
	// SET: Set row to Csv Format for writing
	void setCsvFormat(gridCoordinates location) {
		formattedRow = string(location.x) + COMMA + string(location.y) + NEW_LINE;
	}
	//-----------------------------------------

	*/
	//----------------------------------------- 
	// GET: Formatted Row
	// Will be passed to File Manipulator for Writing
	string getFormattedRow() {
		return formattedRow;
	}
	// GET: Elements
	// Strips the input string at the specified delimiter and returns a data set in the form of a vector of strings. 
	void setCsvElements(vector<string> rows, char delimiter) {
		
		int c = 0;
		for (vector<string>::iterator begining = rows.begin(); begining != rows.end(); begining++){
		
		//vector<string> elementDataSet;
		// Create DataSet for prepper
	    MovementDataSet data;
		string element;
		istringstream rowStream(*begining);
		while (getline(rowStream, element, delimiter)) {
			elementDataSet.push_back(element);
			cout << "\nELEMENTS: " << element;
			c++;
			if (c % 2 == 0) {
				data.direction = element;
			}
			else {
				data.units = element;
			}
		}
		dataSet.push_back(data);
		}
	}
	// Get: DataSet
	vector<MovementDataSet> getDataSet() {
		return dataSet;
	}

	// GET: Row Elements
	vector<string> getCsvElements() {
		return elementDataSet;
	}
	// Get: Rows
	vector<string> getCsvRows() {
		return csvRows;
	}
	//---------------------
	// DEBUGGING
	// PRINT: Vector
	void printVector(vector<string> const &input) {
		copy(input.begin(), input.end(), ostream_iterator<string>(cout, " "));
	}
	
};

CSV_Manipulator csvManipulator;
/*
	// Added feature outside initial scope
	// Set File name to User Input
	void setFileName() {
		userInput.setStringInput();
		fileName = userInput.getStringInput();
	}
	*/