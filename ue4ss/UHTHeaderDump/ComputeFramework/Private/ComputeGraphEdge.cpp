#include "ComputeGraphEdge.h"

FComputeGraphEdge::FComputeGraphEdge() {
    this->KernelIndex = 0;
    this->KernelBindingIndex = 0;
    this->DataInterfaceIndex = 0;
    this->DataInterfaceBindingIndex = 0;
    this->bKernelInput = false;
}

