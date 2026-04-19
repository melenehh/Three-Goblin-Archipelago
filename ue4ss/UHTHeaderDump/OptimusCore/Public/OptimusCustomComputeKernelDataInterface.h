#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataInterface -FallbackName=ComputeDataInterface
#include "OptimusCustomComputeKernelDataInterface.generated.h"

class UOptimusComponentSourceBinding;

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusCustomComputeKernelDataInterface : public UComputeDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusComponentSourceBinding> ComponentSourceBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NumThreadsExpression;
    
    UOptimusCustomComputeKernelDataInterface();

};

