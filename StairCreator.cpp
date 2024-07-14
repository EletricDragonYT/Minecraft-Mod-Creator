#include <iostream>
#include <fstream>

#include "Main.h"
#include "Properties.h"
#include "Names.h"

std::ofstream stairEnglish;

std::ofstream stairInit;
std::ofstream stairItemInit;

int stairBlock() {

	stairEnglish.open("Assets/Langs/en_us.json", std::ios_base::app);

	stairEnglish <<
		"block." << modID << "." << stair[0] << s << ": " << s << stair[2] << s << "\n";

	//
	//
	//

	stairInit.open("Assets/Registry/BlockInit.txt", std::ios_base::app);

	stairInit <<
		"public static final RegistryObject<Block> " << stair[1] << " = BLOCKS.register(" << s << stair[0] << s << ",\n" <<
		"        () -> new StairBlock(BlockBehaviour.Properties.of()\n";

	if (isAir == true) {

		stairInit <<
			"                    .air()\n";
	}
	if (isInstrument == true) {

		stairInit <<
			"                    .instrument(" << instrument << ")\n";
	}
	if (isViewBlocking == true) {

		stairInit <<
			"                    .isViewBlocking(" << viewBlocking << ")\n";
	}
	if (isSuffocating == true) {

		stairInit <<
			"                    .isSuffocating(" << suffocating << ")\n";
	}
	if (isRedstoneConductor == true) {

		stairInit <<
			"                    .isRedstoneConductor(" << redstoneConductor << ")\n";
	}
	if (checkValidSpawn == true) {

		if (isValidSpawn == true) {

			stairInit <<
				"                    .isValidSpawn(" << validSpawn << ")\n";
		}
	}
	if (isLiquid == true) {

		stairInit <<
			"                    .liquid()\n";
	}
	if (isReplaceable == true) {

		stairInit <<
			"                    .replaceable()\n";
	}

	if (hasDestroyTime == true) {

		stairInit <<
			"                    .destroyTime(" << destroyTime << ")\n";
	}
	if (hasDropsLike == true) {

		stairInit <<
			"                    .dropsLike()\n";
	}
	if (hasDynamicShape == true) {

		stairInit <<
			"                    .dynamicShape()\n";
	}
	if (hasExplosionResistance == true) {

		stairInit <<
			"                    .explosionResistance(" << explosionResistance << ")\n";
	}
	if (hasEmissiveRendering == true) {

		stairInit <<
			"                    .emissiveRendering(" << emmisiveRendering << ")\n";
	}
	if (hasFriction == true) {

		stairInit <<
			"                    .friction(" << friction << ")\n";
	}
	if (hasForceSolidOn == true) {

		stairInit <<
			"                    .forceSolidOn()\n";
	}
	if (hasForceSolidOff == true) {

		stairInit <<
			"                    .forceSolidOff()\n";
	}
	if (hasPostProcess == true) {

		stairInit <<
			"                    .hasPostProcess(" << postProcess << ")\n";
	}
	if (hasIgnitedByLava == true) {

		stairInit <<
			"                    .ignitedByLava()\n";
	}
	if (hasInstaBreak == true) {

		stairInit <<
			"                    .instabreak()\n";
	}
	if (hasJumpFactor == true) {

		stairInit <<
			"                    .jumpFactor(" << jumpFactor << ")\n";
	}
	if (hasLightLevel == true) {

		stairInit <<
			"                    .lightLevel(" << lightLevel << ")\n";
	}
	if (hasMapColor == true) {

		if (mapColorType == true) {

			stairInit <<
				"                    .mapColor(" << mapColor << ")\n";
		}
		else if (mapColorType == false) {

			stairInit <<
				"                    .mapColor(" << altMapColor << ")\n";
		}
	}
	if (hasNoBreakParticles == true) {

		stairInit <<
			"                    .noParticlesOnBreak()\n";
	}
	if (hasNoCollission == true) {

		stairInit <<
			"                    .noCollission()\n";
	}
	if (hasNoOcclusion == true) {

		stairInit <<
			"                    .noOcclusion()\n";
	}
	if (hasNoLootTable == true) {

		stairInit <<
			"                    .noLootTable()\n";
	}
	if (hasOffset == true) {

		stairInit <<
			"                    .offsetType(" << offsetType << ")\n";
	}
	if (hasPushReaction == true) {

		stairInit <<
			"                    .pushReaction(" << pushReaction << ")\n";
	}
	if (hasRandomTicks == true) {

		stairInit <<
			"                    .randomTicks()\n";
	}
	if (hasRequiredFeatures == true) {

		stairInit <<
			"                    .requiredFeatures(" << requiredFeatures << ")\n";
	}
	if (hasRequiredTool == true) {

		stairInit <<
			"                    .requiresCorrectToolForDrops()\n";
	}
	if (hasSound == true) {

		stairInit <<
			"                    .sound(" << soundType << ")\n";
	}
	if (hasSpeedFactor == true) {

		stairInit <<
			"                    .speedFactor(" << speedFactor << ")\n";
	}
	if (hasStrength == true) {

		stairInit <<
			"                    .strength(" << strength << ")\n";
	}

	stairInit <<
		"));\n\n";

	return 0;
}

