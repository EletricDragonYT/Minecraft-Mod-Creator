#include <iostream>
#include <fstream>

#include "Main.h"
#include "Properties.h"
#include "Names.h"

std::ofstream english;

std::ofstream blockInit;
std::ofstream blockItemInit;

int blockBlock() {

	english.open("Assets/Langs/en_us.json", std::ios_base::app);

	english <<
		"block." << modID << "." << block[0] << s << ": " << s << block[2] << s << "\n";

	//
	//
	//

	blockInit.open("Assets/Registry/BlockInit.txt", std::ios_base::app);

	blockInit <<
		"public static final RegistryObject<Block> " << block[1] << " = BLOCKS.register(" << s << block[0] << s << ",\n" <<
		"        () -> new Block(BlockBehaviour.Properties.of()\n";

	if (isAir == true) {

		blockInit <<
			"                    .air()\n";
	}
	if (isInstrument == true) {

		blockInit <<
			"                    .instrument(" << instrument << ")\n";
	}
	if (isViewBlocking == true) {

		blockInit <<
			"                    .isViewBlocking(" << viewBlocking << ")\n";
	}
	if (isSuffocating == true) {

		blockInit <<
			"                    .isSuffocating(" << suffocating << ")\n";
	}
	if (isRedstoneConductor == true) {

		blockInit <<
			"                    .isRedstoneConductor(" << redstoneConductor << ")\n";
	}
	if (checkValidSpawn == true) {

		if (isValidSpawn == true) {

			blockInit <<
				"                    .isValidSpawn(" << validSpawn << ")\n";
		}
	}
	if (isLiquid == true) {

		blockInit <<
			"                    .liquid()\n";
	}
	if (isReplaceable == true) {

		blockInit <<
			"                    .replaceable()\n";
	}

	if (hasDestroyTime == true) {

		blockInit <<
			"                    .destroyTime(" << destroyTime << ")\n";
	}
	if (hasDropsLike == true) {

		blockInit <<
			"                    .dropsLike()\n";
	}
	if (hasDynamicShape == true) {

		blockInit <<
			"                    .dynamicShape()\n";
	}
	if (hasExplosionResistance == true) {

		blockInit <<
			"                    .explosionResistance(" << explosionResistance << ")\n";
	}
	if (hasEmissiveRendering == true) {

		blockInit <<
			"                    .emissiveRendering(" << emmisiveRendering << ")\n";
	}
	if (hasFriction == true) {

		blockInit <<
			"                    .friction(" << friction << ")\n";
	}
	if (hasForceSolidOn == true) {

		blockInit <<
			"                    .forceSolidOn()\n";
	}
	if (hasForceSolidOff == true) {

		blockInit <<
			"                    .forceSolidOff()\n";
	}
	if (hasPostProcess == true) {

		blockInit <<
			"                    .hasPostProcess(" << postProcess << ")\n";
	}
	if (hasIgnitedByLava == true) {

		blockInit <<
			"                    .ignitedByLava()\n";
	}
	if (hasInstaBreak == true) {

		blockInit <<
			"                    .instabreak()\n";
	}
	if (hasJumpFactor == true) {

		blockInit <<
			"                    .jumpFactor(" << jumpFactor << ")\n";
	}
	if (hasLightLevel == true) {

		blockInit <<
			"                    .lightLevel(" << lightLevel << ")\n";
	}
	if (hasMapColor == true) {

		if (mapColorType == true) {

			blockInit <<
				"                    .mapColor(" << mapColor << ")\n";
		}
		else if (mapColorType == false) {

			blockInit <<
				"                    .mapColor(" << altMapColor << ")\n";
		}
	}
	if (hasNoBreakParticles == true) {

		blockInit <<
			"                    .noParticlesOnBreak()\n";
	}
	if (hasNoCollission == true) {

		blockInit <<
			"                    .noCollission()\n";
	}
	if (hasNoOcclusion == true) {

		blockInit <<
			"                    .noOcclusion()\n";
	}
	if (hasNoLootTable == true) {

		blockInit <<
			"                    .noLootTable()\n";
	}
	if (hasOffset == true) {

		blockInit <<
			"                    .offsetType(" << offsetType << ")\n";
	}
	if (hasPushReaction == true) {

		blockInit <<
			"                    .pushReaction(" << pushReaction << ")\n";
	}
	if (hasRandomTicks == true) {

		blockInit <<
			"                    .randomTicks()\n";
	}
	if (hasRequiredFeatures == true) {

		blockInit <<
			"                    .requiredFeatures(" << requiredFeatures << ")\n";
	}
	if (hasRequiredTool == true) {

		blockInit <<
			"                    .requiresCorrectToolForDrops()\n";
	}
	if (hasSound == true) {

		blockInit <<
			"                    .sound(" << soundType << ")\n";
	}
	if (hasSpeedFactor == true) {

		blockInit <<
			"                    .speedFactor(" << speedFactor << ")\n";
	}
	if (hasStrength == true) {

		blockInit <<
			"                    .strength(" << strength << ")\n";
	}

	blockInit <<
		"));\n\n";

	return 0;
}

int blockItem() {

	blockItemInit.open("Assets/Registry/BlockItemInit.txt", std::ios_base::app);

	blockItemInit <<
		"public static final RegistryObject<BlockItem> " << block[1] << " = ITEMS.register(" << s << block[0] << s << ",\n" <<
		"        () -> new BlockItem(Blocks." << block[1] << ".get(), new Item.Properties()\n";

	if (isFireResistant == true) {

		blockItemInit <<
			"                    .fireResistant()\n";
	}
	if (hasStackSize == true) {

		blockItemInit <<
			"                    .stacksTo(" << stackSize << ")\n";
	}
	if (hasRarity == true) {

		blockItemInit <<
			"                    .rarity(" << rarity << ")\n";
	}

	blockItemInit <<
		"));\n\n";

	return 0;
}

int blockJson() {

	std::ofstream blockstate("Assets/Blockstates/" + block[0] + ".json");
	blockstate <<
		"{\n" <<
		"  " << s << "variants" << s << ": {\n" <<
		"    " << s << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << block[0] << s << "\n" <<
		"    }\n" <<
		"  }\n" <<
		"}";
	blockstate.close();

	std::ofstream model("Assets/Models (Blocks)/" + block[0] + ".json");
	model <<
		"{\n" <<
		"  " << s << "parent" << s << ": " << s << "minecraft:block/cube_all" << s << ", \n" <<
		"  " << s << "textures" << s << ": {\n" <<
		"    " << s << "all" << s << ": " << s << modID << ":block/" << block[0] << s << "\n" <<
		"  }\n" <<
		"}";
	model.close();

	std::ofstream itemModel("Assets/Models (Items)/" + block[0] + ".json");
	itemModel <<
		"{\n" <<
		"  " << s << "parent" << s << ": " << s << modID << ":block/" << block[0] << s << "\n" <<
		"}";
	itemModel.close();

	return 0;
}