#pragma once
#include "CoreMinimal.h"
#include "BlueprintInputActionDelegateBinding.h"
#include "InputDelegateBinding.h"
#include "InputActionDelegateBinding.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInputActionDelegateBinding : public UInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings;
    
    UInputActionDelegateBinding();

};

