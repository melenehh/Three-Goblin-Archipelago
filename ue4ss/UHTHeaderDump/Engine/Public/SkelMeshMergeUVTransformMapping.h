#pragma once
#include "CoreMinimal.h"
#include "SkelMeshMergeMeshUVTransforms.h"
#include "SkelMeshMergeUVTransformMapping.generated.h"

USTRUCT(BlueprintType)
struct FSkelMeshMergeUVTransformMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeMeshUVTransforms> UVTransformsPerMesh;
    
    ENGINE_API FSkelMeshMergeUVTransformMapping();
};

