#pragma once
#include "CoreMinimal.h"
#include "EInterchangeAnimationPayLoadType.h"
#include "InterchangeAnimationPayLoadKey.h"
#include "InterchangeAnimationTrackBaseNode.h"
#include "InterchangeAnimationTrackNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeAnimationTrackNode : public UInterchangeAnimationTrackBaseNode {
    GENERATED_BODY()
public:
    UInterchangeAnimationTrackNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomTargetedProperty(const int32& TargetedProperty);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFrameCount(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimationPayloadKey(const FString& InUniqueId, const EInterchangeAnimationPayLoadType& InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomActorDependencyUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomTargetedProperty(int32& TargetedProperty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomFrameCount(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAnimationPayloadKey(FInterchangeAnimationPayLoadKey& AnimationPayLoadKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomActorDependencyUid(FString& DependencyUid) const;
    
};

