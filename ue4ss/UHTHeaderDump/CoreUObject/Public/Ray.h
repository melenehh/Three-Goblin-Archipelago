#pragma once
#include "CoreMinimal.h"
#include "Vector.h"
#include "Ray.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FRay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    COREUOBJECT_API FRay();
};

