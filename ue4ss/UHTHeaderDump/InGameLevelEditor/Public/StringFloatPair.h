#pragma once
#include "CoreMinimal.h"
#include "StringFloatPair.generated.h"

USTRUCT(BlueprintType)
struct INGAMELEVELEDITOR_API FStringFloatPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float float;
    
    FStringFloatPair();
};

