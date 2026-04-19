#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "InterchangeAnimationTrackSetNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeAnimationTrackSetNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeAnimationTrackSetNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomFrameRate(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCustomAnimationTrackUid(const FString& AnimationTrackUid);
    
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

