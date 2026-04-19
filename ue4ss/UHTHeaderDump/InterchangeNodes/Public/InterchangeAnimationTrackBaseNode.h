#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "InterchangeAnimationTrackBaseNode.generated.h"

UCLASS(Abstract, Blueprintable)
class INTERCHANGENODES_API UInterchangeAnimationTrackBaseNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeAnimationTrackBaseNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomCompletionMode(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomCompletionMode(int32& AttributeValue) const;
    
};

