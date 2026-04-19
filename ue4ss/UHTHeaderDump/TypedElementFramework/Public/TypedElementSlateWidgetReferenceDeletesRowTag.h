#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageTag.h"
#include "TypedElementSlateWidgetReferenceDeletesRowTag.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementSlateWidgetReferenceDeletesRowTag : public FTypedElementDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementSlateWidgetReferenceDeletesRowTag();
};

