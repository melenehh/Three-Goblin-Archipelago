from dataclasses import dataclass

from Options import Choice, OptionGroup, PerGameCommonOptions, Range, Toggle


class HardMode(Toggle):
    """
    Hats will be considered filler in logic resulting in harder AI detection
    """

    display_name = "Hard Mode"


class ProgressiveKeys(Toggle):
    """
    Set each individual key as an item, which may encourage different logic paths through the level shortcuts
    or progressive keys for a more standard playthrough
    """

    display_name = "Progressive Keys"


# We must now define a dataclass inheriting from PerGameCommonOptions that we put all our options in.
# This is in the format "option_name_in_snake_case: OptionClassName".
@dataclass
class GoblinOptions(PerGameCommonOptions):
    hard_mode: HardMode
    progressive_keys: ProgressiveKeys

option_groups = [
    OptionGroup(
        "Gameplay Options",
        [HardMode, ProgressiveKeys],
    )
]

# Finally, we can define some option presets if we want the player to be able to quickly choose a specific "mode".
option_presets = {
    "default": {
        "hard_mode": False,
        "progressive_keys": True,
    },
}
