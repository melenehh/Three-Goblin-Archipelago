#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshDeformerInstance -FallbackName=MeshDeformerInstance
#include "OptimusDeformerInstanceExecInfo.h"
#include "OptimusDeformerInstance.generated.h"

class UMeshComponent;
class UOptimusDeformerInstanceSettings;
class UOptimusVariableContainer;
class UOptimusVariableDescription;

UCLASS(Blueprintable)
class UOptimusDeformerInstance : public UMeshDeformerInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMeshComponent> MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOptimusDeformerInstanceSettings> InstanceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusDeformerInstanceExecInfo> ComputeGraphExecInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusVariableContainer* Variables;
    
public:
    UOptimusDeformerInstance();

    UFUNCTION(BlueprintCallable)
    bool SetVectorVariable(FName InVariableName, const FVector& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetVector4Variable(FName InVariableName, const FVector4& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetTransformVariable(FName InVariableName, const FTransform& InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetIntVariable(FName InVariableName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetFloatVariable(FName InVariableName, double InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetBoolVariable(FName InVariableName, bool InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UOptimusVariableDescription*> GetVariables() const;
    
    UFUNCTION(BlueprintCallable)
    bool EnqueueTriggerGraph(FName InTriggerGraphName);
    
};

