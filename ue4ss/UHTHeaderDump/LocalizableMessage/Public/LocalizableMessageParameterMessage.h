#pragma once
#include "CoreMinimal.h"
#include "LocalizableMessage.h"
#include "LocalizableMessageParameterMessage.generated.h"

USTRUCT(BlueprintType)
struct FLocalizableMessageParameterMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalizableMessage Value;
    
    LOCALIZABLEMESSAGE_API FLocalizableMessageParameterMessage();
};

