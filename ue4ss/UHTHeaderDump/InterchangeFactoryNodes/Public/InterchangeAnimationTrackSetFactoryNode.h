#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
#include "InterchangeAnimationTrackSetFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeAnimationTrackSetFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeAnimationTrackSetFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomFrameRate(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCustomAnimationTrackUid(const FString& AnimationTrackUid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomFrameRate(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCustomAnimationTrackUidCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomAnimationTrackUid(const int32 Index, FString& OutAnimationTrackUid) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddCustomAnimationTrackUid(const FString& AnimationTrackUid);
    
};

