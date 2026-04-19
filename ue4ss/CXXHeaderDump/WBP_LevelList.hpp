#ifndef UE4SS_SDK_WBP_LevelList_HPP
#define UE4SS_SDK_WBP_LevelList_HPP

class UWBP_LevelList_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UTextBlock* Caption;                                                        // 0x0418 (size: 0x8)
    class UVerticalBox* CustomLevelList;                                              // 0x0420 (size: 0x8)
    class UVerticalBox* CustomVerticalBox;                                            // 0x0428 (size: 0x8)
    class UTextBlock* Description;                                                    // 0x0430 (size: 0x8)
    class UOverlay* DescriptionBox;                                                   // 0x0438 (size: 0x8)
    class UOverlay* DescriptionTextBox;                                               // 0x0440 (size: 0x8)
    class UImage* Image;                                                              // 0x0448 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0450 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0458 (size: 0x8)
    class UImage* Image_61;                                                           // 0x0460 (size: 0x8)
    class UVerticalBox* InfoDisplay;                                                  // 0x0468 (size: 0x8)
    class UVerticalBox* LevelList;                                                    // 0x0470 (size: 0x8)
    class UWBPC_Button_C* NewButton;                                                  // 0x0478 (size: 0x8)
    class UVerticalBox* OfficialVerticalBox;                                          // 0x0480 (size: 0x8)
    class UImage* Preview;                                                            // 0x0488 (size: 0x8)
    class UTextBlock* TextBlock_9;                                                    // 0x0490 (size: 0x8)
    class UCircularThrobber* Throbber;                                                // 0x0498 (size: 0x8)
    class UWBP_ChallengeIndicator_C* WBP_ChallengeIndicator;                          // 0x04A0 (size: 0x8)
    class UWBP_PretzelIndicator_C* WBP_PretzelIndicator;                              // 0x04A8 (size: 0x8)
    class UWBP_ScoreIndicator_C* WBP_ScoreIndicator;                                  // 0x04B0 (size: 0x8)
    class UWBP_TimeIndicator_C* WBP_TimeIndicator;                                    // 0x04B8 (size: 0x8)
    class UWBPC_ListButton_C* WBPC_LevelButton_C;                                     // 0x04C0 (size: 0x8)
    class UWBPC_ListButton_C* WBPC_LevelButton_C_1;                                   // 0x04C8 (size: 0x8)
    class UWBPC_ListButton_C* WBPC_LevelButton_C_2;                                   // 0x04D0 (size: 0x8)
    class UWBPC_ListButton_C* WBPC_LevelButton_C_3;                                   // 0x04D8 (size: 0x8)
    FWBP_LevelList_COnClose OnClose;                                                  // 0x04E0 (size: 0x10)
    void OnClose();
    class UDataTable* LevelDatatable;                                                 // 0x04F0 (size: 0x8)
    TSoftObjectPtr<UWorld> SelectedOfficialLevel;                                     // 0x04F8 (size: 0x28)
    bool CustomView;                                                                  // 0x0520 (size: 0x1)
    FString SelectedCustomLevel;                                                      // 0x0528 (size: 0x10)

    void OnDownloadedLevelsReceived(const TArray<FLevelInfo>& Levels);
    void UpdateDownloadedLevels();
    void ClearInfo();
    void UpdateInfo(FString Name, FString Description, class UTexture2D* PreviewImage, int32 TotalPretzelCount, double LevelTime, int32 CollectedPretzelsCount, bool Unlocked, bool Challenge);
    void OnCustomLevelButtonSelected(class UWBPC_ListButton_C* SelectedButton);
    void UpdateCustomLevels();
    void Switch View(bool Custom, bool Downloaded);
    void OnOfficialLevelButtonSelected(class UWBPC_ListButton_C* SelectedButton);
    void SelectLevel(FName LevelRow, FLevelInfo LevelInfo, bool Unlocked);
    void UpdateOfficialLevels();
    void BP_OnActivated();
    void BndEvt__WBP_LevelList_NewButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_LevelList(int32 EntryPoint);
    void OnClose__DelegateSignature();
}; // Size: 0x538

#endif
