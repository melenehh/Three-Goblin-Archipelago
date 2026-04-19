#pragma once
#include "CoreMinimal.h"
#include "BlueprintInputAxisKeyDelegateBinding.h"
#include "InputDelegateBinding.h"
#include "InputAxisKeyDelegateBinding.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInputAxisKeyDelegateBinding : public UInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings;
    
    UInputAxisKeyDelegateBinding();

};

