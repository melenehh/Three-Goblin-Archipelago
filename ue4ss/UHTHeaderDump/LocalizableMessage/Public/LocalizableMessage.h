#pragma once
#include "CoreMinimal.h"
#include "LocalizableMessageParameterEntry.h"
#include "LocalizableMessage.generated.h"

USTRUCT(BlueprintType)
struct FLocalizableMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocalizableMessageParameterEntry> Substitutions;
    
    LOCALIZABLEMESSAGE_API FLocalizableMessage();
};

