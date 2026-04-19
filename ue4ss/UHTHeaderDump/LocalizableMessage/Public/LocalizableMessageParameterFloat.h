#pragma once
#include "CoreMinimal.h"
#include "LocalizableMessageParameterFloat.generated.h"

USTRUCT(BlueprintType)
struct FLocalizableMessageParameterFloat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    LOCALIZABLEMESSAGE_API FLocalizableMessageParameterFloat();
};

