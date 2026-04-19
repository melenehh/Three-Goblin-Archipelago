#pragma once
#include "CoreMinimal.h"
#include "Vector3f.h"
#include "Ray3f.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FRay3f {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3f Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector3f Direction;
    
    COREUOBJECT_API FRay3f();
};

