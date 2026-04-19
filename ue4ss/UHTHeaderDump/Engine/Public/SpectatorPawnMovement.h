#pragma once
#include "CoreMinimal.h"
#include "FloatingPawnMovement.h"
#include "SpectatorPawnMovement.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpectatorPawnMovement : public UFloatingPawnMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreTimeDilation: 1;
    
    USpectatorPawnMovement(const FObjectInitializer& ObjectInitializer);

};

