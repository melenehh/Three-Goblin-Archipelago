#include "OptimusNodeGraph.h"
#include "Templates/SubclassOf.h"

UOptimusNodeGraph::UOptimusNodeGraph() {
    this->GraphType = EOptimusNodeGraphType::Transient;
}

bool UOptimusNodeGraph::RenameGraph(UOptimusNodeGraph* InGraph, const FString& InNewName) {
    return false;
}

bool UOptimusNodeGraph::RemoveNodes(const TArray<UOptimusNode*>& InNodes) {
    return false;
}

bool UOptimusNodeGraph::RemoveNode(UOptimusNode* InNode) {
    return false;
}

bool UOptimusNodeGraph::RemoveLink(UOptimusNodePin* InNodeOutputPin, UOptimusNodePin* InNodeInputPin) {
    return false;
}

bool UOptimusNodeGraph::RemoveAllLinks(UOptimusNodePin* InNodePin) {
    return false;
}

bool UOptimusNodeGraph::MoveGraph(UOptimusNodeGraph* InGraph, int32 InInsertBefore) {
    return false;
}

bool UOptimusNodeGraph::IsSubGraphReference(UOptimusNode* InNode) const {
    return false;
}

bool UOptimusNodeGraph::IsKernelFunction(UOptimusNode* InNode) const {
    return false;
}

bool UOptimusNodeGraph::IsFunctionReference(UOptimusNode* InNode) const {
    return false;
}

bool UOptimusNodeGraph::IsFunctionGraph() const {
    return false;
}

bool UOptimusNodeGraph::IsExecutionGraph() const {
    return false;
}

bool UOptimusNodeGraph::IsCustomKernel(UOptimusNode* InNode) const {
    return false;
}

EOptimusNodeGraphType UOptimusNodeGraph::GetGraphType() const {
    return EOptimusNodeGraphType::Setup;
}

TArray<UOptimusNodeGraph*> UOptimusNodeGraph::GetGraphs() const {
    return TArray<UOptimusNodeGraph*>();
}

int32 UOptimusNodeGraph::GetGraphIndex() const {
    return 0;
}

TArray<UOptimusNode*> UOptimusNodeGraph::ExpandCollapsedNodes(UOptimusNode* InFunctionNode) {
    return TArray<UOptimusNode*>();
}

bool UOptimusNodeGraph::DuplicateNodes(const TArray<UOptimusNode*>& InNodes, const FVector2D& InPosition) {
    return false;
}

UOptimusNode* UOptimusNodeGraph::DuplicateNode(UOptimusNode* InNode, const FVector2D& InPosition) {
    return NULL;
}

UOptimusNode* UOptimusNodeGraph::ConvertFunctionToCustomKernel(UOptimusNode* InKernelFunction) {
    return NULL;
}

UOptimusNode* UOptimusNodeGraph::ConvertCustomKernelToFunction(UOptimusNode* InCustomKernel) {
    return NULL;
}

UOptimusNode* UOptimusNodeGraph::CollapseNodesToSubGraph(const TArray<UOptimusNode*>& InNodes) {
    return NULL;
}

UOptimusNode* UOptimusNodeGraph::CollapseNodesToFunction(const TArray<UOptimusNode*>& InNodes) {
    return NULL;
}

UOptimusNode* UOptimusNodeGraph::AddVariableGetNode(UOptimusVariableDescription* InVariableDesc, const FVector2D& InPosition) {
    return NULL;
}

UOptimusNode* UOptimusNodeGraph::AddValueNode(FOptimusDataTypeRef InDataTypeRef, const FVector2D& InPosition) {
    return NULL;
}

UOptimusNode* UOptimusNodeGraph::AddResourceSetNode(UOptimusResourceDescription* InResourceDesc, const FVector2D& InPosition) {
    return NULL;
}

UOptimusNode* UOptimusNodeGraph::AddResourceNode(UOptimusResourceDescription* InResourceDesc, const FVector2D& InPosition) {
    return NULL;
}

UOptimusNode* UOptimusNodeGraph::AddResourceGetNode(UOptimusResourceDescription* InResourceDesc, const FVector2D& InPosition) {
    return NULL;
}

UOptimusNode* UOptimusNodeGraph::AddNode(const TSubclassOf<UOptimusNode> InNodeClass, const FVector2D& InPosition) {
    return NULL;
}

bool UOptimusNodeGraph::AddLink(UOptimusNodePin* InNodeOutputPin, UOptimusNodePin* InNodeInputPin) {
    return false;
}

UOptimusNode* UOptimusNodeGraph::AddDataInterfaceNode(const TSubclassOf<UOptimusComputeDataInterface> InDataInterfaceClass, const FVector2D& InPosition) {
    return NULL;
}

UOptimusNode* UOptimusNodeGraph::AddComponentBindingGetNode(UOptimusComponentSourceBinding* InComponentBinding, const FVector2D& InPosition) {
    return NULL;
}


