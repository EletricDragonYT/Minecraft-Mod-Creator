#pragma once
#include <iostream>
#include <vector>

extern std::vector<std::string> base;
extern std::vector<std::string> block;
extern std::vector<std::string> stair;
extern std::vector<std::string> slab;

extern std::vector<std::string> blockTex;
extern std::vector<std::string> stairTex;
extern std::vector<std::string> slabTex;

int nameInit();
int nameDeinit();
int names();