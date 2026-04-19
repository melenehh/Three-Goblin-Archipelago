#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OptimusNodeLink.generated.h"

class UOptimusNodePin;

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusNodeLink : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusNodePin* NodeOutputPin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusNodePin* NodeInputPin;
    
public:
    UOptimusNodeLink();

};

