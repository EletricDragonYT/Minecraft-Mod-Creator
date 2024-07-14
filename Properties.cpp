#include <iostream>

#include "Main.h"

/*
// Custom
bool createSidewaysStair = false;
bool createSidewaysSlab = false;
bool createSidewaysFence = false;
bool createSidewaysFenceGate = false;
bool createSidewaysWall = false;
bool createSidewaysWallGate = false;
bool createSidewaysDoor = false;
bool createSidewaysTrapdoor = false;

bool createWallGate = false;
bool createHangingTorch = false;
bool createWallLantern = false;
*/

// Block Loot Table Properties



// Block Type Properties

bool isAir = false;								// Determines if the .air() property is applied (true) or not (false)
    // This is a property only applied to air blocks.
bool isInstrument = false;                      // Determines if the .instrument() property is applied (true) or not (false)
    // If applied, when the block is placed underneath a note block it will alter the note blocks sound based on the instrument.
    // There are a multitude of instrument sound types, those are:
    // HARP
    // BASEDRUM
    // SNARE
    // HAT
    // BASS
    // FLUTE
    // BELL
    // GUITAR
    // CHIME
    // XYLOPHONE
    // IRON_XYLOPHONE
    // COW_BELL
    // DIDGERIDOO
    // BIT
    // BANJO
    // PLING
    // ZOMBIE
    // SKELETON
    // CREEPER
    // DRAGON
    // WITHER_SKELETON
    // PIGLIN
    // CUSTOM_HEAD
bool isViewBlocking = false;                    // Determines if the .isViewBlocking() property is applied (true) or not (false)
// If applied with the value of {always} the block will block the entities vision if placed over their head hit box.
// If applied with the value of {never} the block will allow the entity to see outside of it if placed over their head hit box.
// 
// For this property to be applied property (for the values to work) the following code needs to be added at the bottom of the
//    block registry, this is used to give the block registry access to the value. The available values are:
// {always} or {never}
// 
// private static boolean never(BlockState state, BlockGetter getter, BlockPos pos) {
//    return (boolean) false;
// }
// 
// private static boolean always(BlockState state, BlockGetter getter, BlockPos pos) {
//    return (boolean) true;
// }
bool isSuffocating = false;                     // Determines if the .isSuffocating() property is applied (true) or not (false)
// If applied with the value of {always} the block will suffocate entities if placed over their head hit box.
// If applied with the value of {never} the block will not suffocate entities if placed over their head hit box.
// 
// For this property to be applied property (for the values to work) the following code needs to be added at the bottom of the
//    block registry, this is used to give the block registry access to the value. The available values are:
// {always} or {never}
// 
// private static boolean never(BlockState state, BlockGetter getter, BlockPos pos) {
//    return (boolean) false;
// }
// 
// private static boolean always(BlockState state, BlockGetter getter, BlockPos pos) {
//    return (boolean) true;
// }
bool isRedstoneConductor = false;               // Determines if the .isRedstoneConductor() property is applied (true) or not (false)
// If applied with the value of {always} the block is able to transfer a redstone signal through itself to redstone next to it.
// If applied with the value of {never} the block is unable to transfer a redstone signal through itself to redstone next to it.
// 
// For this property to be applied property (for the values to work) the following code needs to be added at the bottom of the
//    block registry, this is used to give the block registry access to the value. The available values are:
// {always} or {never}
// 
// private static boolean never(BlockState state, BlockGetter getter, BlockPos pos) {
//    return (boolean) false;
// }
// 
// private static boolean always(BlockState state, BlockGetter getter, BlockPos pos) {
//    return (boolean) true;
// }
bool checkValidSpawn = false;                   // Determines if a Valid Spawn check is done, if set to true it enables the below property.
bool isValidSpawn = false;                      // Determines if the .isValidSpawn() property is applied (true) or not (false)
// If applied with the value of {always} mobs are able to spawn on top of the block.
// If applied with the value of {never} mobs are not able to spawn on top of the block.
// If applied with the value of {ocelotOrParrot} only ocelots and/or parrots are able to spawn on top of the block.
// If applied with the value of {entitySpecific} only the specified mobs are able to spawn on top of the block.
// 
// For this property to be applied property (for the values to work) the following code needs to be added at the bottom of the
//    block registry, this is used to give the block registry access to the value. The available values are:
// {always}, {never}, {ocelotOrParrot}, or {entitySpecific}
// 
// private static boolean never(BlockState state, BlockGetter getter, BlockPos pos) {
//    return (boolean) false;
// }
// 
// private static boolean always(BlockState state, BlockGetter getter, BlockPos pos) {
//    return (boolean) true;
// }
// 
// private static boolean ocelotOrParrot(BlockState state, BlockGetter getter, BlockPos pos) {
//    return (boolean)true;
// }
// 
// entitySpecific method:
//    isValidSpawn((p_187426_, p_187427_, p_187428_, p_187429_) -> {return p_187429_ == EntityType.POLAR_BEAR;})
bool isLiquid = false;                          // Determines if the .liquid() property is applied (true) or not (false)
// This is a property only applied to liquids.
bool isReplaceable = false;                     // Determines if the .replaceable() property is applied (true) or not (false)
    // Blocks with this property can be replaced if another block is placed on to or inside it (like liquids).

