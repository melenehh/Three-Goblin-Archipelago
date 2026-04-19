#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "InterchangeMaterialInstanceNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeMaterialInstanceNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeMaterialInstanceNode();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SetCustomParent(const FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVectorParameterValue(const FString& ParameterName, FLinearColor& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTextureParameterValue(const FString& ParameterName, FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStaticSwitchParameterValue(const FString& ParameterName, bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetScalarParameterValue(const FString& ParameterName, float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomParent(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddVectorParameterValue(const FString& ParameterName, const FLinearColor& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool AddTextureParameterValue(const FString& ParameterName, const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool AddStaticSwitchParameterValue(const FString& ParameterName, bool AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool AddScalarParameterValue(const FString& ParameterName, float AttributeValue);
    
};

