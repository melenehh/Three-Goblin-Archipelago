from __future__ import annotations

from typing import TYPE_CHECKING

from BaseClasses import Item, ItemClassification

from .BaseID import goblin_base_id

if TYPE_CHECKING:
    from .world import ThreeGoblinWorld

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
    "Forest Village Hat": ItemClassification.progression,

    "Market Town Bronze Key": ItemClassification.progression,
    "Market Town Silver Key": ItemClassification.progression,
    "Market Town Gold Key": ItemClassification.progression,
    "Market Town Purple Key": ItemClassification.progression,
    "Market Town Hat": ItemClassification.progression,

    "Downtown Bronze Key": ItemClassification.progression,
    "Downtown Silver Key": ItemClassification.progression,
    "Downtown Gold Key": ItemClassification.progression,
    "Downtown Purple Key": ItemClassification.progression,
    "Downtown Hat": ItemClassification.progression,

    "Royal Castle Bronze Key": ItemClassification.progression,
    "Royal Castle Silver Key": ItemClassification.progression,
    "Royal Castle Gold Key": ItemClassification.progression,
    "Royal Castle Purple Key": ItemClassification.progression,
    "Royal Castle Hat": ItemClassification.progression,

    "Clamber Tower Bronze Key": ItemClassification.progression,
    "Clamber Tower Silver Key": ItemClassification.progression,
    "Clamber Tower Gold Key": ItemClassification.progression,
    "Clamber Tower Purple Key": ItemClassification.progression,
    "Clamber Tower Hat": ItemClassification.progression,

    "Forest Village Progressive Key": ItemClassification.progression,
    "Market Town Progressive Key": ItemClassification.progression,
    "Downtown Progressive Key": ItemClassification.progression,
    "Royal Castle Progressive Key": ItemClassification.progression,
    "Clamber Tower Progressive Key": ItemClassification.progression,
}

class ThreeGoblinItem(Item):
    game = "Three Goblin Wobblin"



def get_random_filler_item_name(world: ThreeGoblinWorld) -> str:
    return "Pretzel"

def create_item_with_correct_classification(world: ThreeGoblinWorld, name: str) -> ThreeGoblinItem:

    classification = DEFAULT_ITEM_CLASSIFICATIONS[name]

    # It is perfectly normal and valid for an item's classification to differ based on the player's options.
    # In our case, Health Upgrades are only relevant to logic (and thus labeled as "progression") in hard mode.
    if "Hat" in name and world.options.hard_mode:
        classification = ItemClassification.useful | ItemClassification.filler

    return ThreeGoblinItem(name, classification, ITEM_NAME_TO_ID[name], world.player)


