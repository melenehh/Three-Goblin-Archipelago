#pragma once
#include "CoreMinimal.h"
#include "OptimusRawBufferDataInterface.h"
#include "OptimusPersistentBufferDataInterface.generated.h"

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusPersistentBufferDataInterface : public UOptimusRawBufferDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResourceName;
    
    UOptimusPersistentBufferDataInterface();

};

