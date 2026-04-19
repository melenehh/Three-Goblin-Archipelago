#pragma once
#include "CoreMinimal.h"
#include "EShaderParamBindingType.generated.h"

UENUM(BlueprintType)
enum class EShaderParamBindingType : uint8 {
    None,
    ConstantParameter,
    ReadOnlyResource,
    ReadWriteResource,
};

