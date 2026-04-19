#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowOverrideNode -FallbackName=DataflowOverrideNode
#include "GetIntOverrideFromAssetDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FGetIntOverrideFromAssetDataflowNode : public FDataflowOverrideNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Int;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntDefault;
    
    GEOMETRYCOLLECTIONNODES_API FGetIntOverrideFromAssetDataflowNode();
};

