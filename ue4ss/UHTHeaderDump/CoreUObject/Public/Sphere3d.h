#pragma once
#include "CoreMinimal.h"
#include "Vector3d.h"
#include "Sphere3d.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FSphere3d {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3d Center;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double W;
    
    COREUOBJECT_API FSphere3d();
};

