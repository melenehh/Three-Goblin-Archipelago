#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "MakeMaterialsArrayDataflowNode.generated.h"

class UMaterial;

USTRUCT(BlueprintType)
struct FMakeMaterialsArrayDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterial*> Materials;
    
    GEOMETRYCOLLECTIONNODES_API FMakeMaterialsArrayDataflowNode();
};

