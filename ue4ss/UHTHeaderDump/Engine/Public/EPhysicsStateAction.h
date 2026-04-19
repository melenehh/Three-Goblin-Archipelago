#pragma once
#include "CoreMinimal.h"
#include "EPhysicsStateAction.generated.h"

UENUM(BlueprintType)
enum class EPhysicsStateAction : uint8 {
    AddForce,
    AddTorque,
    AddForceAtPosition,
    AddLinearVelocity,
    AddAngularVelocity,
    AddVelocityAtPosition,
    AddLinearImpulse,
    AddAngularImpulse,
    AddImpulseAtPosition,
    AddAcceleration,
    NumActions,
};

