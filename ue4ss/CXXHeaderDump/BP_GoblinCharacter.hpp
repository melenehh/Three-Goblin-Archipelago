#ifndef UE4SS_SDK_BP_GoblinCharacter_HPP
#define UE4SS_SDK_BP_GoblinCharacter_HPP

class ABP_GoblinCharacter_C : public AGoblinCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B20 (size: 0x8)
    class UStaticMeshComponent* HatMesh;                                              // 0x0B28 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0B30 (size: 0x8)
    float ResetIrisOpen_Iris_331DFE4C69B340B2892B43278649C554;                        // 0x0B38 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ResetIrisOpen__Direction_331DFE4C69B340B2892B43278649C554; // 0x0B3C (size: 0x1)
    class UTimelineComponent* ResetIrisOpen;                                          // 0x0B40 (size: 0x8)
    float ResetIrisClose_Iris_F37B4FF218CA49E6A09DC15FF2FFB03A;                       // 0x0B48 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ResetIrisClose__Direction_F37B4FF218CA49E6A09DC15FF2FFB03A; // 0x0B4C (size: 0x1)
    class UTimelineComponent* ResetIrisClose;                                         // 0x0B50 (size: 0x8)
    float IrisOpen_Iris_704FF2D5FFD3430E8E2E8A8F31FEF737;                             // 0x0B58 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> IrisOpen__Direction_704FF2D5FFD3430E8E2E8A8F31FEF737; // 0x0B5C (size: 0x1)
    class UTimelineComponent* IrisOpen;                                               // 0x0B60 (size: 0x8)
    float IrisClose_Iris_05FBB827D23042F184AF23945CCFC8E2;                            // 0x0B68 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> IrisClose__Direction_05FBB827D23042F184AF23945CCFC8E2; // 0x0B6C (size: 0x1)
    class UTimelineComponent* IrisClose;                                              // 0x0B70 (size: 0x8)
    FName RootBoneName;                                                               // 0x0B78 (size: 0x8)
    bool CinematicMode;                                                               // 0x0B80 (size: 0x1)
    class APostProcessVolume* LevelPP;                                                // 0x0B88 (size: 0x8)
    class UBP_SkinComponentBase_C* SkinComponent;                                     // 0x0B90 (size: 0x8)

    void HandleCinematicCameraHeight(double Amount);
    void HandleCinematicCameraZoom(double Amount);
    void HandleCinematicCameraOrbit();
    void IrisClose__FinishedFunc();
    void IrisClose__UpdateFunc();
    void IrisOpen__FinishedFunc();
    void IrisOpen__UpdateFunc();
    void ResetIrisClose__FinishedFunc();
    void ResetIrisClose__UpdateFunc();
    void ResetIrisOpen__FinishedFunc();
    void ResetIrisOpen__UpdateFunc();
    void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_PageUp_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_PageDown_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_End_K2Node_InputKeyEvent_0(FKey Key);
    void BP_OnFall();
    void ReceiveTick(float DeltaSeconds);
    void OnPickup(class APickup* Pickup);
    void OnGoblinsReset();
    void ReceiveBeginPlay();
    void TriggerSpeedlines();
    void Teleport(FVector Location, float Yaw);
    void PlayStepSound();
    void PreReset();
    void ExecuteUbergraph_BP_GoblinCharacter(int32 EntryPoint);
}; // Size: 0xB98

#endif
