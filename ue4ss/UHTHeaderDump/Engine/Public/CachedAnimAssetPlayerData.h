#pragma once
#include "CoreMinimal.h"
#include "CachedAnimAssetPlayerData.generated.h"

USTRUCT(BlueprintType)
struct FCachedAnimAssetPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateMachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateName;
    
    ENGINE_API FCachedAnimAssetPlayerData();
};

