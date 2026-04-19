#pragma once
#include "CoreMinimal.h"
#include "BlueprintInputKeyDelegateBinding.h"
#include "InputDelegateBinding.h"
#include "InputKeyDelegateBinding.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInputKeyDelegateBinding : public UInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings;
    
    UInputKeyDelegateBinding();

};

