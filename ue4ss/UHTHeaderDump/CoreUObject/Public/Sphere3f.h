#pragma once
#include "CoreMinimal.h"
#include "Vector3f.h"
#include "Sphere3f.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FSphere3f {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3f Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float W;
    
    COREUOBJECT_API FSphere3f();
};

