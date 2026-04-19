#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "OptimusExecutionDomain.h"
#include "OptimusExecutionDomainProvider.h"
#include "OptimusNodeAdderPinProvider.h"
#include "OptimusNode_ComputeKernelBase.h"
#include "OptimusParameterBinding.h"
#include "OptimusParameterBindingArray.h"
#include "OptimusParameterBindingProvider.h"
#include "OptimusSecondaryInputBindingsGroup.h"
#include "OptimusShaderText.h"
#include "OptimusShaderTextProvider.h"
#include "OptimusValidatedName.h"
#include "Optimus_ShaderBinding.h"
#include "OptimusNode_CustomComputeKernel.generated.h"

class UComputeSource;

UCLASS(Blueprintable)
class UOptimusNode_CustomComputeKernel : public UOptimusNode_ComputeKernelBase, public IOptimusShaderTextProvider, public IOptimusParameterBindingProvider, public IOptimusNodeAdderPinProvider, public IOptimusExecutionDomainProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusValidatedName KernelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusExecutionDomain ExecutionDomain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector GroupSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimus_ShaderBinding> Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusParameterBinding> InputBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusParameterBinding> OutputBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusParameterBindingArray InputBindingArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusParameterBindingArray OutputBindingArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusSecondaryInputBindingsGroup> SecondaryInputBindingGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UComputeSource*> AdditionalSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusShaderText ShaderSource;
    
    UOptimusNode_CustomComputeKernel();


    // Fix for true pure virtual functions not being implemented
};

