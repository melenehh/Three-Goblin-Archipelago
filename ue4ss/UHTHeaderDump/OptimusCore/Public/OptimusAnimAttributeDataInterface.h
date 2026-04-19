#pragma once
#include "CoreMinimal.h"
#include "OptimusAnimAttributeArray.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusAnimAttributeDataInterface.generated.h"

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusAnimAttributeDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusAnimAttributeArray AttributeArray;
    
    UOptimusAnimAttributeDataInterface();

};

