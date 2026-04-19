#pragma once
#include "CoreMinimal.h"
#include "SmartName.generated.h"

USTRUCT(BlueprintType)
struct FSmartName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DisplayName;
    
    ENGINE_API FSmartName();
};