int stairItem() {

	stairItemInit.open("Assets/Registry/BlockItemInit.txt", std::ios_base::app);

	stairItemInit <<
		"public static final RegistryObject<BlockItem> " << stair[1] << " = ITEMS.register(" << s << stair[0] << s << ",\n" <<
		"        () -> new BlockItem(Blocks." << stair[1] << ".get(), new Item.Properties()\n";

	if (isFireResistant == true) {

		stairItemInit <<
			"                    .fireResistant()\n";
	}
	if (hasStackSize == true) {

		stairItemInit <<
			"                    .stacksTo(" << stackSize << ")\n";
	}
	if (hasRarity == true) {

		stairItemInit <<
			"                    .rarity(" << rarity << ")\n";
	}

	stairItemInit <<
		"));\n\n";

	return 0;
}

int stairJson() {

	std::ofstream blockstate("Assets/Blockstates/" + stair[0] + ".json");
	blockstate <<
		"{\n" <<
		"  " << s << "variants" << s << ": {\n" <<
		"    " << s << "facing=east,half=bottom,shape=inner_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "y" << s << ": 270\n" <<
 		"    },\n" <<
		"    " << s << "facing=east,half=bottom,shape=inner_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << "\n" <<
		"    },\n" <<
		"    " << s << "facing=east,half=bottom,shape=outer_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "y" << s << ": 270\n" <<
		"    },\n" <<
		"    " << s << "facing=east,half=bottom,shape=outer_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << "\n" <<
		"    },\n" <<
		"    " << s << "facing=east,half=bottom,shape=straight" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << "\n" <<
		"    },\n" <<



		"    " << s << "facing=east,half=top,shape=inner_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180\n" <<
		"    },\n" <<
		"    " << s << "facing=east,half=top,shape=inner_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180,\n" <<
		"      " << s << "y" << s << ": 90\n" <<
		"    },\n" <<
		"    " << s << "facing=east,half=top,shape=outer_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180\n" <<
		"    },\n" <<
		"    " << s << "facing=east,half=top,shape=outer_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180,\n" <<
		"      " << s << "y" << s << ": 90\n" <<
		"    },\n" <<
		"    " << s << "facing=east,half=top,shape=straight" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180\n" <<
		"    },\n" <<



		"    " << s << "facing=north,half=bottom,shape=inner_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "y" << s << ": 180\n" <<
		"    },\n" <<
		"    " << s << "facing=north,half=bottom,shape=inner_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "y" << s << ": 270\n" <<
		"    },\n" <<
		"    " << s << "facing=north,half=bottom,shape=outer_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "y" << s << ": 180\n" <<
		"    },\n" <<
		"    " << s << "facing=north,half=bottom,shape=outer_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "y" << s << ": 270\n" <<
		"    },\n" <<
		"    " << s << "facing=north,half=bottom,shape=straight" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "y" << s << ": 270\n" <<
		"    },\n" <<



		"    " << s << "facing=north,half=top,shape=inner_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180,\n" <<
		"      " << s << "y" << s << ": 270\n" <<
		"    },\n" <<
		"    " << s << "facing=north,half=top,shape=inner_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180\n" <<
		"    },\n" <<
		"    " << s << "facing=north,half=top,shape=outer_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180,\n" <<
		"      " << s << "y" << s << ": 270\n" <<
		"    },\n" <<
		"    " << s << "facing=north,half=top,shape=outer_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180\n" <<
		"    },\n" <<
		"    " << s << "facing=north,half=top,shape=straight" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180,\n" <<
		"      " << s << "y" << s << ": 270\n" <<
		"    },\n" <<



		"    " << s << "facing=south,half=bottom,shape=inner_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << "\n" <<
		"    },\n" <<
		"    " << s << "facing=south,half=bottom,shape=inner_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "y" << s << ": 90\n" <<
		"    },\n" <<
		"    " << s << "facing=south,half=bottom,shape=outer_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << "\n" <<
		"    },\n" <<
		"    " << s << "facing=south,half=bottom,shape=outer_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "y" << s << ": 90\n" <<
		"    },\n" <<
		"    " << s << "facing=south,half=bottom,shape=straight" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "y" << s << ": 90\n" <<
		"    },\n" <<



		"    " << s << "facing=south,half=top,shape=inner_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180,\n" <<
		"      " << s << "y" << s << ": 90\n" <<
		"    },\n" <<
		"    " << s << "facing=south,half=top,shape=inner_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180,\n" <<
		"      " << s << "y" << s << ": 180\n" <<
		"    },\n" <<
		"    " << s << "facing=south,half=top,shape=outer_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180,\n" <<
		"      " << s << "y" << s << ": 90\n" <<
		"    },\n" <<
		"    " << s << "facing=south,half=top,shape=outer_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180,\n" <<
		"      " << s << "y" << s << ": 180\n" <<
		"    },\n" <<
		"    " << s << "facing=south,half=top,shape=straight" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180,\n" <<
		"      " << s << "y" << s << ": 90\n" <<
		"    },\n" <<



		"    " << s << "facing=west,half=bottom,shape=inner_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "y" << s << ": 90\n" <<
		"    },\n" <<
		"    " << s << "facing=west,half=bottom,shape=inner_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "y" << s << ": 180\n" <<
		"    },\n" <<
		"    " << s << "facing=west,half=bottom,shape=outer_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "y" << s << ": 90\n" <<
		"    },\n" <<
		"    " << s << "facing=west,half=bottom,shape=outer_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "y" << s << ": 180\n" <<
		"    },\n" <<
		"    " << s << "facing=west,half=bottom,shape=straight" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "y" << s << ": 180\n" <<
		"    },\n" <<



		"    " << s << "facing=west,half=top,shape=inner_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180,\n" <<
		"      " << s << "y" << s << ": 180\n" <<
		"    },\n" <<
		"    " << s << "facing=west,half=top,shape=inner_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_inner" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180,\n" <<
		"      " << s << "y" << s << ": 270\n" <<
		"    },\n" <<
		"    " << s << "facing=west,half=top,shape=outer_left" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180,\n" <<
		"      " << s << "y" << s << ": 180\n" <<
		"    },\n" <<
		"    " << s << "facing=west,half=top,shape=outer_right" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180,\n" <<
		"      " << s << "y" << s << ": 270\n" <<
		"    },\n" <<
		"    " << s << "facing=west,half=top,shape=straight" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << stair[0] << "_outer" << s << ",\n" <<
		"      " << s << "uvlock" << s << ": true,\n" <<
		"      " << s << "x" << s << ": 180,\n" <<
		"      " << s << "y" << s << ": 180\n" <<
		"    }\n" <<
		"  }\n" <<
		"}";
	blockstate.close();

	std::ofstream model("Assets/Models (Blocks)/" + stair[0] + ".json");
	model <<
		"{\n" <<
		"  " << s << "parent" << s << ": " << s << "minecraft:block/stairs" << s << ",\n" <<
		"  " << s << "textures" << s << ": {\n" <<
		"    " << s << "bottom" << s << ": " << s << modID << ":block/" << stairTex[0] << s << ",\n" <<
		"    " << s << "side" << s << ": " << s << modID << ":block/" << stairTex[1] << s << ",\n" <<
		"    " << s << "top" << s << ": " << s << modID << ":block/" << stairTex[2] << s << "\n" <<
		"  }\n" <<
		"}";
	model.close();

	std::ofstream modelInner("Assets/Models (Blocks)/" + stair[0] + "_inner.json");
	modelInner <<
		"{\n" <<
		"  " << s << "parent" << s << ": " << s << "minecraft:block/inner_stairs" << s << ",\n" <<
		"  " << s << "textures" << s << ": {\n" <<
		"    " << s << "bottom" << s << ": " << s << modID << ":block/" << stairTex[0] << s << ",\n" <<
		"    " << s << "side" << s << ": " << s << modID << ":block/" << stairTex[1] << s << ",\n" <<
		"    " << s << "top" << s << ": " << s << modID << ":block/" << stairTex[2] << s << "\n" <<
		"  }\n" <<
		"}";
	modelInner.close();

	std::ofstream modelOuter("Assets/Models (Blocks)/" + stair[0] + "_outer.json");
	modelOuter <<
		"{\n" <<
		"  " << s << "parent" << s << ": " << s << "minecraft:block/outer_stairs" << s << ",\n" <<
		"  " << s << "textures" << s << ": {\n" <<
		"    " << s << "bottom" << s << ": " << s << modID << ":block/" << stairTex[0] << s << ",\n" <<
		"    " << s << "side" << s << ": " << s << modID << ":block/" << stairTex[1] << s << ",\n" <<
		"    " << s << "top" << s << ": " << s << modID << ":block/" << stairTex[2] << s << "\n" <<
		"  }\n" <<
		"}";
	modelOuter.close();

	std::ofstream itemModel("Assets/Models (Items)/" + stair[0] + ".json");
	itemModel <<
		"{\n" <<
		"  " << s << "parent" << s << ": " << s << modID << ":block/" << stair[0] << s << "\n" <<
		"}";
	itemModel.close();

	return 0;
}