#pragma once
#include "CoreMinimal.h"
#include "NavLinkAuxiliaryId.generated.h"

USTRUCT(BlueprintType)
struct FNavLinkAuxiliaryId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ID;
    
public:
    ENGINE_API FNavLinkAuxiliaryId();
};

