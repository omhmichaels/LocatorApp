#pragma once
#include "../../Model/AllIncludes.h"
using namespace std;

class Locator {

private:

	// Store initial location as two integer grid cordinates (x,y)
	gridCoordinates initialLocation;

	// Store initial location as two integer grid cordinates (x,y)
	gridCoordinates location;

	
	// Movement data as a string and an int
	MovementDataSet dataSet;

public:

	//---------------------------
	// SETTERS
	void setInitialLocation() {
		userInput.setIntInput();
		initialLocation.x = userInput.getIntInput();
		userInput.setIntInput();
		initialLocation.y = userInput.getIntInput();
	}

	void setLocation() {
		userInput.setIntInput();
		location.x = userInput.getIntInput();
		
		userInput.setIntInput();
		location.y = userInput.getIntInput();
	}
	
	// GETTERS
	gridCoordinates getInitialLocation() {
		return initialLocation;
	}

	void setMovementDataSet() {
		// TODO CONSTRUCT FileManipulator class fileManipulator for dataset file manipulation 
		fileManipulator.setDirection();

		fileManipulator.setUnitsMoved();
	}

	movementDataSet getDataSet() {
		dataSet.direction = fileManipulator.getDirection();
		dataSet.unitsMoved = fileManipulator.getUnitsMoved();
		return dataSet;
	}



};