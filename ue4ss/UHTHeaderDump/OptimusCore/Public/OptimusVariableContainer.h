#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OptimusVariableContainer.generated.h"

class UOptimusVariableDescription;

UCLASS(Blueprintable)
class UOptimusVariableContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOptimusVariableDescription*> Descriptions;
    
    UOptimusVariableContainer();

};

