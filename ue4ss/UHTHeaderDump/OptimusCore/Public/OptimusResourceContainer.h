#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OptimusResourceContainer.generated.h"

class UOptimusResourceDescription;

UCLASS(Blueprintable)
class UOptimusResourceContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOptimusResourceDescription*> Descriptions;
    
    UOptimusResourceContainer();

};

