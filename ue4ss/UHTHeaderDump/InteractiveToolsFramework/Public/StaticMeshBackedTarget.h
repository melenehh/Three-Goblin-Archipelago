#pragma once
#include "CoreMinimal.h"
#include "AssetBackedTarget.h"
#include "StaticMeshBackedTarget.generated.h"

UINTERFACE(MinimalAPI)
class UStaticMeshBackedTarget : public UAssetBackedTarget {
    GENERATED_BODY()
};

class IStaticMeshBackedTarget : public IAssetBackedTarget {
    GENERATED_BODY()
public:
};

