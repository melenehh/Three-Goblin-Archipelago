#ifndef UE4SS_SDK_BP_Placable_PlayerStart_HPP
#define UE4SS_SDK_BP_Placable_PlayerStart_HPP

class ABP_Placable_PlayerStart_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x02A0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh2;                                      // 0x02A8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh1;                                      // 0x02B0 (size: 0x8)
    class UIGLE_InterfaceComponent* IGLE_Interface;                                   // 0x02B8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02C0 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x02C8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D0 (size: 0x8)
    FLevelMetadata Info;                                                              // 0x02D8 (size: 0x28)

    void SetPublishID(int64 ID);
    void UpdateInfo();
    void BndEvt__BP_Placable_PlayerStart_IGLE_Interface_K2Node_ComponentBoundEvent_0_IGLE_OnPropertyValueChanged__DelegateSignature(FString PropertyName);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Placable_PlayerStart(int32 EntryPoint);
}; // Size: 0x300

#endif
