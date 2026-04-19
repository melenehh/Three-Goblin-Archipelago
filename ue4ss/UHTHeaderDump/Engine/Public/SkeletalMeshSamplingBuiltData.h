#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshSamplingLODBuiltData.h"
#include "SkeletalMeshSamplingRegionBuiltData.h"
#include "SkeletalMeshSamplingBuiltData.generated.h"

USTRUCT(BlueprintType)
struct FSkeletalMeshSamplingBuiltData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData;
    
    ENGINE_API FSkeletalMeshSamplingBuiltData();
};

