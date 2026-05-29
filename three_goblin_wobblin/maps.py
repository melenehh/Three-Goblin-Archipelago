from rule_builder.rules import Has, HasAll

progressive_map = {
    "Forest Village": {"Bronze": 1,
                       "Purple": 2,
                       "Silver": 3,
                       "Gold": 4
                       },

    "Market Town": {"Bronze": 1,
                    "Hat": 1,
                    "Purple": 2,
                    "Silver": 3,
                    "Gold": 4,
                    "Purple Bronze": 2,
                    "Purple Silver": 3,
                    "Purple Gold": 4
                    },

    "Downtown": {
        "Bronze": 1,
        "Silver": 2,
        "Purple": 3,
        "Gold": 4,
        "Purple Bronze": 3,
        "Purple Silver": 3,
        "Purple Gold": 4
    },

    "Royal Castle": {
        "Bronze": 1,
        "Bronze Only": 1,
        "Silver": 2,
        "Purple": 3,
        "Gold": 4,
        "Purple Bronze": 3,
        "Purple Silver": 3,
        "Purple Gold": 4
    },

    "Clamber Tower": {
        "Bronze": 1,
        "Silver": 2,
        "Gold": 3,
        "Purple": 4,
        "Purple Start": 4

    }
}

hat_map = {
    "Forest Village": {"Bronze": 1,
                       "Purple": 2,
                       "Silver": 2,
                       "Gold": 4
                       },

    "Market Town": {"Bronze": 1,
                    "Hat": 1,
                    "Purple": 2,
                    "Silver": 2,
                    "Gold": 4,
                    "Purple Bronze": 1,
                    "Purple Silver": 2,
                    "Purple Gold": 4
                    },

    "Downtown": {
        "Bronze": 1,
        "Silver": 2,
        "Purple": 2,
        "Gold": 4,
        "Purple Bronze": 1,
        "Purple Silver": 2,
        "Purple Gold": 4
    },

    "Royal Castle": {
        "Bronze": 2,
        "Bronze Only": 1,
        "Silver": 4,
        "Purple": 4,
        "Gold": 5,
        "Purple Bronze": 2,
        "Purple Silver": 4,
        "Purple Gold": 5
    },

    "Clamber Tower": {
        "Bronze": 1,
        "Silver": 2,
        "Gold": 2,
        "Purple": 2,
        "Purple Start": 2
    }
}

key_map = {
    "Forest Village": {"Bronze": Has("Forest Village Bronze Key"),

                       "Silver": HasAll("Forest Village Bronze Key", "Forest Village Silver Key",
                                        "Forest Village Purple Key"),

                       "Gold": HasAll("Forest Village Bronze Key", "Forest Village Silver Key",
                                      "Forest Village Purple Key", "Forest Village Gold Key")
                       },

    "Market Town": {"Bronze": Has("Market Town Bronze Key"),

                    "Hat": Has("Market Town Bronze Key"),

                    "Silver": HasAll("Market Town Bronze Key", "Market Town Silver Key",
                                     "Market Town Purple Key"),

                    "Gold": HasAll("Market Town Bronze Key", "Market Town Silver Key",
                                   "Market Town Purple Key", "Market Town Gold Key"),

                    "Purple Bronze": Has("Market Town Purple Key"),

                    "Purple Silver": HasAll("Market Town Purple Key", "Market Town Silver Key"),

                    "Purple Gold": HasAll("Market Town Purple Key", "Market Town Silver Key",
                                          "Market Town Gold Key")
                    },

    "Downtown": {
        "Bronze": Has("Downtown Bronze Key"),

        "Silver": HasAll("Downtown Bronze Key", "Downtown Silver Key", "Downtown Purple Key"),

        "Gold": HasAll("Downtown Bronze Key", "Downtown Silver Key",
                       "Downtown Purple Key", "Downtown Gold Key"),

        "Purple Bronze": Has("Downtown Purple Key"),

        "Purple Silver": Has("Downtown Purple Key"),

        "Purple Gold": HasAll("Downtown Purple Key", "Downtown Gold Key")
    },

    "Royal Castle": {
        "Bronze": Has("Royal Castle Bronze Key"),

        "Bronze Only": Has("Royal Castle Bronze Key"),

        "Silver": HasAll("Royal Castle Bronze Key", "Royal Castle Silver Key", "Royal Castle Purple Key"),

        "Gold": HasAll("Royal Castle Bronze Key", "Royal Castle Silver Key",
                       "Royal Castle Purple Key", "Royal Castle Gold Key"),

        "Purple Bronze": Has("Royal Castle Purple Key"),

        "Purple Silver": Has("Royal Castle Purple Key"),

        "Purple Gold": HasAll("Royal Castle Purple Key", "Royal Castle Gold Key"),
    },

    "Clamber Tower": {
        "Bronze": Has("Clamber Tower Bronze Key"),

        "Silver": (HasAll("Clamber Tower Bronze Key",
                          "Clamber Tower Silver Key")),

        "Gold": HasAll("Clamber Tower Bronze Key", "Clamber Tower Silver Key", "Clamber Tower Gold Key"),

        "Purple": HasAll("Clamber Tower Bronze Key", "Clamber Tower Silver Key",
                         "Clamber Tower Gold Key", "Clamber Tower Purple Key"),

        "Purple Start": Has("Clamber Tower Purple Key")
    }
}
