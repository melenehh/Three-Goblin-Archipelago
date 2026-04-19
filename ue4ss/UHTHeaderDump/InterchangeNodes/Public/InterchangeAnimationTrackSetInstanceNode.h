#pragma once
#include "CoreMinimal.h"
#include "InterchangeAnimationTrackBaseNode.h"
#include "InterchangeAnimationTrackSetInstanceNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeAnimationTrackSetInstanceNode : public UInterchangeAnimationTrackBaseNode {
    GENERATED_BODY()
public:
    UInterchangeAnimationTrackSetInstanceNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomTrackSetDependencyUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomTimeScale(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomStartFrame(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDuration(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomTrackSetDependencyUid(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomTimeScale(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomStartFrame(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomDuration(int32& AttributeValue) const;
    
};

