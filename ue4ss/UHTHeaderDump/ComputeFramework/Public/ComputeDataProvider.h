#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ComputeDataProvider.generated.h"

UCLASS(Abstract, Blueprintable)
class COMPUTEFRAMEWORK_API UComputeDataProvider : public UObject {
    GENERATED_BODY()
public:
    UComputeDataProvider();

};

