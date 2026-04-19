#pragma once
#include "CoreMinimal.h"
#include "NavLinkId.generated.h"

USTRUCT(BlueprintType)
struct FNavLinkId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ID;
    
public:
    ENGINE_API FNavLinkId();
};

