#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "TypedElementDataStorageColumn.h"
#include "TypedElementLocalTransformColumn.generated.h"

USTRUCT(BlueprintType)
struct FTypedElementLocalTransformColumn : public FTypedElementDataStorageColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    TYPEDELEMENTFRAMEWORK_API FTypedElementLocalTransformColumn();
};

