#pragma once
#include "CoreMinimal.h"
#include "ERigVMClampSpatialMode.generated.h"

UENUM(BlueprintType)
namespace ERigVMClampSpatialMode {
    enum Type {
        Plane,
        Cylinder,
        Sphere,
    };
}

