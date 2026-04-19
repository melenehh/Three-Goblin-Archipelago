#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "InterchangeSceneVariantSetsNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeSceneVariantSetsNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSceneVariantSetsNode();

    UFUNCTION(BlueprintCallable)
    bool RemoveCustomVariantSetUid(const FString& VariantUid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomVariantSetUids(TArray<FString>& OutVariantUids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCustomVariantSetUidCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomVariantSetUid(const int32 Index, FString& OutVariantUid) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddCustomVariantSetUid(const FString& VariantUid);
    
};

