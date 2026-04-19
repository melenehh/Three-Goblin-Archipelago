#include "IGLE_RuntimeSubsystem.h"

UIGLE_RuntimeSubsystem::UIGLE_RuntimeSubsystem() {
    this->IsInLevelEditorMode = false;
}

void UIGLE_RuntimeSubsystem::RegisterPlacableActorInfoFromDataTable(UDataTable* DataTable) {
}

void UIGLE_RuntimeSubsystem::RegisterPlacableActorInfoFromClasses(const TArray<FString>& ContentPaths, TArray<AActor*>& TransientActors, bool DeferDestruction) {
}

void UIGLE_RuntimeSubsystem::RegisterPlacableActorInfo(const FIGLEPlacableActorInfo& Info) {
}