bool hasDestroyTime = false;					// Determines if the .destroyTime() property is applied (true) or not (false)
// The Destroy Time is the first property nested in the .strength() property and is the time it takes for the block to break.
bool hasDropsLike = false;						// Determines if the .dropsLike() property is applied (true) or not (false)
// .dropsLike() is not used by Forge and as such wont be applied if this bool is set to true.
// This property only works with the base game because its value is that of a block within the registry,
//    but in Forge that causes an error. This error is due to the value needing to be a {Block} value but
//    inside Forge the blocks within the block registry are {RegistryObject<>} values.
bool hasDynamicShape = false;					// Determines if the .dynamicShape() property is applied (true) or not (false)
// This property is only used by a select few blocks, those blocks are:
// Moving Pistons(?)						    | MovingPistonBlock
// Bamboo									    | BambooStalkBlock
// Scaffholding								    | ScaffholdingBlock
// Powder Snow								    | PowderSnowBlock
// Pointed Dripstone						    | PointedDripstoneBlock
// Shulker Box								    | ShulkerBoxBlock
// - The Shulker Box has the .dynamicShape() property through its ShulkerBoxBlock initialization/creation.
bool hasExplosionResistance = false;			// Determines if the .explosionResistance() property is applied (true) or not (false)
// The Explosion Resistance is the second property nested in the .strength() property and is a blocks resistance to explosions.
bool hasEmissiveRendering = false;				// Determines if the .emissiveRendering() property is applied (true) or not (false)
    // For this property to be applied property (for the values to work) the following code needs to be added at the bottom of the
    //    block registry, this is used to give the block registry access to the value. The available values are:
    // {always} or {never}
    // 
    // private static boolean never(BlockState state, BlockGetter getter, BlockPos pos) {
    //    return (boolean) false;
    // }
    // 
    // private static boolean always(BlockState state, BlockGetter getter, BlockPos pos) {
    //    return (boolean) true;
    // }
bool hasFriction = false;                       // Determines if the .friction() property is applied (true) or not (false)
    // When this property is applied the block becomes slippery, this property accepts a value between 0 and 1.
    // The lower the value (closer to 0) the sticker the block is, but the higher the value (closer to 1) the slippier the block is.
