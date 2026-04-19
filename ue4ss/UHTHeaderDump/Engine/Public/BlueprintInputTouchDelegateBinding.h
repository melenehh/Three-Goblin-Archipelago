#pragma once
#include "CoreMinimal.h"
#include "BlueprintInputDelegateBinding.h"
#include "EInputEvent.h"
#include "BlueprintInputTouchDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInputEvent> InputKeyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionNameToBind;
    
    ENGINE_API FBlueprintInputTouchDelegateBinding();
};

