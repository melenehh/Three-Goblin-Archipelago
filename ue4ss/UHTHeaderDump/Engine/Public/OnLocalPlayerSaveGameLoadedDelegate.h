#pragma once
#include "CoreMinimal.h"
#include "OnLocalPlayerSaveGameLoadedDelegate.generated.h"

class ULocalPlayerSaveGame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLocalPlayerSaveGameLoaded, ULocalPlayerSaveGame*, SaveGame);

