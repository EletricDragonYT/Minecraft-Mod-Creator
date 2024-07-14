#include <iostream>
#include <algorithm>

#include "BlockCreator.h"
#include "StairCreator.h"
#include "SlabCreator.h"

#include "BlockType.h"
#include "Properties.h"
#include "PropertyManipulator.h"
#include "Names.h"

/*
	Goals
	- Be able to generate every available feature in Minecraft 1.20
	- Be able to generate multiple features from a vector.
	- Commands, allow the user to modify settings without exiting the window.
*/

char s = '"';
std::string modID = "infinity";
bool debugNames = true;
bool debug = true;

std::string input;
std::string featureType;

int linker() {

	blockPropertyManager();

	return 0;
}

int main() {

	std::cout <<
		"Please enter a feature name, use underscores instead of spaces.\n" <<
		"Feature Name: ";	std::cin >> base[0];
	std::cout << "Feature Type: ";	std::cin >> input;

	nameInit();

	if (input == "air") {

		std::cout << "Ignore.\n";
	}
	else if (input == "block") {

		blockBlock();
		blockItem();
		blockJson();
	}
	else if (input == "stair") {

		stairBlock();
		stairItem();
		stairJson();
	}
	else if (input == "slab") {

		slabBlock();
		slabItem();
		slabJson();
	}

	if (debugNames == true) {

		names();
	}

	std::cout << "\n" << "Generation Complete.\n";

	return 0;
}