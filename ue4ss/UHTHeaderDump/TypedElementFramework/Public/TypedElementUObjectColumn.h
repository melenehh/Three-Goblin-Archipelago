#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementUObjectColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementUObjectColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementUObjectColumn();
};

