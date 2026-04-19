#pragma once
#include "CoreMinimal.h"
#include "ClothConfigCommon.h"
#include "ClothSharedConfigCommon.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UClothSharedConfigCommon : public UClothConfigCommon {
    GENERATED_BODY()
public:
    UClothSharedConfigCommon();

};

