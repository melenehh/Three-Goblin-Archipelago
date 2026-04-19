#ifndef UE4SS_SDK_AP_Manager_HPP
#define UE4SS_SDK_AP_Manager_HPP

class AAP_Manager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    bool NewVar;                                                                      // 0x02A8 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;                                // 0x02B0 (size: 0x10)
    FString Current;                                                                  // 0x02C0 (size: 0x10)
    FString NewVar_0;                                                                 // 0x02D0 (size: 0x10)

    void SpawnPretzels();
    void Give Keys();
    void SpawnHats();
    void SpawnKeys();
    void AP_ItemReceived();
    void PrintToModLoader(FString Message);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_AP_Manager(int32 EntryPoint);
}; // Size: 0x2E0

#endif
