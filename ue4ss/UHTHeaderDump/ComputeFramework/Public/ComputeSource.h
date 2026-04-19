#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ComputeSource.generated.h"

class UComputeSource;

UCLASS(Abstract, Blueprintable)
class COMPUTEFRAMEWORK_API UComputeSource : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UComputeSource*> AdditionalSources;
    
    UComputeSource();

};

