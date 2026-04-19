#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementI64IntValueCacheColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementI64IntValueCacheColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Value;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementI64IntValueCacheColumn();
};

