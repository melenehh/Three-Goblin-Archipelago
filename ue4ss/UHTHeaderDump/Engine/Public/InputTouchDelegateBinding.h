#pragma once
#include "CoreMinimal.h"
#include "BlueprintInputTouchDelegateBinding.h"
#include "InputDelegateBinding.h"
#include "InputTouchDelegateBinding.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInputTouchDelegateBinding : public UInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings;
    
    UInputTouchDelegateBinding();

};

