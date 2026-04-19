#pragma once
#include "CoreMinimal.h"
#include "ClusterUnionParticleCandidateData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FClusterUnionParticleCandidateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneID;
    
    ENGINE_API FClusterUnionParticleCandidateData();
};

