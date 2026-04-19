#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TargetRootSettings.h"
#include "RetargetRootSettings.generated.h"

UCLASS(Blueprintable)
class IKRIG_API URetargetRootSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetRootSettings Settings;
    
    URetargetRootSettings();

};

