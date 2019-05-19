#pragma once
#include "BaseStructs.h"

constexpr auto POSITIVE_AXIS = 1;
constexpr auto NEGATIVE_AXIS = -1;


class DataSanitizatizer {

private:


	struct AxisDirections {
		string x = "x";
		string y = "y";
		string neg_X = "-x";
		string neg_Y = "-y";

	}axisDirections;

	// This will hold the data that is ready for use in the Locator.
	struct cleanedDirectionData {

		// Int to hold determine which direction on axis
		// Will be either -1 or positive 1
		int directionOnAxis;

		// Bool to determine if on the x or y axis
		// If true x axis if false y axis
		bool axis;

	};

	cleanedDirectionData cleanDataSet;

public:

	cleanedDirectionData cleanDataSet;
	// Takes in semi cleaned csv data as MovementDataSet then converts it into the data set to be used by Locator
	cleanedDirectionData getCleanData(AxisDirections possibleDirections, MovementDataSet dataSet) {
		if (possibleDirections.x == dataSet.direction) {
			cleanDataSet.directionOnAxis = POSITIVE_AXIS;
			cleanDataSet.axis = true;
			return cleanDataSet;
		}
		else if (possibleDirections.y == dataSet.direction) {
			cleanDataSet.directionOnAxis = POSITIVE_AXIS;
			cleanDataSet.axis = false;
			return cleanDataSet;
		}
		if (possibleDirections.neg_X == dataSet.direction) {
			cleanDataSet.directionOnAxis = NEGATIVE_AXIS;
			cleanDataSet.axis = true;
			return cleanDataSet;
		}
		if (possibleDirections.neg_Y == dataSet.direction) {
			cleanDataSet.directionOnAxis = NEGATIVE_AXIS;
			cleanDataSet.axis = false;
			return cleanDataSet;
		}
	}
};








