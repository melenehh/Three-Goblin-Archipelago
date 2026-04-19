#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EOptimusNodeGraphType.h"
#include "OptimusDataTypeRef.h"
#include "OptimusNodeGraphCollectionOwner.h"
#include "Templates/SubclassOf.h"
#include "OptimusNodeGraph.generated.h"

class UOptimusComponentSourceBinding;
class UOptimusComputeDataInterface;
class UOptimusNode;
class UOptimusNodeGraph;
class UOptimusNodeLink;
class UOptimusNodePin;
class UOptimusResourceDescription;
class UOptimusVariableDescription;

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusNodeGraph : public UObject, public IOptimusNodeGraphCollectionOwner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusNodeGraphType GraphType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TArray<UOptimusNode*> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TArray<UOptimusNodeLink*> Links;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOptimusNodeGraph*> Subgraphs;
    
public:
    UOptimusNodeGraph();

    UFUNCTION(BlueprintCallable)
    bool RenameGraph(UOptimusNodeGraph* InGraph, const FString& InNewName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveNodes(const TArray<UOptimusNode*>& InNodes);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveNode(UOptimusNode* InNode);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveLink(UOptimusNodePin* InNodeOutputPin, UOptimusNodePin* InNodeInputPin);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllLinks(UOptimusNodePin* InNodePin);
    
    UFUNCTION(BlueprintCallable)
    bool MoveGraph(UOptimusNodeGraph* InGraph, int32 InInsertBefore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubGraphReference(UOptimusNode* InNode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKernelFunction(UOptimusNode* InNode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFunctionReference(UOptimusNode* InNode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFunctionGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecutionGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomKernel(UOptimusNode* InNode) const;
    
    UFUNCTION(BlueprintPure)
    EOptimusNodeGraphType GetGraphType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UOptimusNodeGraph*> GetGraphs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGraphIndex() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UOptimusNode*> ExpandCollapsedNodes(UOptimusNode* InFunctionNode);
    
    UFUNCTION(BlueprintCallable)
    bool DuplicateNodes(const TArray<UOptimusNode*>& InNodes, const FVector2D& InPosition);
    
    UFUNCTION(BlueprintCallable)
    UOptimusNode* DuplicateNode(UOptimusNode* InNode, const FVector2D& InPosition);
    
    UFUNCTION(BlueprintCallable)
    UOptimusNode* ConvertFunctionToCustomKernel(UOptimusNode* InKernelFunction);
    
    UFUNCTION(BlueprintCallable)
    UOptimusNode* ConvertCustomKernelToFunction(UOptimusNode* InCustomKernel);
    
    UFUNCTION(BlueprintCallable)
    UOptimusNode* CollapseNodesToSubGraph(const TArray<UOptimusNode*>& InNodes);
    
    UFUNCTION(BlueprintCallable)
    UOptimusNode* CollapseNodesToFunction(const TArray<UOptimusNode*>& InNodes);
    
    UFUNCTION(BlueprintCallable)
    UOptimusNode* AddVariableGetNode(UOptimusVariableDescription* InVariableDesc, const FVector2D& InPosition);
    
    UFUNCTION(BlueprintCallable)
    UOptimusNode* AddValueNode(FOptimusDataTypeRef InDataTypeRef, const FVector2D& InPosition);
    
    UFUNCTION(BlueprintCallable)
    UOptimusNode* AddResourceSetNode(UOptimusResourceDescription* InResourceDesc, const FVector2D& InPosition);
    
    UFUNCTION(BlueprintCallable)
    UOptimusNode* AddResourceNode(UOptimusResourceDescription* InResourceDesc, const FVector2D& InPosition);
    
    UFUNCTION(BlueprintCallable)
    UOptimusNode* AddResourceGetNode(UOptimusResourceDescription* InResourceDesc, const FVector2D& InPosition);
    
    UFUNCTION(BlueprintCallable)
    UOptimusNode* AddNode(const TSubclassOf<UOptimusNode> InNodeClass, const FVector2D& InPosition);
    
    UFUNCTION(BlueprintCallable)
    bool AddLink(UOptimusNodePin* InNodeOutputPin, UOptimusNodePin* InNodeInputPin);
    
    UFUNCTION(BlueprintCallable)
    UOptimusNode* AddDataInterfaceNode(const TSubclassOf<UOptimusComputeDataInterface> InDataInterfaceClass, const FVector2D& InPosition);
    
    UFUNCTION(BlueprintCallable)
    UOptimusNode* AddComponentBindingGetNode(UOptimusComponentSourceBinding* InComponentBinding, const FVector2D& InPosition);
    

    // Fix for true pure virtual functions not being implemented
};

