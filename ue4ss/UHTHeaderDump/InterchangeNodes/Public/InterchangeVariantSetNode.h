#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "InterchangeVariantSetNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeVariantSetNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeVariantSetNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomVariantsPayloadKey(const FString& PayloadKey);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDisplayText(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCustomDependencyUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomVariantsPayloadKey(FString& PayloadKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomDisplayText(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomDependencyUids(TArray<FString>& OutDependencyUids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCustomDependencyUidCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomDependencyUid(const int32 Index, FString& OutDependencyUid) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddCustomDependencyUid(const FString& DependencyUid);
    
};

