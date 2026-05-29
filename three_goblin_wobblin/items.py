from __future__ import annotations

from typing import TYPE_CHECKING

from BaseClasses import Item, ItemClassification

from .BaseID import goblin_base_id

if TYPE_CHECKING:
    from .world import GoblinWorld

ITEM_NAME_TO_ID = {
    "Pretzel": goblin_base_id + 1,

    "Tutorial Key": goblin_base_id + 2,
    "Tutorial Hat": goblin_base_id + 3,

    "Forest Village Bronze Key": goblin_base_id + 4,
    "Forest Village Silver Key": goblin_base_id + 5,
    "Forest Village Gold Key": goblin_base_id + 6,
    "Forest Village Purple Key": goblin_base_id + 7,
    "Forest Village Hat": goblin_base_id + 8,

    "Market Town Bronze Key": goblin_base_id + 9,
    "Market Town Silver Key": goblin_base_id + 10,
    "Market Town Gold Key": goblin_base_id + 11,
    "Market Town Purple Key": goblin_base_id + 12,
    "Market Town Hat": goblin_base_id + 13,

    "Downtown Bronze Key": goblin_base_id + 14,
    "Downtown Silver Key": goblin_base_id + 15,
    "Downtown Gold Key": goblin_base_id + 16,
    "Downtown Purple Key": goblin_base_id + 17,
    "Downtown Hat": goblin_base_id + 18,

    "Royal Castle Bronze Key": goblin_base_id + 19,
    "Royal Castle Silver Key": goblin_base_id + 20,
    "Royal Castle Gold Key": goblin_base_id + 21,
    "Royal Castle Purple Key": goblin_base_id + 22,
    "Royal Castle Hat": goblin_base_id + 23,

    "Clamber Tower Bronze Key": goblin_base_id + 24,
    "Clamber Tower Silver Key": goblin_base_id + 25,
    "Clamber Tower Gold Key": goblin_base_id + 26,
    "Clamber Tower Purple Key": goblin_base_id + 27,
    "Clamber Tower Hat": goblin_base_id + 28,

    "Forest Village Progressive Key": goblin_base_id + 29,
    "Market Town Progressive Key": goblin_base_id + 30,
    "Downtown Progressive Key": goblin_base_id + 31,
    "Royal Castle Progressive Key": goblin_base_id + 32,
    "Clamber Tower Progressive Key": goblin_base_id + 33,
}

DEFAULT_ITEM_CLASSIFICATIONS = {
    "Pretzel": ItemClassification.filler,

    "Tutorial Key": ItemClassification.progression,
    "Tutorial Hat": ItemClassification.filler,

    "Forest Village Bronze Key": ItemClassification.progression,
    "Forest Village Silver Key": ItemClassification.progression,
    "Forest Village Gold Key": ItemClassification.progression,
    "Forest Village Purple Key": ItemClassification.progression,
    "Forest Village Hat": ItemClassification.progression | ItemClassification.useful | ItemClassification.filler,

    "Market Town Bronze Key": ItemClassification.progression,
    "Market Town Silver Key": ItemClassification.progression,
    "Market Town Gold Key": ItemClassification.progression,
    "Market Town Purple Key": ItemClassification.progression,
    "Market Town Hat": ItemClassification.progression | ItemClassification.useful | ItemClassification.filler,

    "Downtown Bronze Key": ItemClassification.progression,
    "Downtown Silver Key": ItemClassification.progression,
    "Downtown Gold Key": ItemClassification.progression,
    "Downtown Purple Key": ItemClassification.progression,
    "Downtown Hat": ItemClassification.progression | ItemClassification.useful | ItemClassification.filler,

    "Royal Castle Bronze Key": ItemClassification.progression,
    "Royal Castle Silver Key": ItemClassification.progression,
    "Royal Castle Gold Key": ItemClassification.progression,
    "Royal Castle Purple Key": ItemClassification.progression,
    "Royal Castle Hat": ItemClassification.progression | ItemClassification.useful | ItemClassification.filler,

    "Clamber Tower Bronze Key": ItemClassification.progression,
    "Clamber Tower Silver Key": ItemClassification.progression,
    "Clamber Tower Gold Key": ItemClassification.progression,
    "Clamber Tower Purple Key": ItemClassification.progression,
    "Clamber Tower Hat": ItemClassification.progression | ItemClassification.useful | ItemClassification.filler,

    "Forest Village Progressive Key": ItemClassification.progression,
    "Market Town Progressive Key": ItemClassification.progression,
    "Downtown Progressive Key": ItemClassification.progression,
    "Royal Castle Progressive Key": ItemClassification.progression,
    "Clamber Tower Progressive Key": ItemClassification.progression | ItemClassification.useful | ItemClassification.filler,
}

