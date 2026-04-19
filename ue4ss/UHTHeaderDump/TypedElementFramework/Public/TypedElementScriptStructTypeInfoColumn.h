#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementScriptStructTypeInfoColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementScriptStructTypeInfoColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    TYPEDELEMENTFRAMEWORK_API FTypedElementScriptStructTypeInfoColumn();
};

