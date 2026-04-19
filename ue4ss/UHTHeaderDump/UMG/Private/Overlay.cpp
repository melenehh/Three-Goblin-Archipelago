#include "Overlay.h"
#include "ESlateVisibility.h"

UOverlay::UOverlay() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
}

bool UOverlay::ReplaceOverlayChildAt(int32 Index, UWidget* Content) {
    return false;
}

UOverlaySlot* UOverlay::AddChildToOverlay(UWidget* Content) {
    return NULL;
}


