#pragma once
#include "CoreMinimal.h"
#include "BlueprintInputDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct FBlueprintInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bConsumeInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExecuteWhenPaused: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideParentBinding: 1;
    
    ENGINE_API FBlueprintInputDelegateBinding();
};

