#pragma once
#include "CoreMinimal.h"
#include "InterchangeShaderNode.h"
#include "InterchangeFunctionCallShaderNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeFunctionCallShaderNode : public UInterchangeShaderNode {
    GENERATED_BODY()
public:
    UInterchangeFunctionCallShaderNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomMaterialFunction(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomMaterialFunction(FString& AttributeValue) const;
    
};

