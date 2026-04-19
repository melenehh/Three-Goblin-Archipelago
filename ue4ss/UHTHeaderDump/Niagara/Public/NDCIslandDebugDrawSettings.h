#pragma once
#include "CoreMinimal.h"
#include "NDCIslandDebugDrawSettings.generated.h"

USTRUCT(BlueprintType)
struct FNDCIslandDebugDrawSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowIslandBounds: 1;
    
    NIAGARA_API FNDCIslandDebugDrawSettings();
};

