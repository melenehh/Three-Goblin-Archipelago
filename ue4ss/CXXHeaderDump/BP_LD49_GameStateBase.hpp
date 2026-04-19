#ifndef UE4SS_SDK_BP_LD49_GameStateBase_HPP
#define UE4SS_SDK_BP_LD49_GameStateBase_HPP

class ABP_LD49_GameStateBase_C : public ALD49GameStateBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0310 (size: 0x8)
    class UBP_SaveProgression_C* ProgressionState;                                    // 0x0318 (size: 0x8)
    FName levelName;                                                                  // 0x0320 (size: 0x8)
    class UDataTable* TipListDatatable;                                               // 0x0328 (size: 0x8)
    class UDataTable* LevelDatatable;                                                 // 0x0330 (size: 0x8)
    FString SaveSlotName;                                                             // 0x0338 (size: 0x10)
    FString CustomLevelSaveSlotName;                                                  // 0x0348 (size: 0x10)
    class UBP_SaveCustomLevelProgression_C* CustomProgressionState;                   // 0x0358 (size: 0x8)
    FString levelPath;                                                                // 0x0360 (size: 0x10)
    int64 CurrentLevelId;                                                             // 0x0370 (size: 0x8)

    void UpdateUnlockedAchievements();
    void GetCustomLevelPreviewImage(FString levelPath, class UTexture2D*& Texture);
    void GetCustomLevelMetaData(FString levelPath, FLevelMetadata& Data);
    void CheatUnlockAllLevels();
    void GetLevelTotalPretzelsCount(FName levelName, int32& Count);
    void GetCurrentLevelName(FName& levelName);
    void GetLevelTime(const FName& levelName, bool Custom, double& Seconds);
    void GetUnlockedTips(TArray<FName>& UnlockedTips);
    void GetLevelCollectedPretzelsCount(FName levelName, bool Custom, int32& Count);
    void ShowTipPopupOnce(const FName TipRowName);
    void Is Tip Unlocked(const FName& TipRowName, bool& Unlocked);
    class UWBP_TipPopup_C* ShowTipPopup(FName TipRowName, bool FromMenu);
    void IsPretzelCollected(const FName& PretzelName, bool Custom, bool& Collected);
    void OnPretzelCollected(FName PretzelName);
    void OnLevelFinished(double LevelTime);
    void SaveProgression(bool Custom);
    void LoadProgression();
    void ReceiveBeginPlay();
    void OnAchivementsUpdated();
    void ExecuteUbergraph_BP_LD49_GameStateBase(int32 EntryPoint);
}; // Size: 0x378

#endif
