#ifndef UE4SS_SDK_ABP_TopGoblin_Movement_HPP
#define UE4SS_SDK_ABP_TopGoblin_Movement_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_82;                                                          // 0x0004 (size: 0x8)
    TArray<float> __ArrayProperty_83;                                                 // 0x0010 (size: 0x10)
    FName __NameProperty_84;                                                          // 0x0020 (size: 0x8)
    int32 __IntProperty_85;                                                           // 0x0028 (size: 0x4)
    class UBlendProfile* __BlendProfile_86;                                           // 0x0030 (size: 0x8)
    class UCurveFloat* __CurveFloat_87;                                               // 0x0038 (size: 0x8)
    EAlphaBlendOption __EnumProperty_88;                                              // 0x0040 (size: 0x1)
    EBlendListTransitionType __EnumProperty_89;                                       // 0x0041 (size: 0x1)
    TArray<float> __ArrayProperty_90;                                                 // 0x0048 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_91;                                         // 0x0058 (size: 0x20)
    bool __BoolProperty_92;                                                           // 0x0078 (size: 0x1)
    float __FloatProperty_93;                                                         // 0x007C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_94;                                // 0x0080 (size: 0x2C)
    float __FloatProperty_95;                                                         // 0x00AC (size: 0x4)
    bool __BoolProperty_96;                                                           // 0x00B0 (size: 0x1)
    EAnimSyncMethod __EnumProperty_97;                                                // 0x00B1 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_98;                              // 0x00B2 (size: 0x1)
    FName __NameProperty_99;                                                          // 0x00B4 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00C0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0140 (size: 0x18)

}; // Size: 0x158

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    float __FloatProperty_0;                                                          // 0x0004 (size: 0x4)
    bool __BoolProperty_1;                                                            // 0x0008 (size: 0x1)

}; // Size: 0x9

class UABP_TopGoblin_Movement_C : public UGoblinAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0xC)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0368 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0370 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0378 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0398 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x03E0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0428 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0470 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0490 (size: 0xC8)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x0560 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x0D40 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x1520 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x1D00 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x24E0 (size: 0x7E0)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x2CC0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x2CE0 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x2D00 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x2E28 (size: 0x128)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x2F50 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x2F98 (size: 0x48)
    double Speed;                                                                     // 0x2FE0 (size: 0x8)
    FVector Velocity;                                                                 // 0x2FE8 (size: 0x18)
    double Wobblinness;                                                               // 0x3000 (size: 0x8)
    double TiltAmount;                                                                // 0x3008 (size: 0x8)
    int32 GoblinIndex;                                                                // 0x3010 (size: 0x4)
    bool IsPreview;                                                                   // 0x3014 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TopGoblin_Movement_AnimGraphNode_BlendListByBool_6283C8BE455A2626E4D29090DB4DDA23();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TopGoblin_Movement_AnimGraphNode_SequencePlayer_A90E218D4481023F2976769C5D13E77D();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_TopGoblin_Movement(int32 EntryPoint);
}; // Size: 0x3015

#endif
