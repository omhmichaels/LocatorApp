/*
 *
 * # Title: UserInput Testing And Dev
 * # Description: Main File to test UserInput Components
 * # Author: Michael Martin and ______________
 * # Class: COMPSCI 1

 * # Tests: 1/2
  > Compilation: PASSED
  > Logic: ?
 */


#pragma once
#include <fstream>
#include <vector>
#include <iostream>


// Add functionality for full path later

using namespace std;

class FileManipulator {

private:

	// Variable to hold input filename
	string InputFileName = "DataSet.csv";

	// Output file name
	string outputFileName = "PreviousLocations.csv";

	// Holds data from csv as a string
	string dataString;

	
public:
	// Class Object to hold open csv file object for reading
	ifstream readFile;

	// Class Object to create csv file for output
	ofstream writeFile;

	// --------------------------
	// BASIC FILE MANIPULATION

	// SETTERS:
	// SET: Open file stream for reading
	void setReadFile(string FileName, ifstream& readFile) {
		readFile.open(FileName);
	}
	
	// SET: Open for writing
	// Open file for writing in append mode
	void setWriteFile(string fileName, ofstream& writeFile) {
		writeFile.open(fileName, ios::app);
	}
	//
	// GETTERS:
	// GET: Read file
	ifstream& getReadFileObject(){
		return readFile;
	}	
	// GET: WriteFile
	ofstream& getWriteFile() {
		return writeFile;
	}
	// Close file
	void closeReadFile(ifstream& fileObject) {
		fileObject.close();
	}
	void closeWriteFile(ofstream& fileObject) {
		fileObject.close();
	}
	
	//------------------------------
	

	//------------------------------
	// ADVANCED FILE MANIPULATION

	// READING
	// SET: Reads data from input file stream into raw string data. Stores as class variable for later use via a getter()
	void setDataString(ifstream& readFile, char delimiter) {

		// point read pointer at beginning of file 
		readFile.seekg(0, ios::beg);

		// String to hold row
		string row;

		// Loop through lines of this file until EOF
		while (readFile) {

			// Read a Line from File 
			getline(readFile, row);

			//cout << "\nROW: " << row ;

			// Format row 
			row = row + delimiter;
			// Store as string
			dataString = dataString.append(row);
			
			//cout << "\nAPPENDING Data String: " << dataString;
		}
		//cout << "\nData String: " << dataString << " \n";
	}
	// GET: Data String
	// Retrieves the data string containing the contents of the read file
	string getDataString() {
		return dataString;
	}
	
	// WRITING:
	// Write /Append data to file object opened for writing.
	void writeToFile(string data, ofstream& fileObject) {
		fileObject << data;
	}
	
	// UTILITIES: Utilities for Manipulation Functions
	// CHECK: If opened read file
	int checkFileOpened(ifstream& fileName) {
		if (!fileName) {
			cerr << "Unable to open file.\n";
			exit(1);
		}
	}
	// CHECK: If opened read file
	int checkFileOpened(ofstream& fileName) {
		if (!fileName) {
			cerr << "Unable to open file.\n";
			exit(1);
		}
	}
	//--------------------------------
	
};
FileManipulator fileManipulator;


	// Added feature outside initial scope
	/*/ Set File name to User Input
	void setFileName() {
		userInput.setStringInput();
		fileName = userInput.getStringInput();
	}
	*/
	