#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageTag.h"
#include "TypedElementSyncFromWorldTag.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementSyncFromWorldTag : public FTypedElementDataStorageTag {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementSyncFromWorldTag();
};

