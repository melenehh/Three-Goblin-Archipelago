#pragma once
#include "CoreMinimal.h"
#include "InputAxisKeyDelegateBinding.h"
#include "InputVectorAxisDelegateBinding.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInputVectorAxisDelegateBinding : public UInputAxisKeyDelegateBinding {
    GENERATED_BODY()
public:
    UInputVectorAxisDelegateBinding();

};

