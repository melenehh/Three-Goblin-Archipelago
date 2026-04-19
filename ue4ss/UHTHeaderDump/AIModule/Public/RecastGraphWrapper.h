#pragma once
#include "CoreMinimal.h"
#include "RecastGraphWrapper.generated.h"

class ARecastNavMesh;

USTRUCT(BlueprintType)
struct FRecastGraphWrapper {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARecastNavMesh* RecastNavMeshActor;
    
public:
    AIMODULE_API FRecastGraphWrapper();
};

