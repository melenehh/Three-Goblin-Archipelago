#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageEvent.generated.h"

class UDamageType;

USTRUCT(BlueprintType)
struct FDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageTypeClass;
    
    ENGINE_API FDamageEvent();
};

