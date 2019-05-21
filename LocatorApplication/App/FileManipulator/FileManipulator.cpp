/*
 * # Title: FileManipulation Testing And Dev
 * # Description: Main File to test FileManipulation Components
 * # Author: Michael Martin and ______________
 * # Class: COMPSCI 1

 * # Tests: 1/2
  > Compilation: PASSED
  > Logic: PASSED
 */


#include "FileManipulator.h"

using namespace std;

int main() {



	fileManipulator.setReadFile("data.csv", fileManipulator.readFile);
	fileManipulator.setWriteFile("Testing.txt", fileManipulator.writeFile);

	fileManipulator.getReadFileObject();
	fileManipulator.getWriteFile();

	fileManipulator.setDataString(fileManipulator.readFile, '\n');
	string data = fileManipulator.getDataString();
	cout << "\nData String: " << data << " \n";

	fileManipulator.writeToFile(data, fileManipulator.writeFile);


	fileManipulator.closeReadFile(fileManipulator.readFile);
	fileManipulator.closeWriteFile(fileManipulator.writeFile);


	return(0);
}