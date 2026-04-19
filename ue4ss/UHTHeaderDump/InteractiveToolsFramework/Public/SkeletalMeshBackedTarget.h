#pragma once
#include "CoreMinimal.h"
#include "AssetBackedTarget.h"
#include "SkeletalMeshBackedTarget.generated.h"

UINTERFACE(MinimalAPI)
class USkeletalMeshBackedTarget : public UAssetBackedTarget {
    GENERATED_BODY()
};

class ISkeletalMeshBackedTarget : public IAssetBackedTarget {
    GENERATED_BODY()
public:
};

