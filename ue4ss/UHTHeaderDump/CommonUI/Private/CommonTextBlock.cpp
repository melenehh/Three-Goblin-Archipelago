#include "CommonTextBlock.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "Templates/SubclassOf.h"

UCommonTextBlock::UCommonTextBlock() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->MobileFontSizeMultiplier = 1.00f;
    this->Style = NULL;
    this->ScrollStyle = NULL;
    this->bIsScrollingEnabled = true;
    this->bDisplayAllCaps = false;
    this->bAutoCollapseWithEmptyText = false;
}

void UCommonTextBlock::SetWrapTextWidth(int32 InWrapTextAt) {
}

void UCommonTextBlock::SetTextCase(bool bUseAllCaps) {
}

void UCommonTextBlock::SetStyle(TSubclassOf<UCommonTextStyle> InStyle) {
}

void UCommonTextBlock::SetScrollingEnabled(bool bInIsScrollingEnabled) {
}

void UCommonTextBlock::SetMobileFontSizeMultiplier(float InMobileFontSizeMultiplier) {
}

void UCommonTextBlock::SetMargin(const FMargin& InMargin) {
}

void UCommonTextBlock::SetLineHeightPercentage(float InLineHeightPercentage) {
}

void UCommonTextBlock::ResetScrollState() {
}

float UCommonTextBlock::GetMobileFontSizeMultiplier() const {
    return 0.0f;
}

FMargin UCommonTextBlock::GetMargin() {
    return FMargin{};
}


