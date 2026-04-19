#pragma once
#include "CoreMinimal.h"
#include "LocalizableMessageParameterInt.generated.h"

USTRUCT(BlueprintType)
struct FLocalizableMessageParameterInt {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Value;
    
    LOCALIZABLEMESSAGE_API FLocalizableMessageParameterInt();
};

