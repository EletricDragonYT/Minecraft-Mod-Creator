This is a very bare-bones mod creator for Minecraft Java Edition.

The mod creator is being developed to create mod features quicker, taking in the users input and outputing information that
can then be copy and pasted into Forge. The features that can be created using this application are only those found within
vanilla Minecraft, though adding modded features would be quite easy. The application is open source, users are free to use
this application, though I do ask to be credited in some manor.

Finished Features:
- BlockSetType: Custom BlockSetTypes can be created, and are used in the creation of custom WoodTypes.
- WoodType: Custom WoodTypes can be created, but require a custom BlockSetType before it can properly be created.

- Block Specific Code:
-- Init: The creation of the block and block item initalization code is complete.
-- Blockstate: The creation of the blocks blockstate json file is complete.
-- Models: The creation of the block and block item model json files is complete.

- Block Types:
-- Block: Complete
-- Stairs: Complete
-- Slabs: Complete

Work in Progress Features:
- English Translation (Block): The English translation only partially complete as proper capitalization does not exist.
- Loot Table (Block): The code for creating a blocks drops when broken have not been started yet.
- Creative Tab (Block): The code for placing a block into a Creative tab has not been started yet.

Planned Features:
- Item Specific Code: While the code for blocks have been ironed out, items have not yet been started.
-- Init: The creation of the items initialization code.
-- Model: The creation of the items model json file.
-- Creative Tab: The code for placing an item into a Creative tab.
- Tag Addition: A system to add features to specific tags and tag groups.
- Texture Converter: A system which takes a conversion image and replaces pixels with new ones to create a new texture.
-- Planned farther in the future or sooner, depends on when I determine that I need it the mode.

Unplanned Features:
- GUI: I have no plans to create a GUI variant of the application as I lack the knowledge to do that, especially in a form that works on all platforms.
- Cross-Platform: If this application does not work on a specific operating software, I have no plans on fixing that as I don't own anything other than Windows.
