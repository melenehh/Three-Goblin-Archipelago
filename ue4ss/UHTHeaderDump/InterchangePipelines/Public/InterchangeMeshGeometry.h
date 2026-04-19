#pragma once
#include "CoreMinimal.h"
#include "InterchangeMeshGeometry.generated.h"

class UInterchangeMeshNode;

USTRUCT(BlueprintType)
struct FInterchangeMeshGeometry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MeshUid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterchangeMeshNode* MeshNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ReferencingMeshInstanceUids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AttachedSocketUids;
    
    INTERCHANGEPIPELINES_API FInterchangeMeshGeometry();
};

