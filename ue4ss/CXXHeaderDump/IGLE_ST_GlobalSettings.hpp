#ifndef UE4SS_SDK_IGLE_ST_GlobalSettings_HPP
#define UE4SS_SDK_IGLE_ST_GlobalSettings_HPP

struct FIGLE_ST_GlobalSettings
{
    TSoftClassPtr<AGameModeBase> OverrideEditorGameMode_22_EA1426584C895499B814AE9B088E04A1; // 0x0000 (size: 0x28)
    TSoftClassPtr<AGameModeBase> OverridePlayGameMode_23_CA82ADC34C5AFCB8968AE9BCBE31A8D6; // 0x0028 (size: 0x28)
    TArray<FString> PlacableActorsScanPaths_27_AAD5D263488D1838A623F097133EA28B;      // 0x0050 (size: 0x10)
    FName MainLevelName_9_5C29511441AD4D0B2690F5B68298318B;                           // 0x0060 (size: 0x8)
    FName MenuLevelName_12_435BA71D4CC6CEE2CB0085A08D466B0F;                          // 0x0068 (size: 0x8)
    TSubclassOf<class UIGLE_CustomDataObjectBase_C> CustomDataObjectClass_17_8186B5984D0C359DB84CC8A8B7FA43FD; // 0x0070 (size: 0x8)

}; // Size: 0x78

#endif
