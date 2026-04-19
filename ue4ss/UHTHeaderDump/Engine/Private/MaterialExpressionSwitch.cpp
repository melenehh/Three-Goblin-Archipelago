#include "MaterialExpressionSwitch.h"

UMaterialExpressionSwitch::UMaterialExpressionSwitch() {
    this->Description = TEXT("Switch");
    this->ConstSwitchValue = 0.00f;
    this->ConstDefault = 0.00f;
    this->Inputs.AddDefaulted(1);
}