class GoblinItem(Item):
    game = "Three Goblin Wobblin"


def get_random_filler_item_name(world: GoblinWorld) -> str:

    return "Pretzel"


def create_item_with_correct_classification(world: GoblinWorld, name: str) -> GoblinItem:

    classification = DEFAULT_ITEM_CLASSIFICATIONS[name]

    if "Hat" in name and world.options.hard_mode:
        classification = ItemClassification.useful | ItemClassification.filler

    return GoblinItem(name, classification, ITEM_NAME_TO_ID[name], world.player)


def create_all_items(world: GoblinWorld) -> None:

    itempool: list[Item] = [
        world.create_item("Tutorial Key"),
        world.create_item("Tutorial Hat"),
        world.create_item("Clamber Tower Hat"),
        world.create_item("Clamber Tower Hat")
    ]
    for i in range(34):
        itempool.append(world.create_item("Pretzel"))
    for i in range(4):
        itempool.append(world.create_item("Forest Village Hat"))
        itempool.append(world.create_item("Market Town Hat"))
        itempool.append(world.create_item("Downtown Hat"))
    for i in range(5):
        itempool.append(world.create_item("Royal Castle Hat"))

    if world.options.progressive_keys:
        for i in range(4):
            itempool.append(world.create_item("Forest Village Progressive Key"))
            itempool.append(world.create_item("Market Town Progressive Key"))
            itempool.append(world.create_item("Downtown Progressive Key"))
            itempool.append(world.create_item("Royal Castle Progressive Key"))
            itempool.append(world.create_item("Clamber Tower Progressive Key"))
    else:
        itempool.append(world.create_item("Forest Village Bronze Key"))
        itempool.append(world.create_item("Forest Village Silver Key"))
        itempool.append(world.create_item("Forest Village Gold Key"))
        itempool.append(world.create_item("Forest Village Purple Key"))

        itempool.append(world.create_item("Market Town Bronze Key"))
        itempool.append(world.create_item("Market Town Silver Key"))
        itempool.append(world.create_item("Market Town Gold Key"))
        itempool.append(world.create_item("Market Town Purple Key"))

        itempool.append(world.create_item("Downtown Bronze Key"))
        itempool.append(world.create_item("Downtown Silver Key"))
        itempool.append(world.create_item("Downtown Gold Key"))
        itempool.append(world.create_item("Downtown Purple Key"))

        itempool.append(world.create_item("Royal Castle Bronze Key"))
        itempool.append(world.create_item("Royal Castle Silver Key"))
        itempool.append(world.create_item("Royal Castle Gold Key"))
        itempool.append(world.create_item("Royal Castle Purple Key"))

        itempool.append(world.create_item("Clamber Tower Bronze Key"))
        itempool.append(world.create_item("Clamber Tower Silver Key"))
        itempool.append(world.create_item("Clamber Tower Gold Key"))
        itempool.append(world.create_item("Clamber Tower Purple Key"))
        print(itempool)

    number_of_items = len(itempool)

    number_of_unfilled_locations = len(world.multiworld.get_unfilled_locations(world.player))

    needed_number_of_filler_items = number_of_unfilled_locations - number_of_items

    itempool += [world.create_filler() for _ in range(needed_number_of_filler_items)]

    world.multiworld.itempool += itempool
