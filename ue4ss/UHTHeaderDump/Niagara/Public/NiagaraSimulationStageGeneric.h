#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraCore -ObjectName=ENiagaraIterationSource -FallbackName=ENiagaraIterationSource
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=ENiagaraDirectDispatchElementType -FallbackName=ENiagaraDirectDispatchElementType
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=ENiagaraGpuDispatchType -FallbackName=ENiagaraGpuDispatchType
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=ENiagaraSimStageExecuteBehavior -FallbackName=ENiagaraSimStageExecuteBehavior
#include "NiagaraParameterBindingWithValue.h"
#include "NiagaraSimulationStageBase.h"
#include "NiagaraVariableAttributeBinding.h"
#include "NiagaraVariableDataInterfaceBinding.h"
#include "NiagaraSimulationStageGeneric.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding EnabledBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraIterationSource IterationSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterBindingWithValue NumIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSimStageExecuteBehavior ExecuteBehavior;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisablePartialParticleUpdate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableDataInterfaceBinding DataInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bParticleIterationStateEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding ParticleIterationStateBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint ParticleIterationStateRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGpuDispatchForceLinear: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideGpuDispatchNumThreads: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterBindingWithValue OverrideGpuDispatchNumThreadsX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterBindingWithValue OverrideGpuDispatchNumThreadsY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterBindingWithValue OverrideGpuDispatchNumThreadsZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraGpuDispatchType DirectDispatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDirectDispatchElementType DirectDispatchElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterBindingWithValue ElementCountX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterBindingWithValue ElementCountY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterBindingWithValue ElementCountZ;
    
    UNiagaraSimulationStageGeneric();

};

