#include "CommonActionWidget.h"

UCommonActionWidget::UCommonActionWidget() {
    this->EnhancedInputAction = NULL;
    this->ProgressDynamicMaterial = NULL;
}

void UCommonActionWidget::SetInputActions(TArray<FDataTableRowHandle> NewInputActions) {
}

void UCommonActionWidget::SetInputAction(FDataTableRowHandle InputActionRow) {
}

void UCommonActionWidget::SetIconRimBrush(FSlateBrush InIconRimBrush) {
}

void UCommonActionWidget::SetEnhancedInputAction(UInputAction* InInputAction) {
}

bool UCommonActionWidget::IsHeldAction() const {
    return false;
}

FSlateBrush UCommonActionWidget::GetIcon() const {
    return FSlateBrush{};
}

FText UCommonActionWidget::GetDisplayText() const {
    return FText::GetEmpty();
}


