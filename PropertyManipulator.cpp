#include <iostream>

#include "Main.h"
#include "Properties.h"

std::string var;
bool varB;

int boolBlockValueManager(std::string variable, bool value) {

    if (variable == "isAir") {

        isAir = value;
    }
    else if (variable == "") {


    }
    else if (variable == "") {


    }
    else if (variable == "") {


    }

    linker();

    return 0;
}

int blockValueManager(std::string variable, std::string value) {

    if (variable == "isAir") {

        defaultBlockState = value;
    }
    else if (variable == "destroyTime") {

        destroyTime = value;
    }


    linker();

    return 0;
}

int blockPropertyManager() {

    std::cout <<
        "\n" << "\n" <<
        "Block Type Properties: \n" <<
        "- isAir, value: " << isAir << "\n" <<
        "- isInstrument, value: " << isInstrument << "\n" <<
        "- isViewBlocking, value: " << isViewBlocking << "\n" <<
        "- isSuffocating, value: " << isSuffocating << "\n" <<
        "- isRedstoneConductor, value: " << isRedstoneConductor << "\n" <<
        "- checkValidSpawn, value: " << checkValidSpawn << "\n" <<
        "-- isValidSpawn, value: " << isValidSpawn << "\n" <<
        "- isLiquid, value: " << isLiquid << "\n" <<
        "- isReplaceable, value: " << isReplaceable << "\n" <<
        "\n" <<
        "- hasDestroyTime, value: " << hasDestroyTime << "\n" <<
        "- hasDropsLike, value: " << hasDropsLike << "\n" <<
        "- hasExplosionResistance, value: " << hasExplosionResistance << "\n" <<
        "- hasEmissiveRendering, value: " << hasEmissiveRendering << "\n" <<
        "- hasFriction, value: " << hasFriction << "\n" <<
        "- hasForceSolidOn, value: " << hasForceSolidOn << "\n" <<
        "- hasForceSolidOff, value: " << hasForceSolidOff << "\n" <<
        "- hasPostProcess, value: " << hasPostProcess << "\n" <<
        "- hasIgnitedByLava, value: " << hasIgnitedByLava << "\n" <<
        "- hasInstaBreak, value: " << hasInstaBreak << "\n" <<
        "- hasJumpFactor, value: " << hasJumpFactor << "\n" <<
        "- hasLightLevel, value: " << hasLightLevel << "\n" <<
        "- hasMapColor, value: " << hasMapColor << "\n" <<
        "-- mapColorType, value: " << mapColorType << "\n" <<
        "- hasNoBreakParticles, value: " << hasNoBreakParticles << "\n" <<
        "- hasNoCollission, value: " << hasNoCollission << "\n" <<
        "- hasNoOcclusion, value: " << hasNoOcclusion << "\n" <<
        "- hasNoLootTable, value: " << hasNoLootTable << "\n" <<
        "- hasOffset, value: " << hasOffset << "\n" <<
        "- hasPushReaction, value: " << hasPushReaction << "\n" <<
        "- hasRandomTicks, value: " << hasRandomTicks << "\n" <<
        "- hasRequiredFeatures, value: " << hasRequiredFeatures << "\n" <<
        "- hasRequiredTool, value: " << hasRequiredTool << "\n" <<
        "- hasSound, value: " << hasSound << "\n" <<
        "- hasSpeedFactor, value: " << hasSpeedFactor << "\n" <<
        "- hasStrength, value: " << hasStrength << "\n" <<
        "\n" <<
        "Block Properties:\n" <<
        "- defaultBlockState, value: " << defaultBlockState << "\n" <<
        "- instrument, value: " << instrument << "\n" <<
        "- suffocating, value: " << suffocating << "\n" <<
        "- redstoneConductor, value: " << redstoneConductor << "\n" <<
        "- validSpawn, value: " << validSpawn << "\n" <<
        "\n" <<
        "- destroyTime, value: " << destroyTime << "\n" <<
        "- explosionResistance, value: " << explosionResistance << "\n" <<
        "- emmisiveRendering, value: " << emmisiveRendering << "\n" <<
        "- friction, value: " << friction << "\n" <<
        "- postProcess, value: " << postProcess << "\n" <<
        "- jumpFactor, value: " << jumpFactor << "\n" <<
        "- lightLevel, value: " << lightLevel << "\n" <<
        "- mapColor, value: " << mapColor << "\n" <<
        "- altMapColor, value: " << altMapColor << "\n" <<
        "- offsetType, value: " << offsetType << "\n" <<
        "- pushReaction, value: " << pushReaction << "\n" <<
        "- requiredFeatures, value: " << requiredFeatures << "\n" <<
        "- soundType, value: " << soundType << "\n" <<
        "- speedFactor, value: " << speedFactor << "\n" <<
        "- strength, value: " << strength << "\n" <<
        "\n";
    std::cout << "Command: "; std::cin >> input; std::cout << "\n" << "\n";

    if (input == "change_value") {

        std::cout << "State the variable you wish to change: ";  std::cin >> input;
        std::cout << "What is the new value of the property? "; std::cin >> var;

        if (input == "isAir"
            or input == "isInstrument"
            or input == "isViewBlocking"
            or input == "isSuffocating"
            or input == "isRedstoneConductor"
            or input == "checkValidSpawn"
            or input == "isValidSpawn"
            or input == "isLiquid"
            or input == "isReplaceable"

            or input == "hasDestroyTime"
            or input == "hasDropsLike"
            or input == "hasExplosionResistance"
            or input == "hasEmissiveRendering"
            or input == "hasFriction"
            or input == "hasForceSolidOn"
            or input == "hasForceSolidOff"
            or input == "hasPostProcess"
            or input == "hasIgnitedByLava"
            or input == "hasInstaBreak"
            or input == "hasJumpFactor"
            or input == "hasLightLevel"
            or input == "hasMapColor"
            or input == "hasNoBreakParticles"
            or input == "hasNoCollission"
            or input == "hasNoOcclusion"
            or input == "hasNoLootTable"
            or input == "hasOffset"
            or input == "hasPushReaction"
            or input == "hasRandomTicks"
            or input == "hasRequiredFeatures"
            or input == "hasRequiredTool"
            or input == "hasSound"
            or input == "hasSpeedFactor"
            or input == "hasStrength") {

            boolBlockValueManager(input, varB);
        }
        else {

            blockValueManager(input, var);
        }
    }
    else if (input == "generate") {

        main();
    }

    return 0;
}