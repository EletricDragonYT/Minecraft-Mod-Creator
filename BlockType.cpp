#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

#include "Main.h"
#include "Names.h"

int BlockSetType() {
	// Creates a block type which is used to create wood types.

	std::ofstream blockType;

	blockType.open("Assets/BlockTypes/BlockSetTypes.txt", std::ios_base::app);

	blockType <<
		"public static BlockSetType " << base[1] << " = BlockSetType.register(new BlockSetType(" << s << base[0] << s << "));\n" <<	std::endl;

	return 0;
}

int WoodType() {
	// Creates a wood type which is used for a variety of wooden blocks.

	std::ofstream woodType;

	woodType.open("Assets/BlockTypes/WoodTypes.txt", std::ios_base::app);

	woodType <<
		"public static WoodType " << base[1] << " = WoodType.register(new WoodType(" << s << base[0] << s << ", BlockSetTypes." << base[1] << "));\n" << std::endl;

		std::ofstream woodTypeInitA;
	std::ofstream woodTypeInitB;

	woodTypeInitA.open("Assets/BlockTypes/WoodTypesInitClient.txt", std::ios_base::app);

	woodTypeInitA <<
		"WoodType.register(WoodTypes." << base[1] << ");\n" << std::endl;
	// Registers the new wood type under the "onClientSetup" method in the main mod file ("Infinity")

	woodTypeInitB.open("Assets/BlockTypes/WoodTypesInitSetup.txt", std::ios_base::app);

	woodTypeInitA <<
		"Sheets.addWoodType(WoodTypes." << base[1] << ");\n" << std::endl;
	// Registers the new wood type under the "onSetup" method in the main mod file ("Infinity")

	return 0;
}