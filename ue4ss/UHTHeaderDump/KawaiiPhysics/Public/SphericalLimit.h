#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=ESphericalLimitType -FallbackName=ESphericalLimitType
#include "CollisionLimitBase.h"
#include "SphericalLimit.generated.h"

USTRUCT(BlueprintType)
struct FSphericalLimit : public FCollisionLimitBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESphericalLimitType LimitType;
    
    KAWAIIPHYSICS_API FSphericalLimit();
};

