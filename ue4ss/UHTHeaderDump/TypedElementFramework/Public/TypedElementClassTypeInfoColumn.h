#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementClassTypeInfoColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementClassTypeInfoColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementClassTypeInfoColumn();
};

