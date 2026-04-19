#include "LoadingWidgetSettings.h"

FLoadingWidgetSettings::FLoadingWidgetSettings() {
    this->LoadingIconType = ELoadingIconType::LIT_Throbber;
    this->LoadingWidgetType = ELoadingWidgetType::LWT_Horizontal;
    this->bLoadingTextRightPosition = false;
    this->bLoadingTextTopPosition = false;
    this->Space = 0.00f;
    this->bHideLoadingWidgetWhenCompletes = false;
}

