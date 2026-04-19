#ifndef UE4SS_SDK_KawaiiPhysics_HPP
#define UE4SS_SDK_KawaiiPhysics_HPP

#include "KawaiiPhysics_enums.hpp"

struct FAnimNode_KawaiiPhysics : public FAnimNode_SkeletalControlBase
{
    FBoneReference RootBone;                                                          // 0x00C8 (size: 0x10)
    TArray<FBoneReference> ExcludeBones;                                              // 0x00D8 (size: 0x10)
    int32 TargetFrameRate;                                                            // 0x00E8 (size: 0x4)
    bool OverrideTargetFramerate;                                                     // 0x00EC (size: 0x1)
    bool bNeedWarmUp;                                                                 // 0x00ED (size: 0x1)
    int32 WarmUpFrames;                                                               // 0x00F0 (size: 0x4)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x00F4 (size: 0x18)
    class UCurveFloat* DampingCurve;                                                  // 0x0110 (size: 0x8)
    class UCurveFloat* WorldDampingLocationCurve;                                     // 0x0118 (size: 0x8)
    class UCurveFloat* WorldDampingRotationCurve;                                     // 0x0120 (size: 0x8)
    class UCurveFloat* StiffnessCurve;                                                // 0x0128 (size: 0x8)
    class UCurveFloat* RadiusCurve;                                                   // 0x0130 (size: 0x8)
    class UCurveFloat* LimitAngleCurve;                                               // 0x0138 (size: 0x8)
    FRuntimeFloatCurve DampingCurveData;                                              // 0x0140 (size: 0x88)
    FRuntimeFloatCurve WorldDampingLocationCurveData;                                 // 0x01C8 (size: 0x88)
    FRuntimeFloatCurve WorldDampingRotationCurveData;                                 // 0x0250 (size: 0x88)
    FRuntimeFloatCurve StiffnessCurveData;                                            // 0x02D8 (size: 0x88)
    FRuntimeFloatCurve RadiusCurveData;                                               // 0x0360 (size: 0x88)
    FRuntimeFloatCurve LimitAngleCurveData;                                           // 0x03E8 (size: 0x88)
    bool bUpdatePhysicsSettingsInGame;                                                // 0x0470 (size: 0x1)
    float DummyBoneLength;                                                            // 0x0474 (size: 0x4)
    EBoneForwardAxis BoneForwardAxis;                                                 // 0x0478 (size: 0x1)
    EPlanarConstraint PlanarConstraint;                                               // 0x0479 (size: 0x1)
    bool ResetBoneTransformWhenBoneNotFound;                                          // 0x047A (size: 0x1)
    TArray<FSphericalLimit> SphericalLimits;                                          // 0x0480 (size: 0x10)
    TArray<FCapsuleLimit> CapsuleLimits;                                              // 0x0490 (size: 0x10)
    TArray<FPlanarLimit> PlanarLimits;                                                // 0x04A0 (size: 0x10)
    EXPBDComplianceType BoneConstraintGlobalComplianceType;                           // 0x04B0 (size: 0x1)
    int32 BoneConstraintIterationCountBeforeCollision;                                // 0x04B4 (size: 0x4)
    int32 BoneConstraintIterationCountAfterCollision;                                 // 0x04B8 (size: 0x4)
    bool bAutoAddChildDummyBoneConstraint;                                            // 0x04BC (size: 0x1)
    TArray<FModifyBoneConstraint> BoneConstraints;                                    // 0x04C0 (size: 0x10)
    class UKawaiiPhysicsBoneConstraintsDataAsset* BoneConstraintsDataAsset;           // 0x04D0 (size: 0x8)
    TArray<FModifyBoneConstraint> BoneConstraintsData;                                // 0x04D8 (size: 0x10)
    TArray<FModifyBoneConstraint> MergedBoneConstraints;                              // 0x04E8 (size: 0x10)
    class UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset;                             // 0x04F8 (size: 0x8)
    TArray<FSphericalLimit> SphericalLimitsData;                                      // 0x0500 (size: 0x10)
    TArray<FCapsuleLimit> CapsuleLimitsData;                                          // 0x0510 (size: 0x10)
    TArray<FPlanarLimit> PlanarLimitsData;                                            // 0x0520 (size: 0x10)
    float TeleportDistanceThreshold;                                                  // 0x0530 (size: 0x4)
    float TeleportRotationThreshold;                                                  // 0x0534 (size: 0x4)
    FVector Gravity;                                                                  // 0x0538 (size: 0x18)
    bool bEnableWind;                                                                 // 0x0550 (size: 0x1)
    float WindScale;                                                                  // 0x0554 (size: 0x4)
    bool bAllowWorldCollision;                                                        // 0x0558 (size: 0x1)
    bool bOverrideCollisionParams;                                                    // 0x0559 (size: 0x1)
    FBodyInstance CollisionChannelSettings;                                           // 0x0560 (size: 0x190)
    bool bIgnoreSelfComponent;                                                        // 0x06F0 (size: 0x1)
    TArray<FBoneReference> IgnoreBones;                                               // 0x06F8 (size: 0x10)
    TArray<FName> IgnoreBoneNamePrefix;                                               // 0x0708 (size: 0x10)
    TArray<FKawaiiPhysicsModifyBone> ModifyBones;                                     // 0x0718 (size: 0x10)
    float TotalBoneLength;                                                            // 0x0728 (size: 0x4)
    FTransform PreSkelCompTransform;                                                  // 0x0730 (size: 0x60)
    bool bInitPhysicsSettings;                                                        // 0x0790 (size: 0x1)

}; // Size: 0x7E0

