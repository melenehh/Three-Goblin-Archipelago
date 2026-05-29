from .bases import GoblinTestBase


# When writing a test, you'll first need to subclass unittest.TestCase.
# In our case, we'll subclass the APQuestTestBase we defined in bases.py.
class TestEasyModeLogic(GoblinTestBase):
    # Our test base is a subclass of WorldTestBase.
    # WorldTestBase takes a dict of options and sets up a multiworld for you with a single world of your game.
    # The world will have the options you specified.
    options = {
        "hard_mode": True,
        "progressive_keys": True,
    }


    # This is already useful, but we also want to do our own tests.
    # A test is a function whose name starts with "test".
    def test_easy_mode_access(self) -> None:
        # Inside a test, we can manually collect items, check access rules, etc.
        # For example, we could check that the two early chests are already accessible despite us having no items.
        # For the sake of structure, let's have every test item in its own subtest.
        with self.subTest("Test checks accessible with nothing"):
            tutorial = self.world.get_region("Tutorial Start")
            forest = self.world.get_region("Forest Village Start")
            market = self.world.get_region("Market Town Start")
            downtown = self.world.get_region("Downtown Start")
            castle = self.world.get_region("Royal Castle Start")
            tower = self.world.get_region("Clamber Tower Start")

            # Since access rules have a "state" argument, we must pass our current CollectionState.
            # Helpfully, since we're in a WorldTestBase, we can just use "self.multiworld.state".
            self.assertTrue(tutorial.can_reach(self.multiworld.state))
            self.assertTrue(forest.can_reach(self.multiworld.state))
            self.assertTrue(market.can_reach(self.multiworld.state))
            self.assertTrue(downtown.can_reach(self.multiworld.state))
            self.assertTrue(castle.can_reach(self.multiworld.state))
            self.assertTrue(tower.can_reach(self.multiworld.state))

        # # Next, let's test that the top left room location requires the key to unlock the door.
        # with self.subTest("Purple Key is required for Clamber Tower Clear"):
        #     tower_win = self.world.get_location("Clamber Tower: Level Clear")
        #
        #     # Right now, this location should *not* be accessible, as we don't have the key yet.
        #     self.assertFalse(tower_win.can_reach(self.multiworld.state))
        #
        #     self.collect_by_name("Clamber Tower Purple Key")
        #     self.collect_by_name("Clamber Tower Hat")
        #     self.collect_by_name("Clamber Tower Hat")
        #
        #     self.assertTrue(tower_win.can_reach(self.multiworld.state))

            # Next, let's test that the top left room location requires the key to unlock the door.

            with self.subTest("Castle is Beatable With Nothing"):
                bronze_castle = self.world.get_location("Royal Castle: Level Clear")

                # Right now, this location should *not* be accessible, as we don't have the key yet.
                self.assertFalse(bronze_castle.can_reach(self.multiworld.state))

                self.collect_by_name("Royal Castle Progressive Key")

                self.assertTrue(bronze_castle.can_reach(self.multiworld.state))