#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_PreviewMeshProvider -FallbackName=Interface_PreviewMeshProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshDeformer -FallbackName=MeshDeformer
#include "EOptimusDeformerStatus.h"
#include "OptimusComputeGraphInfo.h"
#include "OptimusNodeFunctionLibraryOwner.h"
#include "OptimusNodeGraphCollectionOwner.h"
#include "OptimusPathResolver.h"
#include "OptimusDeformer.generated.h"

class UOptimusActionStack;
class UOptimusComponentSourceBinding;
class UOptimusComponentSourceBindingContainer;
class UOptimusNodeGraph;
class UOptimusResourceContainer;
class UOptimusResourceDescription;
class UOptimusVariableContainer;
class UOptimusVariableDescription;
class USkeletalMesh;

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusDeformer : public UMeshDeformer, public IInterface_PreviewMeshProvider, public IOptimusPathResolver, public IOptimusNodeGraphCollectionOwner, public IOptimusNodeFunctionLibraryOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Mesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusComputeGraphInfo> ComputeGraphs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOptimusActionStack* ActionStack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusDeformerStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOptimusNodeGraph*> Graphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusComponentSourceBindingContainer* Bindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusVariableContainer* Variables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusResourceContainer* Resources;
    
public:
    UOptimusDeformer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UOptimusVariableDescription*> GetVariables() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UOptimusResourceDescription*> GetResources() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UOptimusComponentSourceBinding*> GetComponentBindings() const;
    

    // Fix for true pure virtual functions not being implemented
};

