#pragma once
#include "CoreMinimal.h"
#include "AnimCurveType.generated.h"

USTRUCT(BlueprintType)
struct FAnimCurveType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMorphtarget;
    
    ENGINE_API FAnimCurveType();
};

