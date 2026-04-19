#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterialStrength.generated.h"

USTRUCT(BlueprintType)
struct FPhysicalMaterialStrength {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TensileStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompressionStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShearStrength;
    
    PHYSICSCORE_API FPhysicalMaterialStrength();
};

