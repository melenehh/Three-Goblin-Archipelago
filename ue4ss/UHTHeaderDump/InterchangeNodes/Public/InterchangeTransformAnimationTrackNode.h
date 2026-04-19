#pragma once
#include "CoreMinimal.h"
#include "InterchangeAnimationTrackNode.h"
#include "InterchangeTransformAnimationTrackNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeTransformAnimationTrackNode : public UInterchangeAnimationTrackNode {
    GENERATED_BODY()
public:
    UInterchangeTransformAnimationTrackNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomUsedChannels(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomUsedChannels(int32& AttributeValue) const;
    
};

