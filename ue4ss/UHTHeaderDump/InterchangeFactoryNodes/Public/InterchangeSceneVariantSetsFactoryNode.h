#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
#include "InterchangeSceneVariantSetsFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeSceneVariantSetsFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSceneVariantSetsFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool RemoveCustomVariantSetUid(const FString& VariantUid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomVariantSetUids(TArray<FString>& OutVariantUids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCustomVariantSetUidCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomVariantSetUid(const int32 Index, FString& OutVariantUid) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddCustomVariantSetUid(const FString& VariantUid);
    
};

