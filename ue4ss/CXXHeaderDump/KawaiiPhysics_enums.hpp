enum class EBoneForwardAxis {
    X_Positive = 0,
    X_Negative = 1,
    Y_Positive = 2,
    Y_Negative = 3,
    Z_Positive = 4,
    Z_Negative = 5,
    EBoneForwardAxis_MAX = 6,
};

enum class ECollisionLimitType {
    None = 0,
    Spherical = 1,
    Capsule = 2,
    Planar = 3,
    ECollisionLimitType_MAX = 4,
};

enum class EPlanarConstraint {
    None = 0,
    X = 1,
    Y = 2,
    Z = 3,
    EPlanarConstraint_MAX = 4,
};

enum class EXPBDComplianceType {
    Concrete = 0,
    Wood = 1,
    Leather = 2,
    Tendon = 3,
    Rubber = 4,
    Muscle = 5,
    Fat = 6,
    EXPBDComplianceType_MAX = 7,
};

