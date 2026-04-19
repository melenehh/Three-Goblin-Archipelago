#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementViewportColorColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementViewportColorColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SelectionOutlineColorIndex;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementViewportColorColumn();
};

