#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "BlueprintInputDelegateBinding.h"
#include "BlueprintInputAxisKeyDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey AxisKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionNameToBind;
    
    ENGINE_API FBlueprintInputAxisKeyDelegateBinding();
};

