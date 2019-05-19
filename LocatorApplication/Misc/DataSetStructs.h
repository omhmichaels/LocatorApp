#pragma once
#include <string>

using namespace std;


struct gridCoordinates
{
	int x;
	int y;
};

struct MovementDataSet {

	// Represents x || -x . The second is y || -y
	// This should be represented as any negative or positive integers
	string direction;

	// Represents the amount of units move in any given direction
	int unitsMoved;
};

