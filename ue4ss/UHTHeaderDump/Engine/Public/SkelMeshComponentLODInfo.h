#pragma once
#include "CoreMinimal.h"
#include "SkelMeshComponentLODInfo.generated.h"

USTRUCT(BlueprintType)
struct FSkelMeshComponentLODInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> HiddenMaterials;
    
    ENGINE_API FSkelMeshComponentLODInfo();
};

