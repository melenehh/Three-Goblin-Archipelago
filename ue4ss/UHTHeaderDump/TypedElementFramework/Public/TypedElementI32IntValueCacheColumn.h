#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementI32IntValueCacheColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementI32IntValueCacheColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementI32IntValueCacheColumn();
};

