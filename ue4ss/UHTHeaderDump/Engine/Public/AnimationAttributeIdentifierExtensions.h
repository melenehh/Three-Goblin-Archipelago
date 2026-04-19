#pragma once
#include "CoreMinimal.h"
#include "AnimationAttributeIdentifier.h"
#include "BlueprintFunctionLibrary.h"
#include "AnimationAttributeIdentifierExtensions.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAnimationAttributeIdentifierExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimationAttributeIdentifierExtensions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(UPARAM(Ref) FAnimationAttributeIdentifier& Identifier);
    
};

