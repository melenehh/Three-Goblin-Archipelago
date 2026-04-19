from dataclasses import dataclass

from Options import Choice, OptionGroup, PerGameCommonOptions, Range, Toggle

class ProgressiveKeys(Toggle):
    """
    Receive Individual Keys, which may encourage different logic paths through the level shortcuts
    or Progressive Keys for a more standard playthrough
    """

    display_name = "Progressive Keys"


class HardMode(Toggle):
    """
    Hats will be considered filler in logic resulting in harder AI detection
    """

    display_name = "Hard Mode"



# class PretzelsToClear(Range):
#     """
#     How many pretzels will be required to unlock the goal level.
#     """
#
#     display_name = "Pretzels for Goal Unlock"
#
#     range_start = 0
#     range_end = 30
#     default = 0


@dataclass
class ThreeGoblinOptions(PerGameCommonOptions):
    progressive_keys: ProgressiveKeys
    hard_mode: HardMode

option_groups = [
    OptionGroup(
        "Gameplay Options",
        [ProgressiveKeys, HardMode],
    )
]

option_presets = {
    "default": {
        "hard_mode": False,
        "progressive_keys": False,
    }
}
