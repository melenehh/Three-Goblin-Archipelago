#include "OptimusDeformerInstance.h"

UOptimusDeformerInstance::UOptimusDeformerInstance() {
    this->Variables = NULL;
}

bool UOptimusDeformerInstance::SetVectorVariable(FName InVariableName, const FVector& InValue) {
    return false;
}

bool UOptimusDeformerInstance::SetVector4Variable(FName InVariableName, const FVector4& InValue) {
    return false;
}

bool UOptimusDeformerInstance::SetTransformVariable(FName InVariableName, const FTransform& InValue) {
    return false;
}

bool UOptimusDeformerInstance::SetIntVariable(FName InVariableName, int32 InValue) {
    return false;
}

bool UOptimusDeformerInstance::SetFloatVariable(FName InVariableName, double InValue) {
    return false;
}

bool UOptimusDeformerInstance::SetBoolVariable(FName InVariableName, bool InValue) {
    return false;
}

TArray<UOptimusVariableDescription*> UOptimusDeformerInstance::GetVariables() const {
    return TArray<UOptimusVariableDescription*>();
}

bool UOptimusDeformerInstance::EnqueueTriggerGraph(FName InTriggerGraphName) {
    return false;
}


