#pragma once

extern bool createAir;
extern bool createBlock;
extern bool createStair;
extern bool createSlab;
extern bool createFence;
extern bool createFenceGate;
extern bool createWall;
extern bool createDoor;
extern bool createTrapdoor;

extern bool isAir;
extern bool isInstrument;
extern bool isViewBlocking;
extern bool isSuffocating;
extern bool isRedstoneConductor;
extern bool checkValidSpawn;
extern bool isValidSpawn;
extern bool isLiquid;
extern bool isReplaceable;

extern bool hasDestroyTime;
extern bool hasDropsLike;
extern bool hasDynamicShape;
extern bool hasExplosionResistance;
extern bool hasEmissiveRendering;
extern bool hasFriction;
extern bool hasForceSolidOn;
extern bool hasForceSolidOff;
extern bool hasPostProcess;
extern bool hasIgnitedByLava;
extern bool hasInstaBreak;
extern bool hasJumpFactor;
extern bool hasLightLevel;
extern bool hasMapColor;
extern bool mapColorType;
extern bool hasNoBreakParticles;
extern bool hasNoCollission;
extern bool hasNoOcclusion;
extern bool hasNoLootTable;
extern bool hasOffset;
extern bool hasPushReaction;
extern bool hasRandomTicks;
extern bool hasRequiredFeatures;
extern bool hasRequiredTool;
extern bool hasSound;
extern bool hasSpeedFactor;
extern bool hasStrength;

extern std::string defaultBlockState;

extern std::string instrument;
extern std::string viewBlocking;
extern std::string suffocating;
extern std::string redstoneConductor;
extern std::string validSpawn;

extern std::string destroyTime;
extern std::string explosionResistance;
extern std::string emmisiveRendering;
extern std::string friction;
extern std::string postProcess;
extern std::string jumpFactor;
extern std::string lightLevel;
extern std::string mapColor;
extern std::string altMapColor;
extern std::string offsetType;
extern std::string pushReaction;
extern std::string requiredFeatures;
extern std::string soundType;
extern std::string speedFactor;
extern std::string strength;

// Item Properties

extern bool isFireResistant;
extern bool hasStackSize;
extern bool hasRarity;

extern std::string stackSize;
extern std::string rarity;