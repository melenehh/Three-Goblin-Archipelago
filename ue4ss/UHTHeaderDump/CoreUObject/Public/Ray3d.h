#pragma once
#include "CoreMinimal.h"
#include "Vector3d.h"
#include "Ray3d.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FRay3d {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3d Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3d Direction;
    
    COREUOBJECT_API FRay3d();
};

