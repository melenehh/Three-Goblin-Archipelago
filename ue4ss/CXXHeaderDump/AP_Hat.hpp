#ifndef UE4SS_SDK_AP_Hat_HPP
#define UE4SS_SDK_AP_Hat_HPP

class AAP_Hat_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A0 (size: 0x8)
    class URotatingMovementComponent* RotatingMovement;                               // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Sphere5;                                              // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Sphere4;                                              // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Sphere3;                                              // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Sphere2;                                              // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Sphere1;                                              // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x02D8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02E0 (size: 0x8)
    FString Level;                                                                    // 0x02E8 (size: 0x10)
    class AActor* Overlapped Actor;                                                   // 0x02F8 (size: 0x8)
    class AActor* Other Actor;                                                        // 0x0300 (size: 0x8)
    TMap<class FVector, class FString> Forest Village;                                // 0x0308 (size: 0x50)
    TMap<class FVector, class FString> Market Town;                                   // 0x0358 (size: 0x50)
    TMap<class FVector, class FString> Downtown;                                      // 0x03A8 (size: 0x50)
    TMap<class FVector, class FString> Royal Castle;                                  // 0x03F8 (size: 0x50)
    TMap<class FVector, class FString> Clamber Tower;                                 // 0x0448 (size: 0x50)
    TMap<class FVector, class FString> Tutorial;                                      // 0x0498 (size: 0x50)
    class ALD49PlayerState* NewVar;                                                   // 0x04E8 (size: 0x8)

    void Print Item(const TMap<class FVector, class FString>& TargetMap);
    void WhichMap();
    void PrintToModLoader(FString Message);
    void BndEvt__KeyModel_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_AP_Hat(int32 EntryPoint);
}; // Size: 0x4F0

#endif
