#include <iostream>
#include <fstream>

#include "Main.h"
#include "Properties.h"
#include "Names.h"

std::ofstream slabEnglish;

std::ofstream slabInit;
std::ofstream slabItemInit;

int slabBlock() {

	slabEnglish.open("Assets/Langs/en_us.json", std::ios_base::app);

	slabEnglish <<
		"block." << modID << "." << slab[0] << s << ": " << s << slab[2] << s << "\n";

	//
	//
	//

	slabInit.open("Assets/Registry/BlockInit.txt", std::ios_base::app);

	slabInit <<
		"public static final RegistryObject<Block> " << slab[1] << " = BLOCKS.register(" << s << slab[0] << s << ",\n" <<
		"        () -> new SlabBlock(BlockBehaviour.Properties.of()\n";

	if (isAir == true) {

		slabInit <<
			"                    .air()\n";
	}
	if (isInstrument == true) {

		slabInit <<
			"                    .instrument(" << instrument << ")\n";
	}
	if (isViewBlocking == true) {

		slabInit <<
			"                    .isViewBlocking(" << viewBlocking << ")\n";
	}
	if (isSuffocating == true) {

		slabInit <<
			"                    .isSuffocating(" << suffocating << ")\n";
	}
	if (isRedstoneConductor == true) {

		slabInit <<
			"                    .isRedstoneConductor(" << redstoneConductor << ")\n";
	}
	if (checkValidSpawn == true) {

		if (isValidSpawn == true) {

			slabInit <<
				"                    .isValidSpawn(" << validSpawn << ")\n";
		}
	}
	if (isLiquid == true) {

		slabInit <<
			"                    .liquid()\n";
	}
	if (isReplaceable == true) {

		slabInit <<
			"                    .replaceable()\n";
	}

	if (hasDestroyTime == true) {

		slabInit <<
			"                    .destroyTime(" << destroyTime << ")\n";
	}
	if (hasDropsLike == true) {

		slabInit <<
			"                    .dropsLike()\n";
	}
	if (hasDynamicShape == true) {

		slabInit <<
			"                    .dynamicShape()\n";
	}
	if (hasExplosionResistance == true) {

		slabInit <<
			"                    .explosionResistance(" << explosionResistance << ")\n";
	}
	if (hasEmissiveRendering == true) {

		slabInit <<
			"                    .emissiveRendering(" << emmisiveRendering << ")\n";
	}
	if (hasFriction == true) {

		slabInit <<
			"                    .friction(" << friction << ")\n";
	}
	if (hasForceSolidOn == true) {

		slabInit <<
			"                    .forceSolidOn()\n";
	}
	if (hasForceSolidOff == true) {

		slabInit <<
			"                    .forceSolidOff()\n";
	}
	if (hasPostProcess == true) {

		slabInit <<
			"                    .hasPostProcess(" << postProcess << ")\n";
	}
	if (hasIgnitedByLava == true) {

		slabInit <<
			"                    .ignitedByLava()\n";
	}
	if (hasInstaBreak == true) {

		slabInit <<
			"                    .instabreak()\n";
	}
	if (hasJumpFactor == true) {

		slabInit <<
			"                    .jumpFactor(" << jumpFactor << ")\n";
	}
	if (hasLightLevel == true) {

		slabInit <<
			"                    .lightLevel(" << lightLevel << ")\n";
	}
	if (hasMapColor == true) {

		if (mapColorType == true) {

			slabInit <<
				"                    .mapColor(" << mapColor << ")\n";
		}
		else if (mapColorType == false) {

			slabInit <<
				"                    .mapColor(" << altMapColor << ")\n";
		}
	}
	if (hasNoBreakParticles == true) {

		slabInit <<
			"                    .noParticlesOnBreak()\n";
	}
	if (hasNoCollission == true) {

		slabInit <<
			"                    .noCollission()\n";
	}
	if (hasNoOcclusion == true) {

		slabInit <<
			"                    .noOcclusion()\n";
	}
	if (hasNoLootTable == true) {

		slabInit <<
			"                    .noLootTable()\n";
	}
	if (hasOffset == true) {

		slabInit <<
			"                    .offsetType(" << offsetType << ")\n";
	}
	if (hasPushReaction == true) {

		slabInit <<
			"                    .pushReaction(" << pushReaction << ")\n";
	}
	if (hasRandomTicks == true) {

		slabInit <<
			"                    .randomTicks()\n";
	}
	if (hasRequiredFeatures == true) {

		slabInit <<
			"                    .requiredFeatures(" << requiredFeatures << ")\n";
	}
	if (hasRequiredTool == true) {

		slabInit <<
			"                    .requiresCorrectToolForDrops()\n";
	}
	if (hasSound == true) {

		slabInit <<
			"                    .sound(" << soundType << ")\n";
	}
	if (hasSpeedFactor == true) {

		slabInit <<
			"                    .speedFactor(" << speedFactor << ")\n";
	}
	if (hasStrength == true) {

		slabInit <<
			"                    .strength(" << strength << ")\n";
	}

	slabInit <<
		"));\n\n";

	return 0;
}

