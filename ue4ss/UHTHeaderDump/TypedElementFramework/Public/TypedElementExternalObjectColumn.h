#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementExternalObjectColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementExternalObjectColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementExternalObjectColumn();
};

