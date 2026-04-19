#pragma once
#include "CoreMinimal.h"
#include "ERefractionCoverageMode.generated.h"

UENUM(BlueprintType)
enum ERefractionCoverageMode {
    RCM_CoverageIgnored,
    RCM_CoverageAccountedFor,
};

