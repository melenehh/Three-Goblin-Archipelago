#include "UIInputConfig.h"

FUIInputConfig::FUIInputConfig() {
    this->bIgnoreMoveInput = false;
    this->bIgnoreLookInput = false;
    this->InputMode = ECommonInputMode::Menu;
    this->MouseCaptureMode = EMouseCaptureMode::NoCapture;
    this->bHideCursorDuringViewportCapture = false;
}

