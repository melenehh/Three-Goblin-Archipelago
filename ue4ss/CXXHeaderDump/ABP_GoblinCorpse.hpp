#ifndef UE4SS_SDK_ABP_GoblinCorpse_HPP
#define UE4SS_SDK_ABP_GoblinCorpse_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_34;                                                          // 0x0004 (size: 0x8)
    bool __BoolProperty_35;                                                           // 0x000C (size: 0x1)
    float __FloatProperty_36;                                                         // 0x0010 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_37;                                // 0x0014 (size: 0x2C)
    float __FloatProperty_38;                                                         // 0x0040 (size: 0x4)
    bool __BoolProperty_39;                                                           // 0x0044 (size: 0x1)
    EAnimSyncMethod __EnumProperty_40;                                                // 0x0045 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_41;                              // 0x0046 (size: 0x1)
    FName __NameProperty_42;                                                          // 0x0048 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_43;                                         // 0x0050 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0070 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F0 (size: 0x18)

}; // Size: 0x108

class UABP_GoblinCorpse_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0368 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0388 (size: 0x48)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x03D0 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x0BB0 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x1390 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x1B70 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x2350 (size: 0x7E0)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x2B30 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x2B50 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x2B70 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x2C98 (size: 0x128)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_GoblinCorpse(int32 EntryPoint);
}; // Size: 0x2DC0

#endif
