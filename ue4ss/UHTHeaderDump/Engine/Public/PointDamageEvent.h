#pragma once
#include "CoreMinimal.h"
#include "DamageEvent.h"
#include "HitResult.h"
#include "Vector_NetQuantizeNormal.h"
#include "PointDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct FPointDamageEvent : public FDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal ShotDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult HitInfo;
    
    ENGINE_API FPointDamageEvent();
};

