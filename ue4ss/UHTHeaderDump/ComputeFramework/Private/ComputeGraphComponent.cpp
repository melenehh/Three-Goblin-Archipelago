#include "ComputeGraphComponent.h"

UComputeGraphComponent::UComputeGraphComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComputeGraph = NULL;
}

void UComputeGraphComponent::QueueExecute() {
}

void UComputeGraphComponent::DestroyDataProviders() {
}

void UComputeGraphComponent::CreateDataProviders(int32 InBindingIndex, UObject* InBindingObject) {
}


