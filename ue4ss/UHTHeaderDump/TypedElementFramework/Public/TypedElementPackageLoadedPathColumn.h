#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementPackageLoadedPathColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementPackageLoadedPathColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementPackageLoadedPathColumn();
};

