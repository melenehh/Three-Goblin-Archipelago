from BaseClasses import Tutorial
from worlds.AutoWorld import WebWorld

from .options import option_groups, option_presets

class ThreeGoblinWebWorld(WebWorld):

    game = "Three Goblin Wobblin"


    theme = "grassFlowers"

    setup_en = Tutorial(
        "Multiworld Setup Guide",
        "A guide to setting up Three Goblin Wobblin for MultiWorld.",
        "English",
        "setup_en.md",
        "setup/en",
        ["meleneh"],
    )

    tutorials = [setup_en]

    option_groups = option_groups
    options_presets = option_presets
