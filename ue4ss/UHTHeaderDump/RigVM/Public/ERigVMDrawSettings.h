#pragma once
#include "CoreMinimal.h"
#include "ERigVMDrawSettings.generated.h"

UENUM(BlueprintType)
namespace ERigVMDrawSettings {
    enum Type {
        Points,
        Lines,
        LineStrip,
        DynamicMesh,
    };
}

