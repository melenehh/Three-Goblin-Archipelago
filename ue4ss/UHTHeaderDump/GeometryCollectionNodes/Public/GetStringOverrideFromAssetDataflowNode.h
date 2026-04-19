#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowOverrideNode -FallbackName=DataflowOverrideNode
#include "GetStringOverrideFromAssetDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FGetStringOverrideFromAssetDataflowNode : public FDataflowOverrideNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringDefault;
    
    GEOMETRYCOLLECTIONNODES_API FGetStringOverrideFromAssetDataflowNode();
};

