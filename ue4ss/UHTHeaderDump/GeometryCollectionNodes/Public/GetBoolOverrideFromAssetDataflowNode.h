#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowOverrideNode -FallbackName=DataflowOverrideNode
#include "GetBoolOverrideFromAssetDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FGetBoolOverrideFromAssetDataflowNode : public FDataflowOverrideNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoolDefault;
    
    GEOMETRYCOLLECTIONNODES_API FGetBoolOverrideFromAssetDataflowNode();
};

