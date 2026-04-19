#pragma once
#include "CoreMinimal.h"
#include "GeometryCollectionDamagePropagationData.generated.h"

USTRUCT(BlueprintType)
struct FGeometryCollectionDamagePropagationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakDamagePropagationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShockDamagePropagationFactor;
    
    GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionDamagePropagationData();
};