bool hasForceSolidOn = false;                   // Determines if the .forceSolidOn() property is applied (true) or not (false)
    // This property is only used by a select few blocks, those blocks are:
    // Amethyst Clusters                        | AmethystClusterBlock
    // Pointed Dripstone                        | PointedDripstoneBlock
    // Fences                                   | FenceBlock
    // Fence Gates                              | FenceGateBlock
    // Walls                                    | WallBlock
    // Signs                                    | StandingSignBlock and WallSignBlock
    // Hanging Signs                            | CeilingHangingSignBlock and WallHangingSignBlock
    // Lantern                                  | LanternBlock
    // Chains                                   | ChainBlock
    // Cobweb                                   | WebBlock
    // Coral Blocks                             | CoralBlock (Becomes Dead Coral, which is a normal Block)
    // Dead Coral                               | BaseCoralPlantBlock
    // Dead Coral Fan                           | BaseCoralFanBlock and BaseCoralWallFanBlock
    // Coral                                    | CoralPlantBlock
    // Coral Fan                                | CoralFanBlock and CoralWallFanBlock
    // Pressure Plates                          | PressurePlateBlock
    // Weighted Pressure Plates                 | WeightedPressurePlateBlock
    // Lightning Rods                           | LightningRodBlock
    // Moving Pistons(?)                        | MovingPistonBlock
    // Shulker Box                              | ShulkerBoxBlock
    // - The Shulker Box has the .forceSolidOn() property through its ShulkerBoxBlock initialization/creation.
    // Bell                                     | BellBlock
    // Conduit                                  | ConduitBlock
    // Banners                                  | BannerBlock and WallBannerBlock
    // Turtle Eggs                              | TurtleEggBlock
    // Bamboo                                   | BambooSaplingBlock and BambooStalkBlock
    // Sculk Veins                              | SculkVeinBlock
    // Cakes                                    | CakeBlock
bool hasForceSolidOff = false;                  // Determines if the .forceSolidOff() property is applied (true) or not (false)
    // Snow Layers                              | SnowLayerBlock
    // Ladders                                  | LadderBlock
    // End Rod                                  | EndRodBlock
    // Azalea Bushes                            | AzaleaBlock
    // Big Dripleaf                             | BigDripLeafBlock
    // Chorus Flower                            | ChorusPlantBlock and ChorusFlowerBlock
bool hasPostProcess = false;                    // Determines if the .hasPostProcess() property is applied (true) or not (false)
    // Unsure of the application of this property.
    // Mushroom Blocks replace a face with a different texture if the same type of Mushroom Block is placed on that face.
    // Magma Blocks dont seem to change when placed next to each other, although the texture seems to match but so does Prismarine Blocks.
    // 
    // For this property to be applied property (for the values to work) the following code needs to be added at the bottom of the
    //    block registry, this is used to give the block registry access to the value. The available values are:
    // {always} or {never}
    // 
    // private static boolean never(BlockState state, BlockGetter getter, BlockPos pos) {
    //    return (boolean) false;
    // }
    // 
    // private static boolean always(BlockState state, BlockGetter getter, BlockPos pos) {
    //    return (boolean) true;
    // }
bool hasIgnitedByLava = false;                  // Determines if the .ignitedByLava() property is applied (true) or not (false)
    // If this property is applied the block can be lit on fire by blocks of the LiquidBlock type that have the {Fluids.LAVA} property.
bool hasInstaBreak = false;                     // Determines if the .instabreak() property is applied (true) or not (false)
    // With this property the block can be broken instantly, but this property is overridden by the .strength() property.
bool hasJumpFactor = false;                     // Determines if the .jumpFactor() property is applied (true) or not (false)
    // Changes how high(?) entities can jump when jumping from on top of the block.
bool hasLightLevel = false;                     // Determines if the .lightLevel() property is applied (true) or not (false)
    // If applied the block will produce a light level based on the lightLevel value between 0 and 15.
