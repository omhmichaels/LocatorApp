/*
 * # Title: UserInput Testing And Dev
 * # Description: Main File to test CSV_Manipulator Components
 * # Author: Michael Martin and ______________
 * # Class: COMPSCI 1

 * # Tests: 2/2
  > Compilation: PASSED
  > Logic: PASSED
 */


#include "CSV_Manipulator.h"

using namespace std;

int main() {
	// Opens a file for reading and a file for writing
	fileManipulator.setReadFile("data.csv", fileManipulator.readFile);
	fileManipulator.setWriteFile("Testing.txt", fileManipulator.writeFile);

	fileManipulator.setDataString(fileManipulator.readFile, '\n');
	
	
	vector<string> rows = fileManipulator.getCsvRows();
	csvManipulator.printVector(rows);

	csvManipulator.setCsvElements(rows, ',');
	vector<MovementDataSet> elements = csvManipulator.getDataSet();
	cout << "\nELEMENT TEST 1) " << elements[1].direction << "\n2) " << elements[1].units << endl;


	fileManipulator.closeReadFile(fileManipulator.readFile);
	fileManipulator.closeWriteFile(fileManipulator.writeFile);

	return(0);
}