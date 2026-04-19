#ifndef UE4SS_SDK_ModActor_HPP
#define UE4SS_SDK_ModActor_HPP

class AModActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    class UAP_Splash_C* ArchipelagoLogo;                                              // 0x02A8 (size: 0x8)
    class UAP_Input_C* ArchipelagoInput;                                              // 0x02B0 (size: 0x8)
    FString TestMessage;                                                              // 0x02B8 (size: 0x10)
    class AAP_Manager_C* NewVar;                                                      // 0x02C8 (size: 0x8)
    class ABP_BarbarGuy_C* BarBar;                                                    // 0x02D0 (size: 0x8)
    class ABP_BarbarGuy_Spy_C* BarBarSpy;                                             // 0x02D8 (size: 0x8)
    FVector CurrentKeyLocation;                                                       // 0x02E0 (size: 0x18)
    class UObject* CurrentKey;                                                        // 0x02F8 (size: 0x8)
    FString Level;                                                                    // 0x0300 (size: 0x10)
    class AKeyPickup* As Key Pickup;                                                  // 0x0310 (size: 0x8)
    TSubclassOf<class ABP_KeyPickup_C> KeyPickup;                                     // 0x0318 (size: 0x8)
    class ABP_GoblinCharacter_C* Goblin;                                              // 0x0320 (size: 0x8)
    class ABP_KeyPickup_C* TempKey;                                                   // 0x0328 (size: 0x8)
    FString CurrentItem;                                                              // 0x0330 (size: 0x10)
    TMap<class FVector, class FString> Forest Village;                                // 0x0340 (size: 0x50)
    TMap<class FVector, class FString> Market Town;                                   // 0x0390 (size: 0x50)
    TMap<class FVector, class FString> Downtown;                                      // 0x03E0 (size: 0x50)
    TMap<class FVector, class FString> Royal Castle;                                  // 0x0430 (size: 0x50)
    TMap<class FVector, class FString> Clamber Tower;                                 // 0x0480 (size: 0x50)
    TMap<class FVector, class FString> Tutorial;                                      // 0x04D0 (size: 0x50)
    TMap<class FVector, class FString> Tutorial Storage;                              // 0x0520 (size: 0x50)
    TMap<class FVector, class FString> Forest Village Storage;                        // 0x0570 (size: 0x50)
    TMap<class FVector, class FString> Royal Castle Storage;                          // 0x05C0 (size: 0x50)
    TMap<class FVector, class FString> Clamber Tower Storage;                         // 0x0610 (size: 0x50)
    TMap<class FVector, class FString> Market Town Storage;                           // 0x0660 (size: 0x50)
    TMap<class FVector, class FString> Downtown Storage;                              // 0x06B0 (size: 0x50)
    TMap<class FString, class FVector> TutorialKeyStorage;                            // 0x0700 (size: 0x50)
    TMap<class FString, class FVector> ForestKeyStorage;                              // 0x0750 (size: 0x50)
    TMap<class FString, class FVector> MarketKeyStorage;                              // 0x07A0 (size: 0x50)
    TMap<class FString, class FVector> DowntownKeyStorage;                            // 0x07F0 (size: 0x50)
    TMap<class FString, class FVector> CastleKeyStorage;                              // 0x0840 (size: 0x50)
    TMap<class FString, class FVector> TowerKeyStorage;                               // 0x0890 (size: 0x50)
    FVector CurrentHatLocation;                                                       // 0x08E0 (size: 0x18)
    TArray<FString> KeyList;                                                          // 0x08F8 (size: 0x10)
    class ABP_PretzelPickup_C* CurrentPretzel;                                        // 0x0908 (size: 0x8)
    FVector CurrentPretzelLocation;                                                   // 0x0910 (size: 0x18)
    class ABP_HatPickup_C* CurrentHat;                                                // 0x0928 (size: 0x8)

    void SpawnWidgets();
    void SpawnPretzels();
    void SetSpeed();
    void GiveItem(const TMap<class FString, class FVector>& TargetMap);
    void Give Keys();
    void PrintKeyType();
    void WhichMap();
    void SpawnHats();
    void SpawnKeys();
    void ArchPanel();
    void ArchWidget();
    void PreBeginPlay();
    void PostBeginPlay();
    void PrintToModLoader(FString Message);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ModActor(int32 EntryPoint);
}; // Size: 0x930

#endif
