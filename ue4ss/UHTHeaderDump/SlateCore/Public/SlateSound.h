#pragma once
#include "CoreMinimal.h"
#include "SlateSound.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSlateSound {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ResourceObject;
    
public:
    SLATECORE_API FSlateSound();
};