bool hasMapColor = false;                       // Determines if the .mapColor() property is applied (true) or not (false)
bool mapColorType = false;                      // Determines which of the two .mapColor() values are used when applied to blocks.
    // The alternate map color uses the map color of a parent block (replace {BLOCK} to the parent block) instead of declaring one.
    // There are a multitude of available values for the map color, those are:
    // NONE                                     or (0)
    // GRASS                                    or (8368696)
    // SAND                                     or (16247203)
    // WOOL                                     or (13092807)
    // FIRE                                     or (16711680)
    // ICE                                      or (10526975)
    // METAL                                    or (10987431)
    // PLANT                                    or (31744)
    // SNOW                                     or (16777215)
    // CLAY                                     or (10791096)
    // DIRT                                     or (9923917)
    // STONE                                    or (7368816)
    // WATER                                    or (4210943)
    // WOOD                                     or (9402184)
    // QUARTZ                                   or (16776437)
    // COLOR_ORANGE                             or (14188339)
    // COLOR_MAGENTA                            or (11685080)
    // COLOR_LIGHT_BLUE                         or (6724056)
    // COLOR_YELLOW                             or (15066419)
    // COLOR_LIGHT_GREEN                        or (8375321)
    // COLOR_PINK                               or (15892389)
    // COLOR_GRAY                               or (5000268)
    // COLOR_LIGHT_GRAY                         or (10066329)
    // COLOR_CYAN                               or (5013401)
    // COLOR_PURPLE                             or (8339378)
    // COLOR_BLUE                               or (3361970)
    // COLOR_BROWN                              or (6704179)
    // COLOR_GREEN                              or (6717235)
    // COLOR_RED                                or (10040115)
    // COLOR_BLACK                              or (1644825)
    // GOLD                                     or (16445005)
    // DIAMOND                                  or (6085589)
    // LAPIS                                    or (4882687)
    // EMERALD                                  or (55610)
    // PODZOL                                   or (8476209)
    // NETHER                                   or (7340544)
    // TERRACOTTA_WHITE                         or (13742497)
    // TERRACOTTA_ORANGE                        or (10441252)
    // TERRACOTTA_MAGENTA                       or (9787244)
    // TERRACOTTA_LIGHT_BLUE                    or (7367818)
    // TERRACOTTA_YELLOW                        or (12223780)
    // TERRACOTTA_LIGHT_GREEN                   or (6780213)
    // TERRACOTTA_PINK                          or (10505550)
    // TERRACOTTA_GRAY                          or (3746083)
    // TERRACOTTA_LIGHT_GRAY                    or (8874850)
    // TERRACOTTA_CYAN                          or (5725276)
    // TERRACOTTA_PURPLE                        or (8014168)
    // TERRACOTTA_BLUE                          or (4996700)
    // TERRACOTTA_BROWN                         or (4993571)
    // TERRACOTTA_GREEN                         or (5001770)
    // TERRACOTTA_RED                           or (9321518)
    // TERRACOTTA_BLACK                         or (2430480)
    // CRIMSON_NYLIUM                           or (12398641)
    // CRIMSON_STEM                             or (9715553)
    // CRIMSON_HYPHAE                           or (6035741)
    // WARPED_NYLIUM                            or (1474182)
    // WARPED_STEM                              or (3837580)
    // WARPED_HYPHAE                            or (5647422)
    // WARPED_WART_BLOCK                        or (1356933)
    // DEEPSLATE                                or (6579300)
    // RAW_IRON                                 or (14200723)
    // GLOW_LICHEN                              or (8365974)
bool hasNoBreakParticles = false;               // Determines if the .noParticlesOnBreak() property is applied (true) or not (false)
    // When this property is applied, the block will not generate particles when it is broken.
bool hasNoCollission = false;                   // Determines if the .noCollission() property is applied (true) or not (false)
    // Blocks with this property can be moved through by entities, but can still be interacted with.
bool hasNoOcclusion = false;                    // Determines if the .noOcclusion() property is applied (true) or not (false)
    // Unsure on what exactly this property does.
bool hasNoLootTable = false;                    // Determines if the .noLootTable() property is applied (true) or not (false)
    // Blocks with this property will not drop anything when broken (unsure if JSON files override this or not).
bool hasOffset = false;                         // Determines if the .offsetType() property is applied (true) or not (false)
    // Blocks with this property will be offset in a certain direction when placed within the world.
    // The available values are:
    // {NONE}, {XZ}, and {XYZ}
