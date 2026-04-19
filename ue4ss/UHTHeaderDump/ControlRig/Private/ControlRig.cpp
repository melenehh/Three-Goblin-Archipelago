#include "ControlRig.h"
#include "Templates/SubclassOf.h"

UControlRig::UControlRig() {
    this->EventQueue.AddDefaulted(1);
    this->ExecutionType = ERigExecutionType::Runtime;
    this->DynamicHierarchy = NULL;
    this->DataSourceRegistry = NULL;
    this->InteractionRig = NULL;
    this->InteractionRigClass = NULL;
}

void UControlRig::SetInteractionRigClass(TSubclassOf<UControlRig> InInteractionRigClass) {
}

void UControlRig::SetInteractionRig(UControlRig* InInteractionRig) {
}

void UControlRig::SelectControl(const FName& InControlName, bool bSelect) {
}

void UControlRig::RequestConstruction() {
}

bool UControlRig::IsControlSelected(const FName& InControlName) const {
    return false;
}

TSubclassOf<UControlRig> UControlRig::GetInteractionRigClass() const {
    return NULL;
}

UControlRig* UControlRig::GetInteractionRig() const {
    return NULL;
}

AActor* UControlRig::GetHostingActor() const {
    return NULL;
}

URigHierarchy* UControlRig::GetHierarchy() {
    return NULL;
}

TArray<UControlRig*> UControlRig::FindControlRigs(UObject* Outer, TSubclassOf<UControlRig> OptionalClass) {
    return TArray<UControlRig*>();
}

TArray<FName> UControlRig::CurrentControlSelection() const {
    return TArray<FName>();
}

UTransformableControlHandle* UControlRig::CreateTransformableControlHandle(UObject* Outer, const FName& ControlName) const {
    return NULL;
}

bool UControlRig::ClearControlSelection() {
    return false;
}


