#ifndef UE4SS_SDK_BP_GoblinGameInstance_HPP
#define UE4SS_SDK_BP_GoblinGameInstance_HPP

class UBP_GoblinGameInstance_C : public UIGLE_GI_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    TSubclassOf<class UBP_SkinComponentBase_C> SelectedSkin;                          // 0x0240 (size: 0x8)
    class UTexture* LoadingScreenTexture_For_Caching_Purposes;                        // 0x0248 (size: 0x8)
    TArray<FString> DefaultConsoleCommands;                                           // 0x0250 (size: 0x10)

    void ExecuteDefaultConsoleCommands();
    void ReceiveInit();
    void ExecuteUbergraph_BP_GoblinGameInstance(int32 EntryPoint);
}; // Size: 0x260

#endif
