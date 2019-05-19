/*
Title:
Description:
Responsibilities:
Components:
Dependancies:

*/

#pragma once
#include <string>
#include "../../Misc/AllIncludes.h"

using namespace std;



class CsvDataManipulator {
	/* Description:
	   Components:
	*/


private:
	// String to store raw data passed from FileManipulator from csv file.
	string fileData;

	// String to store raw row data 
	string rowData;

	MovementDataSet dataSet;
	FileManipulator fileManipulator;

public:

	void setFileData() {
		fileManipulator.openDataSetFile();
		fileManipulator.checkFileOpened();
	}



	void setRow(string dataStream) {
		for (int i = 0; i <= ) {

		}
	}

}; 
