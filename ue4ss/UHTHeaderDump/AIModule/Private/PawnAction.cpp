#include "PawnAction.h"
#include "Templates/SubclassOf.h"

UDEPRECATED_PawnAction::UDEPRECATED_PawnAction() {
    this->ChildAction = NULL;
    this->ParentAction = NULL;
    this->OwnerComponent = NULL;
    this->Instigator = NULL;
    this->BrainComp = NULL;
    this->bAllowNewSameClassInstance = false;
    this->bReplaceActiveSameClassInstance = false;
    this->bShouldPauseMovement = false;
    this->bAlwaysNotifyOnFinished = false;
}

TEnumAsByte<EAIRequestPriority::Type> UDEPRECATED_PawnAction::GetActionPriority() {
    return EAIRequestPriority::SoftScript;
}

void UDEPRECATED_PawnAction::Finish(TEnumAsByte<EPawnActionResult::Type> WithResult) {
}

UDEPRECATED_PawnAction* UDEPRECATED_PawnAction::CreateActionInstance(UObject* WorldContextObject, TSubclassOf<UDEPRECATED_PawnAction> ActionClass) {
    return NULL;
}


