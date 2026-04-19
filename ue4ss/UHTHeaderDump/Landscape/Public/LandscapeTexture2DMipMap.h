#pragma once
#include "CoreMinimal.h"
#include "LandscapeTexture2DMipMap.generated.h"

USTRUCT(BlueprintType)
struct FLandscapeTexture2DMipMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompressed;
    
    LANDSCAPE_API FLandscapeTexture2DMipMap();
};