int slabItem() {

	slabItemInit.open("Assets/Registry/BlockItemInit.txt", std::ios_base::app);

	slabItemInit <<
		"public static final RegistryObject<BlockItem> " << slab[1] << " = ITEMS.register(" << s << slab[0] << s << ",\n" <<
		"        () -> new BlockItem(Blocks." << slab[1] << ".get(), new Item.Properties()\n";

	if (isFireResistant == true) {

		slabItemInit <<
			"                    .fireResistant()\n";
	}
	if (hasStackSize == true) {

		slabItemInit <<
			"                    .stacksTo(" << stackSize << ")\n";
	}
	if (hasRarity == true) {

		slabItemInit <<
			"                    .rarity(" << rarity << ")\n";
	}

	slabItemInit <<
		"));\n\n";

	return 0;
}

int slabJson() {

	std::ofstream blockstate("Assets/Blockstates/" + slab[0] + ".json");
	blockstate <<
		"{\n" <<
		"  " << s << "variants" << s << ": {\n" <<
		"    " << s << "type=bottom" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << slab[0] << s << "\n" <<
		"    },\n" <<
		"    " << s << "type=double" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << block[0] << s << "\n" <<
		"    },\n" <<
		"    " << s << "type=top" << s << ": {\n" <<
		"      " << s << "model" << s << ": " << s << modID << ":block/" << slab[0] << "_top" << s << "\n" <<
		"    }\n" <<
		"  }\n" <<
		"}";
	blockstate.close();

	std::ofstream model("Assets/Models (Blocks)/" + slab[0] + ".json");
	model <<
		"{\n" <<
		"  " << s << "parent" << s << ": " << s << "minecraft:block/slab" << s << ",\n" <<
		"  " << s << "textures" << s << ": {\n" <<
		"    " << s << "bottom" << s << ": " << s << modID << ":block/" << slabTex[0] << s << ",\n" <<
		"    " << s << "side" << s << ": " << s << modID << ":block/" << slabTex[1] << s << ",\n" <<
		"    " << s << "top" << s << ": " << s << modID << ":block/" << slabTex[2] << s << "\n" <<
		"  }\n" <<
		"}";
	model.close();

	std::ofstream modelTop("Assets/Models (Blocks)/" + slab[0] + "_top.json");
	modelTop <<
		"{\n" <<
		"  " << s << "parent" << s << ": " << s << "minecraft:block/slab_top" << s << ",\n" <<
		"  " << s << "textures" << s << ": {\n" <<
		"    " << s << "bottom" << s << ": " << s << modID << ":block/" << slabTex[0] << s << ",\n" <<
		"    " << s << "side" << s << ": " << s << modID << ":block/" << slabTex[1] << s << ",\n" <<
		"    " << s << "top" << s << ": " << s << modID << ":block/" << slabTex[2] << s << "\n" <<
		"  }\n" <<
		"}";
	modelTop.close();

	std::ofstream itemModel("Assets/Models (Items)/" + slab[0] + ".json");
	itemModel <<
		"{\n" <<
		"  " << s << "parent" << s << ": " << s << modID << ":block/" << slab[0] << s << "\n" <<
		"}";
	itemModel.close();

	return 0;
}