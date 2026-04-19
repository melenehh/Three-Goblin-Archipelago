#pragma once
#include "CoreMinimal.h"
#include "MeshDisplacementMap.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMeshDisplacementMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Center;
    
    ENGINE_API FMeshDisplacementMap();
};

