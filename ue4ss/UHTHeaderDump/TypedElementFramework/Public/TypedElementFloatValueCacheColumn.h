#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementFloatValueCacheColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementFloatValueCacheColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementFloatValueCacheColumn();
};

