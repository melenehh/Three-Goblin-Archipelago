#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PlatformUserId -FallbackName=PlatformUserId
#include "OnLocalPlayerSaveGameLoadedDelegate.h"
#include "SaveGame.h"
#include "Templates/SubclassOf.h"
#include "LocalPlayerSaveGame.generated.h"

class APlayerController;
class ULocalPlayer;
class ULocalPlayerSaveGame;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class ULocalPlayerSaveGame : public USaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULocalPlayer* OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SaveSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedDataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LoadedDataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSaveRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastSuccessfulSaveRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastErrorSaveRequest;
    
public:
    ULocalPlayerSaveGame();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasSaveRequested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasLastSaveSuccessful() const;
    
    UFUNCTION(BlueprintCallable)
    bool SaveGameToSlotForLocalPlayer();
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreSave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostSave(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostLoad();
    
    UFUNCTION(BlueprintCallable)
    static ULocalPlayerSaveGame* LoadOrCreateSaveGameForLocalPlayer(TSubclassOf<ULocalPlayerSaveGame> SaveGameClass, APlayerController* LocalPlayerController, const FString& SlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaveInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSaveSlotName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSavedDataVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlatformUserIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlatformUserId GetPlatformUserId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetLocalPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLatestDataVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInvalidDataVersion() const;
    
    UFUNCTION(BlueprintCallable)
    bool AsyncSaveGameToSlotForLocalPlayer();
    
    UFUNCTION(BlueprintCallable)
    static bool AsyncLoadOrCreateSaveGameForLocalPlayer(TSubclassOf<ULocalPlayerSaveGame> SaveGameClass, APlayerController* LocalPlayerController, const FString& SlotName, FOnLocalPlayerSaveGameLoaded Delegate);
    
};

