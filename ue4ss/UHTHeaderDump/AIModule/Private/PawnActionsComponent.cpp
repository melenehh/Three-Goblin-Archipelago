#include "PawnActionsComponent.h"

UDEPRECATED_PawnActionsComponent::UDEPRECATED_PawnActionsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ControlledPawn = NULL;
    this->ActionStacks.AddDefaulted(5);
    this->CurrentAction = NULL;
}

bool UDEPRECATED_PawnActionsComponent::K2_PushAction(UDEPRECATED_PawnAction* NewAction, TEnumAsByte<EAIRequestPriority::Type> Priority, UObject* Instigator) {
    return false;
}

bool UDEPRECATED_PawnActionsComponent::K2_PerformAction(APawn* Pawn, UDEPRECATED_PawnAction* Action, TEnumAsByte<EAIRequestPriority::Type> Priority) {
    return false;
}

TEnumAsByte<EPawnActionAbortState::Type> UDEPRECATED_PawnActionsComponent::K2_ForceAbortAction(UDEPRECATED_PawnAction* ActionToAbort) {
    return EPawnActionAbortState::NeverStarted;
}

TEnumAsByte<EPawnActionAbortState::Type> UDEPRECATED_PawnActionsComponent::K2_AbortAction(UDEPRECATED_PawnAction* ActionToAbort) {
    return EPawnActionAbortState::NeverStarted;
}


