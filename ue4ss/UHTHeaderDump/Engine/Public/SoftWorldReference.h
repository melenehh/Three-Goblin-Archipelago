#pragma once
#include "CoreMinimal.h"
#include "SoftWorldReference.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FSoftWorldReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> WorldAsset;
    
    ENGINE_API FSoftWorldReference();
};

