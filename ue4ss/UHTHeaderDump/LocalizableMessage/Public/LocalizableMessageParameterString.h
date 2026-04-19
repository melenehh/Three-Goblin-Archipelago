#pragma once
#include "CoreMinimal.h"
#include "LocalizableMessageParameterString.generated.h"

USTRUCT(BlueprintType)
struct FLocalizableMessageParameterString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    LOCALIZABLEMESSAGE_API FLocalizableMessageParameterString();
};

