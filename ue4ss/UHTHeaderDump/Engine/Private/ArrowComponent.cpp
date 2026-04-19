#include "ArrowComponent.h"

UArrowComponent::UArrowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bUseEditorCompositing = true;
    this->ArrowSize = 1.00f;
    this->ArrowLength = 80.00f;
    this->ScreenSize = 0.00f;
    this->bIsScreenSizeScaled = false;
    this->bTreatAsASprite = false;
}

void UArrowComponent::SetUseInEditorScaling(bool bNewValue) {
}

void UArrowComponent::SetTreatAsASprite(bool bNewValue) {
}

void UArrowComponent::SetScreenSize(float NewScreenSize) {
}

void UArrowComponent::SetIsScreenSizeScaled(bool bNewValue) {
}

void UArrowComponent::SetArrowSize(float NewSize) {
}

void UArrowComponent::SetArrowLength(float NewLength) {
}

void UArrowComponent::SetArrowFColor(FColor NewColor) {
}

void UArrowComponent::SetArrowColor(FLinearColor NewColor) {
}


