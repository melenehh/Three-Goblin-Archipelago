#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementSelectionColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementSelectionColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementSelectionColumn();
};