struct FCapsuleLimit : public FCollisionLimitBase
{
    float Radius;                                                                     // 0x0088 (size: 0x4)
    float Length;                                                                     // 0x008C (size: 0x4)

}; // Size: 0x90

struct FCapsuleLimitData : public FCollisionLimitDataBase
{
    float Radius;                                                                     // 0x0080 (size: 0x4)
    float Length;                                                                     // 0x0084 (size: 0x4)

}; // Size: 0x90

struct FCollisionLimitBase
{
    FBoneReference DrivingBone;                                                       // 0x0000 (size: 0x10)
    FVector OffsetLocation;                                                           // 0x0010 (size: 0x18)
    FRotator OffsetRotation;                                                          // 0x0028 (size: 0x18)
    FVector Location;                                                                 // 0x0040 (size: 0x18)
    FQuat Rotation;                                                                   // 0x0060 (size: 0x20)
    bool bEnable;                                                                     // 0x0080 (size: 0x1)

}; // Size: 0x90

struct FCollisionLimitDataBase
{
    FName DrivingBoneName;                                                            // 0x0000 (size: 0x8)
    FVector OffsetLocation;                                                           // 0x0008 (size: 0x18)
    FRotator OffsetRotation;                                                          // 0x0020 (size: 0x18)
    FVector Location;                                                                 // 0x0038 (size: 0x18)
    FQuat Rotation;                                                                   // 0x0050 (size: 0x20)
    FGuid Guid;                                                                       // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FKawaiiPhysicsModifyBone
{
    FBoneReference BoneRef;                                                           // 0x0000 (size: 0x10)
    int32 ParentIndex;                                                                // 0x0010 (size: 0x4)
    TArray<int32> ChildIndexs;                                                        // 0x0018 (size: 0x10)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x0028 (size: 0x18)
    FVector Location;                                                                 // 0x0040 (size: 0x18)
    FVector PrevLocation;                                                             // 0x0058 (size: 0x18)
    FQuat PrevRotation;                                                               // 0x0070 (size: 0x20)
    FVector PoseLocation;                                                             // 0x0090 (size: 0x18)
    FQuat PoseRotation;                                                               // 0x00B0 (size: 0x20)
    FVector PoseScale;                                                                // 0x00D0 (size: 0x18)
    float LengthFromRoot;                                                             // 0x00E8 (size: 0x4)
    bool bDummy;                                                                      // 0x00EC (size: 0x1)
    bool bSkipSimulate;                                                               // 0x00ED (size: 0x1)

}; // Size: 0xF0

struct FKawaiiPhysicsReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FKawaiiPhysicsSettings
{
    float Damping;                                                                    // 0x0000 (size: 0x4)
    float WorldDampingLocation;                                                       // 0x0004 (size: 0x4)
    float WorldDampingRotation;                                                       // 0x0008 (size: 0x4)
    float Stiffness;                                                                  // 0x000C (size: 0x4)
    float Radius;                                                                     // 0x0010 (size: 0x4)
    float LimitAngle;                                                                 // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FModifyBoneConstraint
{
    FBoneReference Bone1;                                                             // 0x0000 (size: 0x10)
    FBoneReference Bone2;                                                             // 0x0010 (size: 0x10)
    bool bOverrideCompliance;                                                         // 0x0020 (size: 0x1)
    EXPBDComplianceType ComplianceType;                                               // 0x0021 (size: 0x1)
    int32 ModifyBoneIndex1;                                                           // 0x0024 (size: 0x4)
    int32 ModifyBoneIndex2;                                                           // 0x0028 (size: 0x4)
    float Length;                                                                     // 0x002C (size: 0x4)
    bool bIsDummy;                                                                    // 0x0030 (size: 0x1)
    float Lambda;                                                                     // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FModifyBoneConstraintData
{
    FName BoneName1;                                                                  // 0x0000 (size: 0x8)
    FName BoneName2;                                                                  // 0x0008 (size: 0x8)
    bool bOverrideCompliance;                                                         // 0x0010 (size: 0x1)
    EXPBDComplianceType ComplianceType;                                               // 0x0011 (size: 0x1)

}; // Size: 0x14

struct FPlanarLimit : public FCollisionLimitBase
{
    FPlane Plane;                                                                     // 0x0090 (size: 0x20)

}; // Size: 0xB0

struct FPlanarLimitData : public FCollisionLimitDataBase
{
    FPlane Plane;                                                                     // 0x0080 (size: 0x20)

}; // Size: 0xA0

struct FRegexPatternBoneSet
{
    FString RegexPatternBone1;                                                        // 0x0000 (size: 0x10)
    FString RegexPatternBone2;                                                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FSphericalLimit : public FCollisionLimitBase
{
    float Radius;                                                                     // 0x0088 (size: 0x4)
    ESphericalLimitType LimitType;                                                    // 0x008C (size: 0x1)

}; // Size: 0x90

struct FSphericalLimitData : public FCollisionLimitDataBase
{
    float Radius;                                                                     // 0x0080 (size: 0x4)
    ESphericalLimitType LimitType;                                                    // 0x0084 (size: 0x1)

}; // Size: 0x90

class UKawaiiPhysicsBoneConstraintsDataAsset : public UDataAsset
{
    TArray<FModifyBoneConstraintData> BoneConstraintsData;                            // 0x0030 (size: 0x10)

}; // Size: 0x40

class UKawaiiPhysicsLibrary : public UBlueprintFunctionLibrary
{

    FKawaiiPhysicsReference SetWindScale(const FKawaiiPhysicsReference& KawaiiPhysics, float WindScale);
    FKawaiiPhysicsReference SetTeleportRotationThreshold(const FKawaiiPhysicsReference& KawaiiPhysics, float TeleportRotationThreshold);
    FKawaiiPhysicsReference SetTeleportDistanceThreshold(const FKawaiiPhysicsReference& KawaiiPhysics, float TeleportDistanceThreshold);
    FKawaiiPhysicsReference SetPhysicsSettings(const FKawaiiPhysicsReference& KawaiiPhysics, FKawaiiPhysicsSettings& PhysicsSettings);
    FKawaiiPhysicsReference SetNeedWarmUp(const FKawaiiPhysicsReference& KawaiiPhysics, bool NeedWarmUp);
    FKawaiiPhysicsReference SetGravity(const FKawaiiPhysicsReference& KawaiiPhysics, FVector Gravity);
    FKawaiiPhysicsReference SetEnableWind(const FKawaiiPhysicsReference& KawaiiPhysics, bool EnableWind);
    FKawaiiPhysicsReference SetDummyBoneLength(const FKawaiiPhysicsReference& KawaiiPhysics, float DummyBoneLength);
    FKawaiiPhysicsReference SetAllowWorldCollision(const FKawaiiPhysicsReference& KawaiiPhysics, bool AllowWorldCollision);
    FKawaiiPhysicsReference ResetDynamics(const FKawaiiPhysicsReference& KawaiiPhysics);
    float GetWindScale(const FKawaiiPhysicsReference& KawaiiPhysics);
    float GetTeleportRotationThreshold(const FKawaiiPhysicsReference& KawaiiPhysics);
    float GetTeleportDistanceThreshold(const FKawaiiPhysicsReference& KawaiiPhysics);
    FKawaiiPhysicsSettings GetPhysicsSettings(const FKawaiiPhysicsReference& KawaiiPhysics);
    bool GetNeedWarmUp(const FKawaiiPhysicsReference& KawaiiPhysics);
    FVector GetGravity(const FKawaiiPhysicsReference& KawaiiPhysics);
    bool GetEnableWind(const FKawaiiPhysicsReference& KawaiiPhysics);
    float GetDummyBoneLength(const FKawaiiPhysicsReference& KawaiiPhysics);
    bool GetAllowWorldCollision(const FKawaiiPhysicsReference& KawaiiPhysics);
    void ConvertToKawaiiPhysicsPure(const FAnimNodeReference& Node, FKawaiiPhysicsReference& KawaiiPhysics, bool& Result);
    FKawaiiPhysicsReference ConvertToKawaiiPhysics(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
}; // Size: 0x28

class UKawaiiPhysicsLimitsDataAsset : public UDataAsset
{
    TArray<FSphericalLimit> SphericalLimits;                                          // 0x0030 (size: 0x10)
    TArray<FCapsuleLimit> CapsuleLimits;                                              // 0x0040 (size: 0x10)
    TArray<FPlanarLimit> PlanarLimits;                                                // 0x0050 (size: 0x10)

}; // Size: 0x60

#endif
