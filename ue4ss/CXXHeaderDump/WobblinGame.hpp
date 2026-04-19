#ifndef UE4SS_SDK_WobblinGame_HPP
#define UE4SS_SDK_WobblinGame_HPP

#include "WobblinGame_enums.hpp"

struct FCharacterColors
{
    FLinearColor MainColor;                                                           // 0x0000 (size: 0x10)
    FLinearColor SecondaryColor;                                                      // 0x0010 (size: 0x10)
    FLinearColor TertiaryColor;                                                       // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FGameResetRules
{
    bool ResetPlayer;                                                                 // 0x0000 (size: 0x1)
    bool RemoveHats;                                                                  // 0x0001 (size: 0x1)
    bool RemoveKeys;                                                                  // 0x0002 (size: 0x1)
    bool ResetTime;                                                                   // 0x0003 (size: 0x1)
    bool ResetScore;                                                                  // 0x0004 (size: 0x1)
    bool ResetProps;                                                                  // 0x0005 (size: 0x1)
    bool ResetNPCAIState;                                                             // 0x0006 (size: 0x1)
    bool ResetNPCAlertedFlag;                                                         // 0x0007 (size: 0x1)
    bool ResetNPCTransform;                                                           // 0x0008 (size: 0x1)
    bool ResetMechanisms;                                                             // 0x0009 (size: 0x1)
    bool CloseDoors;                                                                  // 0x000A (size: 0x1)
    bool RelockDoors;                                                                 // 0x000B (size: 0x1)
    bool ResetKeyPickups;                                                             // 0x000C (size: 0x1)
    bool ResetPretzelPickups;                                                         // 0x000D (size: 0x1)
    bool ResetHatPickups;                                                             // 0x000E (size: 0x1)
    bool ResetTips;                                                                   // 0x000F (size: 0x1)

}; // Size: 0x10

struct FGoblinMovementData
{
    FVector LocationLocal;                                                            // 0x0000 (size: 0x18)
    FVector VelocityLocal;                                                            // 0x0018 (size: 0x18)
    FVector AccelerationLocal;                                                        // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FLevelDatatableRow : public FTableRowBase
{
    FString Caption;                                                                  // 0x0008 (size: 0x10)
    FString Description;                                                              // 0x0018 (size: 0x10)
    int32 PretzelCount;                                                               // 0x0028 (size: 0x4)
    float TargetSeconds;                                                              // 0x002C (size: 0x4)
    TSoftObjectPtr<UWorld> Level;                                                     // 0x0030 (size: 0x28)
    class UTexture2D* PreviewImage;                                                   // 0x0058 (size: 0x8)
    FDataTableRowHandle RequiredLevel;                                                // 0x0060 (size: 0x10)
    FDataTableRowHandle NextLevel;                                                    // 0x0070 (size: 0x10)
    bool Hidden;                                                                      // 0x0080 (size: 0x1)
    bool Challenge;                                                                   // 0x0081 (size: 0x1)

}; // Size: 0x88

struct FLevelInfo
{
    int64 ID;                                                                         // 0x0000 (size: 0x8)
    FString Title;                                                                    // 0x0008 (size: 0x10)
    FString Author;                                                                   // 0x0018 (size: 0x10)
    FString Description;                                                              // 0x0028 (size: 0x10)
    FString Path;                                                                     // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FLevelMetadata
{
    int64 ID;                                                                         // 0x0000 (size: 0x8)
    int64 EditorVersion;                                                              // 0x0008 (size: 0x8)
    FString Description;                                                              // 0x0010 (size: 0x10)
    int32 TotalPretzelCount;                                                          // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FModularMeshDefinition
{
    class UStaticMesh* Mesh;                                                          // 0x0000 (size: 0x8)
    FTransform ElementTransform;                                                      // 0x0010 (size: 0x60)
    bool Alternate;                                                                   // 0x0070 (size: 0x1)
    bool IgnoreEnds;                                                                  // 0x0071 (size: 0x1)
    FCollisionProfileName CollisionProfile;                                           // 0x0074 (size: 0x8)
    TArray<class UMaterialInterface*> OverrideMaterials;                              // 0x0080 (size: 0x10)
    TArray<int32> SkipIndices;                                                        // 0x0090 (size: 0x10)

}; // Size: 0xA0

struct FPhysicsBlendPair
{
    FName BoneName;                                                                   // 0x0000 (size: 0x8)
    float BlendAmount;                                                                // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRotationSettings
{
    float TargetInterpSpeed;                                                          // 0x0000 (size: 0x4)
    float ActorInterpSpeed;                                                           // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FTipDatatableRow : public FTableRowBase
{
    FString Caption;                                                                  // 0x0008 (size: 0x10)
    FText Contents;                                                                   // 0x0018 (size: 0x18)
    class UTexture2D* Image;                                                          // 0x0030 (size: 0x8)
    TSoftObjectPtr<UMediaSource> TipMovie;                                            // 0x0038 (size: 0x28)
    bool Hidden;                                                                      // 0x0060 (size: 0x1)
    bool StartUnlocked;                                                               // 0x0061 (size: 0x1)

}; // Size: 0x68

class AAudioManager : public AActor
{
    class UAudioComponent* _audioComponent;                                           // 0x0298 (size: 0x8)
    TArray<class USoundBase*> _backgroundSounds;                                      // 0x02A0 (size: 0x10)

    void OnAudioComponentFinishedPlaying();
}; // Size: 0x2B0

class ACustomStaticMeshActor : public AStaticMeshActor
{
    bool SeeThrough;                                                                  // 0x02A8 (size: 0x1)
    TArray<class UTexture2D*> Texture;                                                // 0x02B0 (size: 0x10)
    int32 RandomColorCount;                                                           // 0x02C0 (size: 0x4)
    TArray<FLinearColor> RandomColorPalette;                                          // 0x02C8 (size: 0x10)
    TArray<float> PreDesaturation;                                                    // 0x02D8 (size: 0x10)
    TArray<float> PostDesaturation;                                                   // 0x02E8 (size: 0x10)
    TArray<FLinearColor> MainColor;                                                   // 0x02F8 (size: 0x10)
    TArray<FLinearColor> PreColorAdd;                                                 // 0x0308 (size: 0x10)
    TArray<FLinearColor> ColorMultiply;                                               // 0x0318 (size: 0x10)
    TArray<FLinearColor> PostColorAdd;                                                // 0x0328 (size: 0x10)

}; // Size: 0x338

class ADestructibleProp : public AActor
{
    class USoundBase* HitSound;                                                       // 0x0298 (size: 0x8)
    class UParticleSystem* HitParticles;                                              // 0x02A0 (size: 0x8)
    class USoundBase* DisappearSound;                                                 // 0x02A8 (size: 0x8)
    class UParticleSystem* DisappearParticles;                                        // 0x02B0 (size: 0x8)
    float DisappearTime;                                                              // 0x02B8 (size: 0x4)
    bool BlockPlayer;                                                                 // 0x02BC (size: 0x1)
    int32 ScorePoints;                                                                // 0x02C0 (size: 0x4)
    float Suspicion;                                                                  // 0x02C4 (size: 0x4)
    FDestructiblePropOnPropKnockedOver OnPropKnockedOver;                             // 0x02C8 (size: 0x10)
    void PropKnockedOver(class ADestructibleProp* prop);
    class USceneComponent* _sceneComponent;                                           // 0x0348 (size: 0x8)
    class UStaticMeshComponent* _meshComponent;                                       // 0x0350 (size: 0x8)
    class USphereComponent* _triggerComponent;                                        // 0x0358 (size: 0x8)

    void Reset();
    void OnReset();
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnKnockOver();
}; // Size: 0x360

class ADoor : public AActor
{
    ELockType LockType;                                                               // 0x0298 (size: 0x1)
    FDoorOnUnlocked OnUnlocked;                                                       // 0x02A0 (size: 0x10)
    void DoorDelegate(class ADoor* Door);
    FDoorOnOpened OnOpened;                                                           // 0x02B0 (size: 0x10)
    void DoorDelegate(class ADoor* Door);
    FDoorOnClosed OnClosed;                                                           // 0x02C0 (size: 0x10)
    void DoorDelegate(class ADoor* Door);
    FDoorOnReset OnReset;                                                             // 0x02D0 (size: 0x10)
    void DoorDelegate(class ADoor* Door);
    class USceneComponent* _sceneComponent;                                           // 0x02E8 (size: 0x8)
    class USkeletalMeshComponent* _meshComponent;                                     // 0x02F0 (size: 0x8)
    class USphereComponent* _triggerComponent;                                        // 0x02F8 (size: 0x8)

    void Unlock();
    void ResetLock();
    void Reset();
    void Open();
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void JiggleLock();
    bool IsUnlocked();
    bool IsOpen();
    void Close();
}; // Size: 0x300

class AGoblinCamera : public AActor
{
    class UCameraComponent* _cameraComponent;                                         // 0x0298 (size: 0x8)
    class UGoblinSpringArmComponent* _springArmComponent;                             // 0x02A0 (size: 0x8)
    class USceneComponent* _sceneComponent;                                           // 0x02A8 (size: 0x8)

    void SetTargetActor(const class AActor* Actor);
}; // Size: 0x2B8

class AGoblinCharacter : public ACharacter
{
    float WobblinnessAmount;                                                          // 0x0678 (size: 0x4)
    class USceneComponent* _root;                                                     // 0x0680 (size: 0x8)
    class UCapsuleComponent* _collisionComponent;                                     // 0x0688 (size: 0x8)
    class USkeletalMeshComponent* _goblin1;                                           // 0x0690 (size: 0x8)
    class USkeletalMeshComponent* _goblin2;                                           // 0x0698 (size: 0x8)
    class USkeletalMeshComponent* _goblin3;                                           // 0x06A0 (size: 0x8)
    class USkeletalMeshComponent* _trenchCoat;                                        // 0x06A8 (size: 0x8)
    class UHatComponent* _hatComponent;                                               // 0x06B0 (size: 0x8)
    class UPhysicalAnimationComponent* _physicalAnimGoblin1;                          // 0x06B8 (size: 0x8)
    class UPhysicalAnimationComponent* _physicalAnimGoblin2;                          // 0x06C0 (size: 0x8)
    class UPhysicalAnimationComponent* _physicalAnimGoblin3;                          // 0x06C8 (size: 0x8)
    class UGoblinSpringArmComponent* _cameraBoom;                                     // 0x06D0 (size: 0x8)
    class UGoblinCameraComponent* _followCamera;                                      // 0x06D8 (size: 0x8)
    class UParticleSystemComponent* _sweatParticlesComponent;                         // 0x06E0 (size: 0x8)
    FPhysicalAnimationData _physicalAnimData;                                         // 0x06E8 (size: 0x24)
    FName _pelvisBoneName;                                                            // 0x070C (size: 0x8)
    TArray<FPhysicsBlendPair> _physicsBlendsGoblin1;                                  // 0x0718 (size: 0x10)
    TArray<FPhysicsBlendPair> _physicsBlendsGoblin2;                                  // 0x0728 (size: 0x10)
    TArray<FPhysicsBlendPair> _physicsBlendsGoblin3;                                  // 0x0738 (size: 0x10)
    FVector _playerAcceleration;                                                      // 0x0748 (size: 0x18)
    float _speed;                                                                     // 0x077C (size: 0x4)
    bool _isMoving;                                                                   // 0x0780 (size: 0x1)
    bool _hasMovementInput;                                                           // 0x0781 (size: 0x1)
    FRotator _lastVelocityRotation;                                                   // 0x0788 (size: 0x18)
    FRotator _lastMovementInputRotation;                                              // 0x07A0 (size: 0x18)
    float _movementInputAmount;                                                       // 0x07B8 (size: 0x4)
    float _aimYawRate;                                                                // 0x07BC (size: 0x4)
    FRotator _aimingRotation;                                                         // 0x07C0 (size: 0x18)
    class UObject* _lockOnTarget;                                                     // 0x07D8 (size: 0x8)
    FRotationSettings _rotationSettings;                                              // 0x07E0 (size: 0x8)
    FRotator _targetRotation;                                                         // 0x07E8 (size: 0x18)
    FVector _rootOffset;                                                              // 0x0800 (size: 0x18)
    float _goblinHeight;                                                              // 0x0818 (size: 0x4)
    float _rotationRadius;                                                            // 0x081C (size: 0x4)
    bool _enableSwitching;                                                            // 0x0820 (size: 0x1)
    float _goblinRotationSensitivity;                                                 // 0x0824 (size: 0x4)
    float _stopImpulseMagnitude;                                                      // 0x0828 (size: 0x4)
    TMap<EGameDifficulty, float> _stopImpulseDifficultyModifiers;                     // 0x0830 (size: 0x50)
    float _movementImpulseMagnitude;                                                  // 0x0880 (size: 0x4)
    TMap<EGameDifficulty, float> _movementImpulseDifficultyModifiers;                 // 0x0888 (size: 0x50)
    TMap<EGameDifficulty, float> _tiltDifficultyModifiers;                            // 0x08D8 (size: 0x50)
    float _propKnockOverNudge;                                                        // 0x0928 (size: 0x4)
    TMap<EGameDifficulty, float> _propKnockOverNudgeDifficultyModifiers;              // 0x0930 (size: 0x50)
    bool _propKnockOverNudgeRandomDirection;                                          // 0x0980 (size: 0x1)
    float _NPCBumpNudge;                                                              // 0x0984 (size: 0x4)
    TMap<EGameDifficulty, float> _NPCBumpNudgeDifficultyModifiers;                    // 0x0988 (size: 0x50)
    float _upperGoblinMaxVelocity;                                                    // 0x09D8 (size: 0x4)
    float _goblinTippingIncreaseFactor;                                               // 0x09DC (size: 0x4)
    float _maxPossibleTilt;                                                           // 0x09E0 (size: 0x4)
    float _maxDriftAmount;                                                            // 0x09E4 (size: 0x4)
    float _sweatDropTilt;                                                             // 0x09E8 (size: 0x4)
    float _maxAllowedTilt;                                                            // 0x09EC (size: 0x4)
    float _maxTimeInUnallowedTilt;                                                    // 0x09F0 (size: 0x4)
    bool _canFall;                                                                    // 0x09F4 (size: 0x1)
    TSubclassOf<class AActor> _goblinActorToSpawnOnFall;                              // 0x09F8 (size: 0x8)
    TSubclassOf<class AActor> _topGoblinActorToSpawnOnFall;                           // 0x0A00 (size: 0x8)
    TSubclassOf<class AActor> _trenchCoatActorToSpawnOnFall;                          // 0x0A08 (size: 0x8)
    class UParticleSystem* _fallParticles;                                            // 0x0A10 (size: 0x8)
    float _randomNudgeAmount;                                                         // 0x0A18 (size: 0x4)
    float _maxTiltForRandomNudge;                                                     // 0x0A1C (size: 0x4)
    float _randomNudgePeriod;                                                         // 0x0A20 (size: 0x4)
    float _randomNudgeCooldown;                                                       // 0x0A24 (size: 0x4)
    float _randomNudgeChance;                                                         // 0x0A28 (size: 0x4)
    float _changeDirectionImpulseCooldown;                                            // 0x0A2C (size: 0x4)
    FTransform _followCameraTransform;                                                // 0x0A40 (size: 0x60)
    float _wallDetectionHeight;                                                       // 0x0AA0 (size: 0x4)
    float _wallDetectionHeightAdjust;                                                 // 0x0AA4 (size: 0x4)
    float _wallDetectionDistance;                                                     // 0x0AA8 (size: 0x4)
    float _wallDetectionRadius;                                                       // 0x0AAC (size: 0x4)
    float _wallBounceStrength;                                                        // 0x0AB0 (size: 0x4)
    float _turnAngle;                                                                 // 0x0AB4 (size: 0x4)
    float _turnSpeed;                                                                 // 0x0AB8 (size: 0x4)
    float ForwardAxisValue;                                                           // 0x0ABC (size: 0x4)
    TArray<FGoblinMovementData> _goblinMovementData;                                  // 0x0AD8 (size: 0x10)
    TArray<class AActor*> _debrisToDestroy;                                           // 0x0B08 (size: 0x10)

    void TriggerSpeedlines();
    void Teleport(FVector Location, float Yaw);
    void SetLockOnTarget(class UObject* NewTarget);
    void SetDesiredYaw(float Yaw, bool snap, bool instant);
    void ResetMovement();
    void RagdollStart();
    void PlayStepSound();
    void PlayerMovementInput(bool IsForwardAxis);
    void OnPickup(class APickup* Pickup);
    void OnGoblinsReset();
    bool IsFollowCameraEnabled();
    bool IsFallen();
    void Fall();
    void BP_OnFall();
}; // Size: 0xB20

class AGoblinController : public APlayerController
{

    void DisplayMessage(const FText& Message, float Duration);
}; // Size: 0x858

class AHatPickup : public APickup
{
    bool TakeOffOtherHats;                                                            // 0x02F0 (size: 0x1)
    EProfessionType _hatType;                                                         // 0x02F1 (size: 0x1)

    EProfessionType GetHatType();
}; // Size: 0x2F8

class AKeyPickup : public APickup
{
    ELockType _keyType;                                                               // 0x02F0 (size: 0x1)

    ELockType GetKeyType();
}; // Size: 0x2F8

class ALD49GameModeBase : public AGameModeBase
{
    FLD49GameModeBaseOnGameReset OnGameReset;                                         // 0x0338 (size: 0x10)
    void OnGameResetDelegate(FGameResetRules resetRules);
    EGameDifficulty GameDifficulty;                                                   // 0x0348 (size: 0x1)
    FGameResetRules FailResetRules;                                                   // 0x0349 (size: 0x10)
    FGameResetRules ManualResetRules;                                                 // 0x0359 (size: 0x10)
    TSubclassOf<class AGoblinCamera> GoblinCameraClass;                               // 0x0398 (size: 0x8)
    class AGoblinCamera* GoblinCamera;                                                // 0x03A0 (size: 0x8)
    FTransform GoblinCameraTransform;                                                 // 0x03B0 (size: 0x60)

    void UpdateLandscapeGrassSync(class ALandscapeProxy* LandscapeProxy);
    void SetInputDefault();
    void SetInputAzerty();
    class UUserWidget* RequestScreenWidget(const class UObject* objCtx, TSubclassOf<class UUserWidget> WidgetClass);
    void RebuildNavigation();
    void OnManualReset();
    void OnLevelStart();
    void OnFailReset();
    bool IsInputAzerty();
    class AGoblinCamera* GetGoblinCamera();
    void ForcePauseGame();
    void ClearInput();
    FBoxSphereBounds CalculateLevelBounds(TSubclassOf<class UActorComponent> ComponentClass);
}; // Size: 0x410

class ALD49GameStateBase : public AGameStateBase
{
    float StartTime;                                                                  // 0x02F0 (size: 0x4)
    int32 NegativeScore;                                                              // 0x02F4 (size: 0x4)
    int32 Failures;                                                                   // 0x02F8 (size: 0x4)
    int32 KnockedOverStuff;                                                           // 0x02FC (size: 0x4)
    int32 NPCBumped;                                                                  // 0x0300 (size: 0x4)
    int32 NPCAlerted;                                                                 // 0x0304 (size: 0x4)

    void ResetScore();
    void ResetGameTimer();
    void RegisterProps();
    void RegisterNPCs();
    void OnPropKnockedOver(class ADestructibleProp* prop);
    void OnFailure();
    void OnBumpedNPC(class ANPCCharacter* NPC);
    void OnAlertedNPC(class ANPCCharacter* NPC);
}; // Size: 0x308

class ALD49PlayerState : public APlayerState
{
    TMap<class ELockType, class bool> _keys;                                          // 0x0350 (size: 0x50)
    TArray<EProfessionType> _disguises;                                               // 0x03A0 (size: 0x10)

    void ResetKeys();
    void ResetDisguise();
    bool HasKey(ELockType Type);
    void GiveKey(ELockType Type);
    TArray<EProfessionType> GetDisguises();
    int32 GetDisguiseLevel(EProfessionType Type);
    void AddDisguise(EProfessionType Type);
}; // Size: 0x3B0

class ALD49WorldSettings : public AWorldSettings
{
    class AAudioManager* _audioManager;                                               // 0x04B8 (size: 0x8)

}; // Size: 0x4C0

class ALever : public AActor
{
    TArray<TSoftObjectPtr<AMechanism>> ToggleMechanisms;                              // 0x0298 (size: 0x10)
    FLeverOnReset OnReset;                                                            // 0x02A8 (size: 0x10)
    void LeverDelegate(class ALever* Lever);
    class UAnimSequenceBase* FlipOnAnimation;                                         // 0x02B8 (size: 0x8)
    class UAnimSequenceBase* FlipOffAnimation;                                        // 0x02C0 (size: 0x8)
    class UAnimSequenceBase* JiggleOnAnimation;                                       // 0x02C8 (size: 0x8)
    class UAnimSequenceBase* JiggleOffAnimation;                                      // 0x02D0 (size: 0x8)
    class USceneComponent* _sceneComponent;                                           // 0x02E8 (size: 0x8)
    class USkeletalMeshComponent* _meshComponent;                                     // 0x02F0 (size: 0x8)
    class USphereComponent* _triggerComponentA;                                       // 0x02F8 (size: 0x8)
    class USphereComponent* _triggerComponentB;                                       // 0x0300 (size: 0x8)

    void Reset();
    void Ready();
    void OnOverlapBeginB(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnOverlapBeginA(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Jiggle();
    bool GetState();
    void FlipOn();
    void FlipOff();
}; // Size: 0x308

class AMechanism : public AActor
{
    FMechanismOnReset OnReset;                                                        // 0x0298 (size: 0x10)
    void MechanismDelegate(class AMechanism* Mechanism);
    class UAnimSequenceBase* FlipOnAnimation;                                         // 0x02A8 (size: 0x8)
    class UAnimSequenceBase* FlipOffAnimation;                                        // 0x02B0 (size: 0x8)
    class UAnimSequenceBase* ResetAnimation;                                          // 0x02B8 (size: 0x8)
    class USceneComponent* _sceneComponent;                                           // 0x02D0 (size: 0x8)
    class USkeletalMeshComponent* _meshComponent;                                     // 0x02D8 (size: 0x8)

    void Reset();
    void Ready();
    bool IsReady();
    void FlipOn();
    void FlipOff();
}; // Size: 0x2E0

class AModularFloor : public AActor
{
    bool AutoReconstruct;                                                             // 0x0298 (size: 0x1)
    bool ManualReconstruct;                                                           // 0x0299 (size: 0x1)
    FVector2D Size;                                                                   // 0x02A0 (size: 0x10)
    FVector2D SegmentSize;                                                            // 0x02B0 (size: 0x10)
    FModularMeshDefinition FloorDefinition;                                           // 0x02C0 (size: 0xA0)
    FModularMeshDefinition CornerDefinition;                                          // 0x0360 (size: 0xA0)
    FModularMeshDefinition WallDefinition;                                            // 0x0400 (size: 0xA0)
    bool AdvancedWallDefinition;                                                      // 0x04A0 (size: 0x1)
    FModularMeshDefinition NorthWallDefinition;                                       // 0x04B0 (size: 0xA0)
    FModularMeshDefinition EastWallDefinition;                                        // 0x0550 (size: 0xA0)
    FModularMeshDefinition SouthWallDefinition;                                       // 0x05F0 (size: 0xA0)
    FModularMeshDefinition WestWallDefinition;                                        // 0x0690 (size: 0xA0)
    class USceneComponent* _sceneComponent;                                           // 0x0730 (size: 0x8)
    class UModularMeshComponent* _floor;                                              // 0x0738 (size: 0x8)
    class UModularMeshComponent* _northWall;                                          // 0x0740 (size: 0x8)
    class UModularMeshComponent* _eastWall;                                           // 0x0748 (size: 0x8)
    class UModularMeshComponent* _southWall;                                          // 0x0750 (size: 0x8)
    class UModularMeshComponent* _westWall;                                           // 0x0758 (size: 0x8)
    class UModularMeshComponent* _corners;                                            // 0x0760 (size: 0x8)

}; // Size: 0x770

class AModularMesh : public AActor
{
    bool AutoReconstruct;                                                             // 0x0298 (size: 0x1)
    bool ManualReconstruct;                                                           // 0x0299 (size: 0x1)
    FVector2D Size;                                                                   // 0x02A0 (size: 0x10)
    FVector2D SegmentSize;                                                            // 0x02B0 (size: 0x10)
    bool CenterX;                                                                     // 0x02C0 (size: 0x1)
    bool CenterY;                                                                     // 0x02C1 (size: 0x1)
    FModularMeshDefinition Definition;                                                // 0x02D0 (size: 0xA0)
    class UStaticMesh* StartMesh;                                                     // 0x0370 (size: 0x8)
    TArray<class UMaterialInstance*> StartMeshOverrideMaterials;                      // 0x0378 (size: 0x10)
    FTransform StartTransform;                                                        // 0x0390 (size: 0x60)
    class UStaticMesh* EndMesh;                                                       // 0x03F0 (size: 0x8)
    TArray<class UMaterialInstance*> EndMeshOverrideMaterials;                        // 0x03F8 (size: 0x10)
    FTransform EndTransform;                                                          // 0x0410 (size: 0x60)
    class UModularMeshComponent* _modularMeshComponent;                               // 0x0470 (size: 0x8)
    class UStaticMeshComponent* _startMeshComponent;                                  // 0x0478 (size: 0x8)
    class UStaticMeshComponent* _endMeshComponent;                                    // 0x0480 (size: 0x8)

}; // Size: 0x490

class ANPCCharacter : public ACharacter
{
    class USoundBase* BumpSound;                                                      // 0x0678 (size: 0x8)
    class USoundBase* SoftFootstepSound;                                              // 0x0680 (size: 0x8)
    class USoundBase* HardFootstepSound;                                              // 0x0688 (size: 0x8)
    class UParticleSystem* BumpParticles;                                             // 0x0690 (size: 0x8)
    FNPCCharacterOnBumpedNPC OnBumpedNPC;                                             // 0x0698 (size: 0x10)
    void BumpedNPC(class ANPCCharacter* NPC);
    FNPCCharacterOnAlertedNPC OnAlertedNPC;                                           // 0x06A8 (size: 0x10)
    void AlertedNPC(class ANPCCharacter* NPC);
    EInitialAIState _initialState;                                                    // 0x06B8 (size: 0x1)
    TSoftObjectPtr<ANPCWaypoint> _waypoint;                                           // 0x06C0 (size: 0x28)
    EProfessionType _professionType;                                                  // 0x06E8 (size: 0x1)
    float _walkingSpeed;                                                              // 0x06EC (size: 0x4)
    float _drunkWalkingSpeed;                                                         // 0x06F0 (size: 0x4)
    float _runningSpeed;                                                              // 0x06F4 (size: 0x4)
    bool _drawDebugSenses;                                                            // 0x06F8 (size: 0x1)
    bool _canNoticeGoblins;                                                           // 0x06F9 (size: 0x1)
    bool _willPointOutGoblins;                                                        // 0x06FA (size: 0x1)
    bool _willChaseGoblins;                                                           // 0x06FB (size: 0x1)
    bool _willChargeAtGoblins;                                                        // 0x06FC (size: 0x1)
    float _visionAngle;                                                               // 0x0700 (size: 0x4)
    float _unawareVisionRange;                                                        // 0x0704 (size: 0x4)
    float _awareVisionRange;                                                          // 0x0708 (size: 0x4)
    float _hearingRange;                                                              // 0x070C (size: 0x4)
    float _smellRange;                                                                // 0x0710 (size: 0x4)
    float _visionSensitivity;                                                         // 0x0714 (size: 0x4)
    float _hearingSensitivity;                                                        // 0x0718 (size: 0x4)
    float _smellSensitivity;                                                          // 0x071C (size: 0x4)
    TMap<EGameDifficulty, float> _bumpSuspicionPerDifficulty;                         // 0x0720 (size: 0x50)
    float _suspicionIncreaseModifier;                                                 // 0x0770 (size: 0x4)
    float _suspicionDecreaseModifier;                                                 // 0x0774 (size: 0x4)
    TMap<EGameDifficulty, float> _suspicionIncreaseModifiersDifficulty;               // 0x0778 (size: 0x50)
    TMap<EGameDifficulty, float> _suspicionDecreaseModifiersDifficulty;               // 0x07C8 (size: 0x50)
    float _disguiseFactor;                                                            // 0x0818 (size: 0x4)
    bool _drinking;                                                                   // 0x081C (size: 0x1)
    bool _drunk;                                                                      // 0x081D (size: 0x1)
    TArray<TSoftObjectPtr<ANPCCharacter>> _activityCompanions;                        // 0x0820 (size: 0x10)
    float _talkingDuration;                                                           // 0x0830 (size: 0x4)
    float _thirstDuration;                                                            // 0x0834 (size: 0x4)
    float _roamingRadius;                                                             // 0x0838 (size: 0x4)
    float _roamingDuration;                                                           // 0x083C (size: 0x4)
    float _drinkingDuration;                                                          // 0x0840 (size: 0x4)
    float _pointingDuration;                                                          // 0x0844 (size: 0x4)
    float _searchingDuration;                                                         // 0x0848 (size: 0x4)
    float _forgetDuration;                                                            // 0x084C (size: 0x4)
    float _chargingDuration;                                                          // 0x0850 (size: 0x4)
    float _trippingDuration;                                                          // 0x0854 (size: 0x4)
    float _gettingUpDuration;                                                         // 0x0858 (size: 0x4)
    TArray<FCharacterColors> _colorVariations;                                        // 0x0860 (size: 0x10)
    class UWidgetComponent* _suspicionMeter;                                          // 0x0870 (size: 0x8)
    class UWidgetComponent* _speechBubble;                                            // 0x0878 (size: 0x8)
    TArray<FText> _dialogueOptions;                                                   // 0x0890 (size: 0x10)
    class UCapsuleComponent* _dialogueCapsule;                                        // 0x08A0 (size: 0x8)
    float _speechBubbleShownDuration;                                                 // 0x08A8 (size: 0x4)
    float _speechBubbleCooldownDuration;                                              // 0x08AC (size: 0x4)
    bool _canShowSpeechBubble;                                                        // 0x08B0 (size: 0x1)
    class USphereComponent* _bumpSphere;                                              // 0x08B8 (size: 0x8)
    bool _canBumpGoblins;                                                             // 0x08C0 (size: 0x1)
    float _bumpCooldownDuration;                                                      // 0x08C4 (size: 0x4)
    float _barkDuration;                                                              // 0x08C8 (size: 0x4)
    TArray<FText> _noticeBarks;                                                       // 0x08D0 (size: 0x10)
    TArray<FText> _alertBarks;                                                        // 0x08E0 (size: 0x10)
    TArray<FText> _lostBarks;                                                         // 0x08F0 (size: 0x10)
    class USoundBase* _noticeGrunt;                                                   // 0x0900 (size: 0x8)
    class USoundBase* _alertGrunt;                                                    // 0x0908 (size: 0x8)
    class USoundBase* _lostGrunt;                                                     // 0x0910 (size: 0x8)

    void TurnTowardsLocation(FVector Location);
    void TurnTowards(class AActor* Target);
    void StopMovement();
    void ResetTransform();
    void ResetAIState();
    void OnMoveFailed();
    void OnMoveComplete();
    void OnDialogueCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnBumpSphereBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnAIStateChanged();
    void MoveToLocation(FVector Location);
    bool IsFreeForCompanions();
    bool IsAware();
    bool IsAlert();
    void InitializeState();
    float GetSuspicion();
    class AActor* GetSuspect();
    FVector GetRandomLocation(class ANPCWaypoint* waypoint);
    int32 GetRandomAnimationIndex();
    FTransform GetInitialTransform();
    EAIState GetAIState();
}; // Size: 0x9E0

class ANPCWaypoint : public AActor
{
    bool DrawDebug;                                                                   // 0x0298 (size: 0x1)
    TSoftObjectPtr<ANPCWaypoint> NextWaypoint;                                        // 0x02A0 (size: 0x28)
    float Radius;                                                                     // 0x02C8 (size: 0x4)
    float WaitDuration;                                                               // 0x02CC (size: 0x4)

}; // Size: 0x2D0

class APickup : public AActor
{
    class USoundBase* PickupSound;                                                    // 0x0298 (size: 0x8)
    class UParticleSystem* PickupParticles;                                           // 0x02A0 (size: 0x8)
    FPickupOnPickedUp OnPickedUp;                                                     // 0x02A8 (size: 0x10)
    void PickedUp(class APickup* Pickup);
    FText PickupText;                                                                 // 0x02B8 (size: 0x18)
    class USceneComponent* _sceneComponent;                                           // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* _meshComponent;                                       // 0x02E0 (size: 0x8)
    class USphereComponent* _triggerComponent;                                        // 0x02E8 (size: 0x8)

    void Reset();
    void OnReset();
    void OnPickup();
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x2F0

class APretzelPickup : public APickup
{
    FName PretzelName;                                                                // 0x02F0 (size: 0x8)

}; // Size: 0x2F8

class ARestrictedZone : public AActor
{
    class UBillboardComponent* BillboardComponent;                                    // 0x0298 (size: 0x8)
    class UBoxComponent* Zone;                                                        // 0x02A0 (size: 0x8)
    EProfessionType RestrictionType;                                                  // 0x02A8 (size: 0x1)
    int32 RestrictionLevel;                                                           // 0x02AC (size: 0x4)

}; // Size: 0x2C0

class ATeleport : public AActor
{
    TSoftObjectPtr<ATeleport> Destination;                                            // 0x0298 (size: 0x28)
    class USceneComponent* _sceneComponent;                                           // 0x02C0 (size: 0x8)
    class UArrowComponent* _exit;                                                     // 0x02C8 (size: 0x8)
    class UBoxComponent* _trigger;                                                    // 0x02D0 (size: 0x8)

    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnActivated(class ACharacter* User);
    void Activate(class ACharacter* User);
}; // Size: 0x2D8

class UGoblinAnimInstance : public UAnimInstance
{
    int32 _goblinIndex;                                                               // 0x0348 (size: 0x4)

    float GetWobblinnessAmount();
    float GetTiltAmount();
    int32 GetGoblinIndex();
    FVector GetCurrentVelocity();
    float GetCurrentSpeed();
    void AnimNotify_PlayStepSound();
}; // Size: 0x350

class UGoblinCameraComponent : public UCameraComponent
{
}; // Size: 0xA30

class UGoblinMovementComponent : public UCharacterMovementComponent
{
}; // Size: 0xF50

class UGoblinSettings : public UDeveloperSettings
{
    FSlateBrush DefaultFocusBrush;                                                    // 0x0040 (size: 0xD0)

}; // Size: 0x110

class UGoblinSpringArmComponent : public USpringArmComponent
{
}; // Size: 0x3A0

class UHatComponent : public USceneComponent
{
    TArray<class UStaticMesh*> HatMeshes;                                             // 0x02A0 (size: 0x10)
    FRotator RandomRotationMin;                                                       // 0x02B0 (size: 0x18)
    FRotator RandomRotationMax;                                                       // 0x02C8 (size: 0x18)
    FVector HatScale;                                                                 // 0x02E0 (size: 0x18)
    class UParticleSystem* EquipParticles;                                            // 0x02F8 (size: 0x8)

    void ScatterHats();
    void GenerateHatsFromList(const TArray<EProfessionType>& hats);
    void DetachHat(class USceneComponent* comp);
    void AddHat(EProfessionType Type, bool spawnParticles);
}; // Size: 0x310

class UMenuHelperLibrary : public UBlueprintFunctionLibrary
{

    void OpenSteamPage();
    bool IsSteamDeck();
}; // Size: 0x28

class UModularMeshComponent : public UInstancedStaticMeshComponent
{
    bool AutoReconstruct;                                                             // 0x0770 (size: 0x1)
    bool ManualReconstruct;                                                           // 0x0771 (size: 0x1)
    FVector2D Size;                                                                   // 0x0778 (size: 0x10)
    FVector2D SegmentSize;                                                            // 0x0788 (size: 0x10)
    bool CenterX;                                                                     // 0x0798 (size: 0x1)
    bool CenterY;                                                                     // 0x0799 (size: 0x1)
    bool Corners;                                                                     // 0x079A (size: 0x1)
    FModularMeshDefinition Definition;                                                // 0x07A0 (size: 0xA0)

}; // Size: 0x840

class UNPCAnimInstance : public UAnimInstance
{

    float GetCurrentSpeed();
    EAIState GetCurrentAIState();
    void AnimNotify_PlayStepSound();
}; // Size: 0x350

class UPushAwayComponent : public UActorComponent
{
    TArray<class ACharacter*> OverlappingCharacters;                                  // 0x00A0 (size: 0x10)
    bool DrawDebug;                                                                   // 0x00B0 (size: 0x1)
    float TickRate;                                                                   // 0x00B4 (size: 0x4)
    float InterpolationSpeed;                                                         // 0x00B8 (size: 0x4)

    void OnCapsuleEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0xC0

class USpeechBubbleWidget : public UUserWidget
{
    class UTextBlock* _text;                                                          // 0x02C0 (size: 0x8)

    void SetText(const FText& Text);
}; // Size: 0x2C8

class USteamHelperLibrary : public UBlueprintFunctionLibrary
{

    void UnlockAchievement(FString ID);
    void StoreAchievements();
    bool RequestCurrentStats();
}; // Size: 0x28

class USuspicionMeterWidget : public UUserWidget
{
    float Fill;                                                                       // 0x02C0 (size: 0x4)
    ESuspicionMarkerMode Mode;                                                        // 0x02C4 (size: 0x1)

}; // Size: 0x2C8

class UWorkshopAsyncRequestObject : public UObject
{
    FWorkshopAsyncRequestObjectOnUploadFinished OnUploadFinished;                     // 0x0028 (size: 0x10)
    void UploadFinished(bool Result);
    FWorkshopAsyncRequestObjectOnQueryFinished OnQueryFinished;                       // 0x0038 (size: 0x10)
    void QueryFinished(bool Result);

    void UploadLevel(int64 ID, FString levelPath, FString levelName, FString Description);
    void QueryLevels(int64 page);
    float GetProgress();
    TArray<FLevelInfo> GetLevelQueryResults();
}; // Size: 0x1B8

class UWorkshopHelperLibrary : public UBlueprintFunctionLibrary
{

    bool UploadLevel(int64 ID, FString levelPath, FString levelName, FString Description);
    void QueryLevelsAsync(int32 page, const FQueryLevelsAsyncCallback& Callback);
    TArray<FLevelInfo> QueryLevels(int32 page);
    void OpenLevelPage(int64 ID);
    void OnQueryLevelsCompleted__DelegateSignature(const TArray<FLevelInfo>& Levels);
    void MetadataToJSON(const FLevelMetadata& Data, FString Path);
    void MetadataFromJSON(FString Path, FLevelMetadata& Data);
    bool IsPublished(int64 ID);
    FString GetCustomLevelsPath();
    bool DeleteLevel(int64 ID);
    int64 CreateLevel();
}; // Size: 0x28

#endif