bool hasPushReaction = false;                   // Determines if the .pushReaction() property is applied (true) or not (false)
    // Blocks with this property will react differently when pushed or pulled by a piston. The available reactions are:
    // NORMAL                                   // Allows the block to be pushed and pulled.
    // DESTROY                                  // Destroys the block when pushed by a piston, does not allow the block to be pulled.
    // BLOCK                                    // Does not allow the block to be pushed or pulled.
    // IGNORE                                   // Only allows the block to be pushed, but not pulled.
    // PUSH_ONLY                                // Only allows the block to be pushed, but not pulled.
bool hasRandomTicks = false;                    // Determines if the .randomTicks() property is applied (true) or not (false)
    // When this property is applied, the block will randomly tick, unsure what this does exactly.
bool hasRequiredFeatures = false;               // Determines if the .requiredFeatures() property is applied (true) or not (false)
    // Only used when initializing certain block types are the bottom of the file, those block types are:
    // woodenButton
    // flowerPot
bool hasRequiredTool = false;                   // Determines if the .requiresCorrectToolForDrops() property is applied (true) or not (false)
    // Blocks with this property require the Tool Type and Tool Material Type of the JSON files they are placed inside of.
    // Tool Type:
    //    tags/blocks/mineable/hoe              // Blocks efficiently broken by hoes.
    //    tags/blocks/mineable/shovel           // Blocks efficiently broken by shovels.
    //    tags/blocks/mineable/pickaxe          // Blocks efficiently broken by pickaxes.
    //    tags/blocks/mineable/axe              // Blocks efficiently broken by axes.
    //    tags/blocks/sword_efficient           // Blocks efficiently broken by swords.
    // Tool Material Type
    //    tags/blocks/needs_stone_tool          // Blocks which require Stone Tools to drop.
    //    tags/blocks/needs_iron_tool           // Blocks which require Iron Tools to drop.
    //    tags/blocks/needs_diamond_tool        // Blocks which require Diamond Tools to drop.
bool hasSound = false;                          // Determines if the .sound() property is applied (true) or not (false)
    // Blocks with this property change the sound that plays when interacting with the block. The available sounds are:
    // 
bool hasSpeedFactor = false;                    // Determines if the .speedFactor() property is applied (true) or not (false)
    // This property changes how fast an entity can move while on top of this block.
bool hasStrength = false;                       // Determines if the .strength() property is applied (true) or not (false)
    // Determines the destroyTime (first value) and explosionResistance (second value) of a block in one setting.

// Block Properties

std::string defaultBlockState = "BLOCK.get().defaultBlockState(), ";

std::string instrument = "NoteBlockInstrument.BASS";
std::string viewBlocking = "Blocks::never";
std::string suffocating = "Blocks::never";
std::string redstoneConductor = "Blocks::never";
std::string validSpawn = "Blocks::never";

std::string destroyTime = "0f";
std::string explosionResistance = "0f";
std::string emmisiveRendering = "Blocks::never";
std::string friction = "0f";
std::string postProcess = "Blocks::never";
std::string jumpFactor = "0f";
std::string lightLevel = "(p_50755_) -> {return 0;}";
std::string mapColor = "MapColor.STONE";
std::string altMapColor = "BLOCK.defaultMapColor()";
std::string offsetType = "BlockBehaviour.OffsetType.NONE";
std::string pushReaction = "PushReaction.NORMAL";
std::string requiredFeatures = "featureFlag";
std::string soundType = "SoundType.STONE";
std::string speedFactor = "0f";
std::string strength = "0f, 0f";

// Item Type Properties

bool isAirItem = false;                         // Used by Air blocks.
    // This is only used for the Air block, unsure on its actual usage.
    // Code Example
    //  public static final Item AIR = registerBlock(Blocks.AIR, new AirItem(Blocks.AIR, new Item.Properties()));
bool isBlockItem = false;                       // The default block item type.
    //  Used by most blocks within Forge, only used on a select few in Vanilla.
