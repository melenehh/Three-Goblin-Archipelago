#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowFaceSelection -FallbackName=DataflowFaceSelection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "CollectionFaceSelectionInvertDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FCollectionFaceSelectionInvertDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowFaceSelection FaceSelection;
    
    GEOMETRYCOLLECTIONNODES_API FCollectionFaceSelectionInvertDataflowNode();
};

