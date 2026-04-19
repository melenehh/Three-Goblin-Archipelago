#include "LocalPlayerSaveGame.h"
#include "Templates/SubclassOf.h"

ULocalPlayerSaveGame::ULocalPlayerSaveGame() {
    this->OwningPlayer = NULL;
    this->SavedDataVersion = 0;
    this->LoadedDataVersion = -1;
    this->CurrentSaveRequest = 0;
    this->LastSuccessfulSaveRequest = 0;
    this->LastErrorSaveRequest = 0;
}

bool ULocalPlayerSaveGame::WasSaveRequested() const {
    return false;
}

bool ULocalPlayerSaveGame::WasLoaded() const {
    return false;
}

bool ULocalPlayerSaveGame::WasLastSaveSuccessful() const {
    return false;
}

bool ULocalPlayerSaveGame::SaveGameToSlotForLocalPlayer() {
    return false;
}

void ULocalPlayerSaveGame::ResetToDefault() {
}





ULocalPlayerSaveGame* ULocalPlayerSaveGame::LoadOrCreateSaveGameForLocalPlayer(TSubclassOf<ULocalPlayerSaveGame> SaveGameClass, APlayerController* LocalPlayerController, const FString& SlotName) {
    return NULL;
}

bool ULocalPlayerSaveGame::IsSaveInProgress() const {
    return false;
}

FString ULocalPlayerSaveGame::GetSaveSlotName() const {
    return TEXT("");
}

int32 ULocalPlayerSaveGame::GetSavedDataVersion() const {
    return 0;
}

int32 ULocalPlayerSaveGame::GetPlatformUserIndex() const {
    return 0;
}

FPlatformUserId ULocalPlayerSaveGame::GetPlatformUserId() const {
    return FPlatformUserId{};
}

APlayerController* ULocalPlayerSaveGame::GetLocalPlayerController() const {
    return NULL;
}

int32 ULocalPlayerSaveGame::GetLatestDataVersion() const {
    return 0;
}

int32 ULocalPlayerSaveGame::GetInvalidDataVersion() const {
    return 0;
}

bool ULocalPlayerSaveGame::AsyncSaveGameToSlotForLocalPlayer() {
    return false;
}

bool ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer(TSubclassOf<ULocalPlayerSaveGame> SaveGameClass, APlayerController* LocalPlayerController, const FString& SlotName, FOnLocalPlayerSaveGameLoaded Delegate) {
    return false;
}