bool isDoubleHighBlockItem = false;             // Used by two block tall blocks.
    // This item type used by two tall blocks in Vanilla, unsure if Forge really uses this type.
    // Blocks which use this item type:
    //  Small Dripleafs
    //  Sunflower
    //  Lilac
    //  Rose Bush
    //  Peony
    //  Tall Grass
    //  Large Fern
    //  Iron Door
    //  Wooden Doors
    //      Doors (in Infinity) use the base BlockItem item type.
bool isGameMasterBlockItem = false;             // Used by specific operator blocks.
    // This item type is used by blocks which are used by operators in vanilla, unsure if Forge really uses this type.
    // Blocks which use this item type.
    //  Command Block
    //  Chain Command Block
    //  Repeating Command Block
    //  Structure Block
    //  Jigsaw Block
bool isItemNameBlockItem = false;               // Used by items which place blocks.
    // This item type is used by items which place a certain block in vanilla, unsure if Forge really uses this type.
    // Blocks which use this item type.         Block - Item.
    //  Redstone Wire                           / Redstone Dust
    //  Tripwire                                / String
    //  Wheat                                   / Wheat Seeds
    //  Carrots                                 / Carrot
    //  Potatoes                                / Potato
    //  Cocoa                                   / Cocoa Beans
    //  Melon Stem                              / Melon Seeds
    //  Pumpkin Stem                            / Pumpkin Seeds
    //  Nether Wart                             / Nether Wart
    //  Torchflower Crop                        / Torchflower Seeds
    //  Pitcher Crop                            / Pitcher Pod
    //  Beetroots                               / Beetroot Seeds
    //  Sweet Berry Bush                        / Sweet Berries
    //  Cave Vines                              / Glow Berries
bool isPlaceOnWaterBlockItem = false;           // Used by water top blocks.
    // This item type is used by blocks which can be placed on top of water in vanilla, unsure if Forge really uses this type.
    // Blocks which use this item type.
    //  Lily Pad
    //  Frogspawn
bool isScaffoldingBlockItem = false;            // Used by Scaffholding Blocks.
    // This item type is used by scaffholding blocks in vanilla, unsure if Forge really uses this type.
    // Blocks which use this item type.
    //  Scaffholding
bool isStandingAndWallBlockItem = false;        // Used by wall and floor blocks.
    // This item type is used by blocks which can be placed on the floor and wall in vanilla, unsure if Forge really uses this type.
    // Blocks which use this item type.
    //  Torch
    //  Soul Torch
    //  Redstone Torch
    //  Coral Fans
    //  Dead Coral Fans
    //  Skeleton Skull
    //  Wither Skeleton Skull
    //  Zombie Head
    //  Creeper Head
    //  Piglin Head
    //  Ender Dragon Head

bool isDyeableHorseArmorItem = false;
bool isHorseArmorItem = false;                  // Used by Horse Armor items.
    // When declaring horse armor there are two 
bool isDyeableArmorItem = false;                // Used by Dyeable (Leather) Armor items.
    // When declaring dyeable armor there are specific properties which need to be determined.
    // Declared properties:
    //  new ArmorItem(ArmorMaterials.MATERIAL, ArmorItem.Type.TYPE, new Item.Properties())
    // The vanilla MATERIALs are:
    //  TURTLE
    //  LEATHER
    //  CHAIN
    //  IRON
    //  GOLD
    //  DIAMOND
    //  NETHERITE
    // The vanilla TYPEs are:
    //  HELMET
    //  CHESTPLATE
    //  LEGGINGS
    //  BOOTS
bool isArmorItem = false;                       // Used by Armor items.
    // When declaring armor there are specific properties which need to be determined.
    // Declared properties:
    //  new ArmorItem(ArmorMaterials.MATERIAL, ArmorItem.Type.TYPE, new Item.Properties())
    // The vanilla MATERIALs are:
    //  TURTLE
    //  LEATHER
    //  CHAIN
    //  IRON
    //  GOLD
    //  DIAMOND
    //  NETHERITE
    // The vanilla TYPEs are:
    //  HELMET
    //  CHESTPLATE
    //  LEGGINGS
    //  BOOTS
bool isElytraItem = false;                      // Used by Elytras.
    // Elytras do not have any special properties that need to be applied to the item, but can be given a Durability property.
