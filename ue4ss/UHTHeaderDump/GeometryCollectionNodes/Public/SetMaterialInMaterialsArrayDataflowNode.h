#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "ESetMaterialOperationTypeEnum.h"
#include "SetMaterialInMaterialsArrayDataflowNode.generated.h"

class UMaterial;

USTRUCT(BlueprintType)
struct FSetMaterialInMaterialsArrayDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterial*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESetMaterialOperationTypeEnum Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIdx;
    
    GEOMETRYCOLLECTIONNODES_API FSetMaterialInMaterialsArrayDataflowNode();
};

