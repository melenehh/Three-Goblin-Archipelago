#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PerPlatformBool.h"
#include "PerPlatformInt.h"
#include "VariableFrameStrippingSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVariableFrameStrippingSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformBool UseVariableFrameStripping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt FrameStrippingRate;
    
    UVariableFrameStrippingSettings();

};

