#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementSlateWidgetReferenceColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementSlateWidgetReferenceColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementSlateWidgetReferenceColumn();
};

