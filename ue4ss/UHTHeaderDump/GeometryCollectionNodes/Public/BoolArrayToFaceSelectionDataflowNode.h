#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowFaceSelection -FallbackName=DataflowFaceSelection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "BoolArrayToFaceSelectionDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FBoolArrayToFaceSelectionDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> BoolAttributeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowFaceSelection FaceSelection;
    
    GEOMETRYCOLLECTIONNODES_API FBoolArrayToFaceSelectionDataflowNode();
};

