#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ComputeDataInterface.generated.h"

UCLASS(Abstract, Blueprintable, Const)
class COMPUTEFRAMEWORK_API UComputeDataInterface : public UObject {
    GENERATED_BODY()
public:
    UComputeDataInterface();

};

