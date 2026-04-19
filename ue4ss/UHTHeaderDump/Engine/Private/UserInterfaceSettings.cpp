#include "UserInterfaceSettings.h"

UUserInterfaceSettings::UUserInterfaceSettings() {
    this->RenderFocusRule = ERenderFocusRule::Never;
    this->ApplicationScale = 1.00f;
    this->UIScaleRule = EUIScalingRule::ShortestSide;
    this->bAllowHighDPIInGameMode = false;
    this->bLoadWidgetsOnDedicatedServer = true;
    this->bAuthorizeAutomaticWidgetVariableCreation = true;
    this->CustomScalingRuleClassInstance = NULL;
    this->CustomScalingRule = NULL;
}


