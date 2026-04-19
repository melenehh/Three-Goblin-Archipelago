#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "InterchangeShaderNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeShaderNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeShaderNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomShaderType(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomShaderType(FString& AttributeValue) const;
    
};

