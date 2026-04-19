#ifndef UE4SS_SDK_ABP_GoblinAudience_HPP
#define UE4SS_SDK_ABP_GoblinAudience_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_76;                                                          // 0x0004 (size: 0x8)
    bool __BoolProperty_77;                                                           // 0x000C (size: 0x1)
    float __FloatProperty_78;                                                         // 0x0010 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_79;                                // 0x0014 (size: 0x2C)
    float __FloatProperty_80;                                                         // 0x0040 (size: 0x4)
    bool __BoolProperty_81;                                                           // 0x0044 (size: 0x1)
    EAnimSyncMethod __EnumProperty_82;                                                // 0x0045 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_83;                              // 0x0046 (size: 0x1)
    FName __NameProperty_84;                                                          // 0x0048 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_85;                                         // 0x0050 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0070 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F0 (size: 0x18)

}; // Size: 0x108

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

class UABP_GoblinAudience_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0360 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0368 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0370 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0390 (size: 0x48)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9;                            // 0x03E0 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x0BC0 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x13A0 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x1B80 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x2360 (size: 0x7E0)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x2B40 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x2B60 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;                                  // 0x2B80 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x2CA8 (size: 0x128)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x2DD0 (size: 0x48)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x2E20 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x3600 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x3DE0 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x45C0 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x4DA0 (size: 0x7E0)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x5580 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x55A0 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x55C0 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x56E8 (size: 0x128)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x5810 (size: 0xC8)
    double Start;                                                                     // 0x58D8 (size: 0x8)
    double Cheering;                                                                  // 0x58E0 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_ABP_GoblinAudience(int32 EntryPoint);
}; // Size: 0x58E8

#endif
