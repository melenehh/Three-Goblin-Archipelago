#pragma once
#include "CoreMinimal.h"
#include "TypedElementDataStorageColumn.h"
#include "TypedElementPackagePathColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementPackagePathColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementPackagePathColumn();
};

