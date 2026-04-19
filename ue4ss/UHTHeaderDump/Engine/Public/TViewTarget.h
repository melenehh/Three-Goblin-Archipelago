#pragma once
#include "CoreMinimal.h"
#include "MinimalViewInfo.h"
#include "TViewTarget.generated.h"

class AActor;
class APlayerState;

USTRUCT(BlueprintType)
struct FTViewTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinimalViewInfo POV;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerState;
    
public:
    ENGINE_API FTViewTarget();
};

