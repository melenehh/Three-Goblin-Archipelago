#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageTag.h"
#include "TypedElementSyncBackToWorldTag.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementSyncBackToWorldTag : public FTypedElementDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementSyncBackToWorldTag();
};

