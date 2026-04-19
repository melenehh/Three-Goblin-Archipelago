#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=ESphericalLimitType -FallbackName=ESphericalLimitType
#include "CollisionLimitDataBase.h"
#include "SphericalLimitData.generated.h"

USTRUCT(BlueprintType)
struct FSphericalLimitData : public FCollisionLimitDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESphericalLimitType LimitType;
    
    KAWAIIPHYSICS_API FSphericalLimitData();
};

