#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementRowReferenceColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementRowReferenceColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementRowReferenceColumn();
};

