#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementLabelColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementLabelColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementLabelColumn();
};

