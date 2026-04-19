#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeSource -FallbackName=ComputeSource
#include "OptimusShaderTextProvider.h"
#include "OptimusSource.generated.h"

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusSource : public UComputeSource, public IOptimusShaderTextProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceText;
    
public:
    UOptimusSource();


    // Fix for true pure virtual functions not being implemented
};

