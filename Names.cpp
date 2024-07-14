#include <iostream>
#include <algorithm>
#include <vector>

std::vector<std::string> base = { "", "", ""};
std::vector<std::string> block = { "", "", "" };
std::vector<std::string> stair = { "", "", "" };
std::vector<std::string> slab = { "", "", "" };

std::vector<std::string> blockTex = { "tex", "tex", "tex" };
std::vector<std::string> stairTex = { "tex", "tex", "tex" };
std::vector<std::string> slabTex = { "tex", "tex", "tex" };

int nameInit() {

	base[1] += base[0];
	std::transform(base[1].begin(), base[1].end(), base[1].begin(), ::toupper);

	base[2] += base[0];
	std::replace(base[2].begin(), base[2].end(), '_', ' ');

	//
	//
	//

	block[0] += base[0];   block[1] += block[0];
	std::transform(block[1].begin(), block[1].end(), block[1].begin(), ::toupper);

	block[2] += block[0];
	std::replace(block[2].begin(), block[2].end(), '_', ' ');

	//
	//
	//

	stair[0] += base[0];   stair[0] += "_stairs";   stair[1] += stair[0];
	std::transform(stair[1].begin(), stair[1].end(), stair[1].begin(), ::toupper);

	stair[2] += stair[0];
	std::replace(stair[2].begin(), stair[2].end(), '_', ' ');

	//
	//
	//

	slab[0] += base[0];   slab[0] += "_slabs";   slab[1] += slab[0];
	std::transform(slab[1].begin(), slab[1].end(), slab[1].begin(), ::toupper);

	slab[2] += slab[0];
	std::replace(slab[2].begin(), slab[2].end(), '_', ' ');

	return 0;
}

int nameDeinit() {

	base[0] = "";
	base[1] = "";
	base[2] = "";

	block[0] = "";
	block[1] = "";
	block[2] = "";

	stair[0] = "";
	stair[1] = "";
	stair[2] = "";

	slab[0] = "";
	slab[1] = "";
	slab[2] = "";

	return 0;
}

int names() {

	std::cout <<
		base[0] << "\n" <<
		base[1] << "\n" <<
		base[2] << "\n" <<
		"\n" <<
		block[0] << "\n" <<
		block[1] << "\n" <<
		block[2] << "\n" <<
		"\n" <<
		stair[0] << "\n" <<
		stair[1] << "\n" <<
		stair[2] << "\n" <<
		"\n" <<
		slab[0] << "\n" <<
		slab[1] << "\n" <<
		slab[2] << "\n"
		;

	return 0;
}