# With those two helper functions defined, let's now get to actually creating and submitting our itempool.
def create_all_items(world: ThreeGoblinWorld) -> None:
    # This is the function in which we will create all the items that this world submits to the multiworld item pool.
    # There must be exactly as many items as there are locations.
    # In our case, there are either six or seven locations.
    # We must make sure that when there are six locations, there are six items,
    # and when there are seven locations, there are seven items.

    # Creating items should generally be done via the world's create_item method.
    # First, we create a list containing all the items that always exist.

    itempool: list[Item] = [
        world.create_item("Tutorial Key"),
        world.create_item("Tutorial Hat"),
        world.create_item("Forest Village Hat"),
        world.create_item("Market Town Hat"),
        world.create_item("Downtown Hat"),
        world.create_item("Royal Castle Hat"),
        world.create_item("Clamber Tower Hat"),
        world.create_item("Pretzel"),
    ]

    # Some items may only exist if the player enables certain options.
    # In our case, If the hammer option is enabled, the sixth item is the Hammer.
    # Otherwise, we add a filler Confetti Cannon.
    if world.options.progressive_keys:
        # Once again, it is important to stress that even though the Hammer doesn't always exist,
        # it must be present in the worlds item_name_to_id.
        # Whether it is actually in the itempool is determined purely by whether we create and add the item here.
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


    # Archipelago requires that each world submits as many locations as it submits items.
    # This is where we can use our filler and trap items.
    # APQuest has two of these: The Confetti Cannon and the Math Trap.
    # (Unfortunately, Archipelago is a bit ambiguous about its terminology here:
    #  "filler" is an ItemClassification separate from "trap", but in a lot of its functions,
    #  Archipelago will use "filler" to just mean "an additional item created to fill out the itempool".
    #  "Filler" in this sense can technically have any ItemClassification,
    #  but most commonly ItemClassification.filler or ItemClassification.trap.
    #  Starting here, the word "filler" will be used to collectively refer to APQuest's Confetti Cannon and Math Trap,
    #  which are ItemClassification.filler and ItemClassification.trap respectively.)
    # Creating filler items works the same as any other item. But there is a question:
    # How many filler items do we actually need to create?
    # In regions.py, we created either six or seven locations depending on the "extra_starting_chest" option.
    # In this function, we have created five or six items depending on whether the "hammer" option is enabled.
    # We *could* have a really complicated if-else tree checking the options again, but there is a better way.
    # We can compare the size of our itempool so far to the number of locations in our world.

    # The length of our itempool is easy to determine, since we have it as a list.
    number_of_items = len(itempool)

    # The number of locations is also easy to determine, but we have to be careful.
    # Just calling len(world.get_locations()) would report an incorrect number, because of our *event locations*.
    # What we actually want is the number of *unfilled* locations. Luckily, there is a helper method for this:
    number_of_unfilled_locations = len(world.multiworld.get_unfilled_locations(world.player))

    # Now, we just subtract the number of items from the number of locations to get the number of empty item slots.
    needed_number_of_filler_items = number_of_unfilled_locations - number_of_items

    # Finally, we create that many filler items and add them to the itempool.
    # To create our filler, we could just use world.create_item("Confetti Cannon").
    # But there is an alternative that works even better for most worlds, including APQuest.
    # As discussed above, our world must have a get_filler_item_name() function defined,
    # which must return the name of an infinitely repeatable filler item.
    # Defining this function enables the use of a helper function called world.create_filler().
    # You can just use this function directly to create as many filler items as you need to complete your itempool.
    itempool += [world.create_filler() for _ in range(needed_number_of_filler_items)]

    # But... is that the right option for your game? Let's explore that.
    # For some games, the concepts of "regular itempool filler" and "additionally created filler" are different.
    # These games might want / require specific amounts of specific filler items in their regular pool.
    # To achieve this, they will have to intentionally create the correct quantities using world.create_item().
    # They may still use world.create_filler() to fill up the rest of their itempool with "repeatable filler",
    # after creating their "specific quantity" filler and still having room left over.

    # But there are many other games which *only* have infinitely repeatable filler items.
    # They don't care about specific amounts of specific filler items, instead only caring about the proportions.
    # In this case, world.create_filler() can just be used for the entire filler itempool.
    # APQuest is one of these games:
    # Regardless of whether it's filler for the regular itempool or additional filler for item links / etc.,
    # we always just want a Confetti Cannon or a Math Trap depending on the "trap_chance" option.
    # We defined this behavior in our get_random_filler_item_name() function, which in world.py,
    # we'll bind to world.get_filler_item_name(). So, we can just use world.create_filler() for all of our filler.

    # Anyway. With our world's itempool finalized, we now need to submit it to the multiworld itempool.
    # This is how the generator actually knows about the existence of our items.
    world.multiworld.itempool += itempool

    # Sometimes, you might want the player to start with certain items already in their inventory.
    # These items are called "precollected items".
    # They will be sent as soon as they connect for the first time (depending on your client's item handling flag).
    # Players can add precollected items themselves via the generic "start_inventory" option.
    # If you want to add your own precollected items, you can do so via world.push_precollected().
    # if world.options.start_with_one_confetti_cannon:
    #     # We're adding a filler item, but you can also add progression items to the player's precollected inventory.
    #     starting_confetti_cannon = world.create_item("Confetti Cannon")
    #     world.push_precollected(starting_confetti_cannon)
