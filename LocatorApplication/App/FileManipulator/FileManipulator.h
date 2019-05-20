#pragma once
#include "../../Misc/AllIncludes.h"
#include <fstream>
#include vector


// Add functionality for full path later

using namespace std;

class FileManipulator {

private:

	// Variable to hold user input filename
	string InputFileName = "DataSet.csv";

	string outputFileName = "PreviousLocations.csv";

	// Holds data from csv as a string
	string dataString;

	// Class Object to hold open csv file object for reading
	ifstream dataSetFile;

	// Class Object to create csv file for output
	ofstream outputData;
	// Vetor holding CSV Lines
	vector<string> csvRows;

   

public:

	// --------------------------
	// BASIC FILE MANIPULATION
	// Open the file stream for reading
	void openDataSetFile(){
		dataSetFile.open(InputFileName);
	}
        void setWriteFile(string fileName, ofstream writeFile){
            writeFile.open(fileName, ios::app)
        }
	// Check if opened
	int checkFileOpened() {
		if (!dataSetFile) {
			cerr << "Unable to open file.\n";
			exit(1);
		}
	}
	// Close file for reading
	void closeFile() {
		dataSetFile.close();
	}
	// Close file for writing
	void closeOutputFile() {
		outputData.close();
	}

	void setOutputData() {
		outputData.open(outputFileName);
	}
	//------------------------------
	

	//------------------------------
	// ADVANCED FILE MANIPULATION
	// Read data to string
	void getDataString() {

		// Variable for indexing 
		int c;
		// Execute a loop untill EOF (End of File) 
		 // point read pointer at beginning of file 
		dataSetFile.seekg(0, ios::beg)

		while (dataSetFile) {

			// Read a Line from File 
			getline(dataSetFile, row);

			// Store ling as string in a vector 
			csvRows.push_back(row);

			// Store as string
			dataString = dataString.append(row);

			c++;
		}
		closeFile(InputFileName);
	}

};
       // Strips the input string at the specified delimiter.
       void getCsvElements(string row, char delimiter){ 
                vector<string> elementDataSet;
                string element;
                istringstream rowStream(row);
                while (getline(rowStream, element, delimiter)){
                    elementDataSet.push_back(element);
                }
              return elementDataSet;
        }
                 

/*
	void setDataString() {
		string line;
		while (getline(stream, line)) {
			istringstream s(line);
			string field;
			while (getline(s, field, ',')) {

			}
		}
	}
	*/


// Added feature outside initial scope
/*/ Set File name to User Input
void setFileName() {
	userInput.setStringInput();
	fileName = userInput.getStringInput();
}
*/
/*
std::string line;
while(std::getline(stream, line)
std::istringstream s(line);
std::string field;
while (getline(s, field,','))
	void readFromFile(){

		while (inFile >> dataSetNode.direction, dataSetNode.unitsMoved) {

		}
	*/
