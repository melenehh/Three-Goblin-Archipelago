#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementU32IntValueCacheColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementU32IntValueCacheColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementU32IntValueCacheColumn();
};

