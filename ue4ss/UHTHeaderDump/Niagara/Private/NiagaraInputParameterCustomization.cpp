#include "NiagaraInputParameterCustomization.h"

FNiagaraInputParameterCustomization::FNiagaraInputParameterCustomization() {
    this->WidgetType = ENiagaraInputWidgetType::Default;
    this->bHasMinValue = false;
    this->MinValue = 0.00f;
    this->bHasMaxValue = false;
    this->MaxValue = 0.00f;
    this->bHasStepWidth = false;
    this->StepWidth = 0.00f;
    this->bBroadcastValueChangesOnCommitOnly = false;
}

