#pragma once
#include "../../Misc/AllIncludes.h"

using namespace std;

class DataPrepper {

private:
	// String to store initial row object
	string dataSetRow;

	MovementDataSet dataSetNode;

public:

	void setDataSetNode() {
		dataSetNode.direction = dataSetRow[0];
		dataSetNode.unitsMoved = dataSetRow[1];
	}

	MovementDataSet getDataSetNode() {
		return dataSetNode;
	}

};
