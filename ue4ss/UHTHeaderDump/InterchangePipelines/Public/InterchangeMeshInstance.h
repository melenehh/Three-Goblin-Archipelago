#pragma once
#include "CoreMinimal.h"
#include "InterchangeLodSceneNodeContainer.h"
#include "InterchangeMeshInstance.generated.h"

class UInterchangeSceneNode;

USTRUCT(BlueprintType)
struct FInterchangeMeshInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MeshInstanceUid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterchangeSceneNode* LodGroupNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReferenceSkinnedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReferenceMorphTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FInterchangeLodSceneNodeContainer> SceneNodePerLodIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ReferencingMeshGeometryUids;
    
    INTERCHANGEPIPELINES_API FInterchangeMeshInstance();
};