bool isShieldItem = false;                      // Used by Shields
    //  Shields do not have any special properties that need to be applied to the item, but can be given a Durability property.

bool isSwordItem = false;                       // Used by Swords
    // Sword items are split into the Tier, Damage, and Attack Speed.
    // All other attributes are determined by the items tier including:
    // - Tier Level
    // - Durability
    // - Mining Speed
    // - Damage (Added to Swords as bonus damage)
    // - Enchantability
    // - Repair Ingredients
bool isAxeItem = false;                         // Used by Axes
bool isPickaxeItem = false;                     // Used by Pickaxes
bool isShovelItem = false;                      // Used by Shovels
bool isHoeItem = false;                         // Used by Hoes

bool isTridentItem = false;
bool isBowItem = false;
bool isCrossbowItem = false;
bool isShearsItem = false;
bool isBrushItem = false;
bool isFlintAndSteelItem = false;
bool isFishingRodItem = false;
bool isFoodOnAStickItem = false;
bool isSpyglassItem = false;

bool isArmorStandItem = false;
bool isBannerItem = false;
bool isBoatItem = false;
bool isEndCrystalItem = false;
bool isItemFrameItem = false;
bool isMinecartItem = false;
bool isHangingSignItem = false;
bool isHangingEntityItem = false;
bool isSignItem = false;

bool isArrowItem = false;                       // 

bool isBowlFoodItem = false;
bool isBucketItem = false;
bool isBookItem = false;
bool isBundleItem = false;
bool isBonemealItem = false;
bool isBedItem = false;
bool isBottleItem = false;
bool isBannerPatternItem = false;

bool isCompassItem = false;
bool isChorusFruitItem = false;

bool isDyeItem = false;
bool isDebugStickItem = false;
bool isDiscFragmentItem = false;

bool isEggItem = false;
bool isEnchantedGoldenAppleItem = false;
bool isEnderpearlItem = false;
bool isEnderEyeItem = false;
bool isExperienceBottleItem = false;
bool isEmptyMapItem = false;
bool isEnchantedBookItem = false;

bool isFireChargeItem = false;
bool isFireworkRocketItem = false;
bool isFireworkStarItem = false;

bool isGlowInkSacItem = false;

bool isHoneycombItem = false;
bool isHoneyBottleItem = false;

bool isItem = false;
bool isInkSacItem = false;
bool isInstrumentItem = false;

bool isKnowledgeBookItem = false;

bool isLeadItem = false;
bool isLingeringPotionItem = false;

bool isMilkBucketItem = false;
bool isMobBucketItem = false;
bool isMapItem = false;

bool isNameTagItem = false;

bool isPotionItem = false;
bool isPlayerHeadItem = false;

bool isRecordItem = false;

bool isSaddleItem = false;                      // Used by Saddle items.
    // Saddle Items can be placed on Saddleable mobs and allows the player to ride certain mobs.

bool isSolidBucketItem = false;
bool isSnowballItem = false;
bool isSpawnEggItem = false;
bool isSimpleFoiledItem = false;
bool isSplashPotionItem = false;
bool isSpectralArrowItem = false;
bool isSuspiciousStewItem = false;
bool isSmithingTemplateItem = false;

bool isTippedArrowItem = false;

bool isWritableBookItem = false;
bool isWrittenBookItem = false;

// Item Properties

bool isFireResistant = false;                   // Determines if the .fireResistant() property is applied (true) or not (false)
    // Items with this property can not be burnt by fire or lava.
bool hasStackSize = true;                      // Determines if the .stacksTo() property is applied (true) or not (false)
    // Determines the max stack size of an item between 1 and 64.
bool hasRarity = false;                         // Determines if the .rarity() property is applied (true) or not (false)
    // Determines the rarity of an item, this changes the color of the items name.
    // Available Rarities:
    //  COMMON
    //  UNCOMMON
    //  RARE
    //  EPIC

std::string stackSize = "64";
std::string rarity = "Rarity.COMMON";