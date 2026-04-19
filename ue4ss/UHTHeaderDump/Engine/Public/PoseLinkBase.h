#pragma once
#include "CoreMinimal.h"
#include "PoseLinkBase.generated.h"

USTRUCT(BlueprintType)
struct FPoseLinkBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LinkID;
    
    ENGINE_API FPoseLinkBase();
};

