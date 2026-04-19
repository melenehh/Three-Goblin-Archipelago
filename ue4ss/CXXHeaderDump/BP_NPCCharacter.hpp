#ifndef UE4SS_SDK_BP_NPCCharacter_HPP
#define UE4SS_SDK_BP_NPCCharacter_HPP

class ABP_NPCCharacter_C : public ANPCCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09E0 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x09E8 (size: 0x8)
    class UAudioComponent* Blah;                                                      // 0x09F0 (size: 0x8)
    class UPushAwayComponent* PushAway;                                               // 0x09F8 (size: 0x8)
    class UOptimizationProxyComponent* OptimizationProxy;                             // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* DrinkMug;                                             // 0x0A08 (size: 0x8)
    bool ConstrainRoaming;                                                            // 0x0A10 (size: 0x1)
    bool Speaking;                                                                    // 0x0A11 (size: 0x1)
    bool FinishedSpeaking;                                                            // 0x0A12 (size: 0x1)
    class USoundCue* BabblingSound;                                                   // 0x0A18 (size: 0x8)
    double TickOffset;                                                                // 0x0A20 (size: 0x8)

    FVector GetRandomLocation(class ANPCWaypoint* waypoint);
    void UserConstructionScript();
    void OnFail_E669E02AEA114BD9836C396D37F39FEF(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_E669E02AEA114BD9836C396D37F39FEF(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void MoveToLocation(FVector Location);
    void StopMovement();
    void ReceiveBeginPlay();
    void ResetTransform();
    void TurnTowards(class AActor* Target);
    void TurnTowardsLocation(FVector Location);
    void OnAIStateChanged();
    void BndEvt__BP_NPCCharacter_OptimizationProxy_K2Node_ComponentBoundEvent_1_OptimizationChangeWave__DelegateSignature(EOptimizationWave NewWave);
    void ReceiveTick(float DeltaSeconds);
    void SpeechOver();
    void ExecuteUbergraph_BP_NPCCharacter(int32 EntryPoint);
}; // Size: 0xA28

#endif
