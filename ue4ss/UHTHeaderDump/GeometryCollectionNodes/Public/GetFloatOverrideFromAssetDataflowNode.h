#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowOverrideNode -FallbackName=DataflowOverrideNode
#include "GetFloatOverrideFromAssetDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FGetFloatOverrideFromAssetDataflowNode : public FDataflowOverrideNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float float;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatDefault;
    
    GEOMETRYCOLLECTIONNODES_API FGetFloatOverrideFromAssetDataflowNode();
};

