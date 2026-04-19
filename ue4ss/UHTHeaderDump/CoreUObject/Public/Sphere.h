#pragma once
#include "CoreMinimal.h"
#include "Vector.h"
#include "Sphere.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double W;
    
    COREUOBJECT_API FSphere();
};

