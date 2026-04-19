#pragma once
#include "CoreMinimal.h"
#include "PropertyBagPropertyDescMetaData.generated.h"

USTRUCT(BlueprintType)
struct STRUCTUTILS_API FPropertyBagPropertyDescMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FPropertyBagPropertyDescMetaData();
};

