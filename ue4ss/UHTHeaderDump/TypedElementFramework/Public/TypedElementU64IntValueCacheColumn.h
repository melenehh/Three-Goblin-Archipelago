#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementU64IntValueCacheColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementU64IntValueCacheColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Value;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementU64IntValueCacheColumn();
};

