#pragma once
#include "CoreMinimal.h"
#include "BlueprintInputAxisDelegateBinding.h"
#include "InputDelegateBinding.h"
#include "InputAxisDelegateBinding.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInputAxisDelegateBinding : public UInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings;
    
    UInputAxisDelegateBinding();

};

