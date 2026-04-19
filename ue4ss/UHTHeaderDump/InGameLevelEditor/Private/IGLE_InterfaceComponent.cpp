#include "IGLE_InterfaceComponent.h"

UIGLE_InterfaceComponent::UIGLE_InterfaceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CallOnPropertyChangedOnLoad = true;
    this->ActorID = 0;
}

void UIGLE_InterfaceComponent::SetRuntimeName(const FString& NewRuntimeName) {
}

void UIGLE_InterfaceComponent::OnOwnerDestroyed(AActor* Owner) {
}

bool UIGLE_InterfaceComponent::GetPropertyValueByName(const FString& PropertyName, UIGLE_PropertyValueObject*& Value) {
    return false;
}

bool UIGLE_InterfaceComponent::GetPropertyByValueObject(UIGLE_PropertyValueObject* PropertyValueObject, FIGLEProperty& Property) {
    return false;
}

bool UIGLE_InterfaceComponent::GetPropertyByName(const FString& PropertyName, FIGLEProperty& Property) {
    return false;
}

void UIGLE_InterfaceComponent::CallOnPropertyValueChanged(const FString& PropertyName) {
}


