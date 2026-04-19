#pragma once
#include "CoreMinimal.h"
#include "EConvexHullSimplifyMethod.generated.h"

UENUM()
enum class EConvexHullSimplifyMethod : int32 {
    MeshQSlim,
    AngleTolerance,
};

