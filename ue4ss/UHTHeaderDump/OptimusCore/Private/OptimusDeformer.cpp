#include "OptimusDeformer.h"
#include "OptimusComponentSourceBindingContainer.h"
#include "OptimusResourceContainer.h"
#include "OptimusVariableContainer.h"

UOptimusDeformer::UOptimusDeformer() {
    this->Mesh = NULL;
    this->ActionStack = NULL;
    this->Status = EOptimusDeformerStatus::Modified;
    this->Graphs.AddDefaulted(1);
    this->Bindings = CreateDefaultSubobject<UOptimusComponentSourceBindingContainer>(TEXT("@Bindings"));
    this->Variables = CreateDefaultSubobject<UOptimusVariableContainer>(TEXT("@Variables"));
    this->Resources = CreateDefaultSubobject<UOptimusResourceContainer>(TEXT("@Resources"));
}

TArray<UOptimusVariableDescription*> UOptimusDeformer::GetVariables() const {
    return TArray<UOptimusVariableDescription*>();
}

TArray<UOptimusResourceDescription*> UOptimusDeformer::GetResources() const {
    return TArray<UOptimusResourceDescription*>();
}

TArray<UOptimusComponentSourceBinding*> UOptimusDeformer::GetComponentBindings() const {
    return TArray<UOptimusComponentSourceBinding*>();
}


