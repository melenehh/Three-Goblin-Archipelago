#include "AISense.h"

UAISense::UAISense() {
    this->NotifyType = EAISenseNotifyType::OnEveryPerception;
    this->bWantsNewPawnNotification = false;
    this->bAutoRegisterAllPawnsAsSources = false;
    this->PerceptionSystemInstance = NULL;
}


