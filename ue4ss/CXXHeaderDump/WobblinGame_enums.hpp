enum class EAIState {
    Idle = 0,
    Drinking = 1,
    Sitting = 2,
    Talking = 3,
    Clapping = 4,
    Roaming = 5,
    Patrolling = 6,
    Looking = 7,
    Pointing = 8,
    Chasing = 9,
    Charging = 10,
    Tripping = 11,
    GettingUp = 12,
    Searching = 13,
    Returning = 14,
    Count = 15,
    EAIState_MAX = 16,
};

enum class EGameDifficulty {
    EASY = 0,
    MEDIUM = 1,
    HARD = 2,
    EGameDifficulty_MAX = 3,
};

enum class EInitialAIState {
    Idle = 0,
    Sitting = 1,
    Talking = 2,
    Clapping = 3,
    Roaming = 4,
    Patrolling = 5,
    Count = 6,
    EInitialAIState_MAX = 7,
};

enum class ELockType {
    NONE = 0,
    BRONZE = 1,
    SILVER = 2,
    GOLD = 3,
    MAGIC = 4,
    ELockType_MAX = 5,
};

enum class EProfessionType {
    None = 0,
    Peasant = 1,
    Mage = 2,
    Barbarian = 3,
    Guard = 4,
    Monarch = 5,
    Count = 6,
    EProfessionType_MAX = 7,
};

enum class ESuspicionMarkerMode {
    Unaware = 0,
    Aware = 1,
    Caution = 2,
    Alert = 3,
    ESuspicionMarkerMode_MAX = 4,
};

enum class EWorkshopRequestState {
    NONE = 0,
    PROCESSING = 1,
    FAILURE = 2,
    SUCCESS = 3,
    EWorkshopRequestState_MAX = 4,
};

