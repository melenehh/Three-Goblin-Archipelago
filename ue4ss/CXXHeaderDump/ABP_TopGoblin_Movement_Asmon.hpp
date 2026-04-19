#ifndef UE4SS_SDK_ABP_TopGoblin_Movement_Asmon_HPP
#define UE4SS_SDK_ABP_TopGoblin_Movement_Asmon_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_85;                                                          // 0x0004 (size: 0x8)
    TArray<float> __ArrayProperty_86;                                                 // 0x0010 (size: 0x10)
    FName __NameProperty_87;                                                          // 0x0020 (size: 0x8)
    int32 __IntProperty_88;                                                           // 0x0028 (size: 0x4)
    bool __BoolProperty_89;                                                           // 0x002C (size: 0x1)
    float __FloatProperty_90;                                                         // 0x0030 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_91;                                // 0x0034 (size: 0x2C)
    float __FloatProperty_92;                                                         // 0x0060 (size: 0x4)
    EAnimSyncMethod __EnumProperty_93;                                                // 0x0064 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_94;                              // 0x0065 (size: 0x1)
    FName __NameProperty_95;                                                          // 0x0068 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_96;                                         // 0x0070 (size: 0x20)
    class UBlendProfile* __BlendProfile_97;                                           // 0x0090 (size: 0x8)
    class UCurveFloat* __CurveFloat_98;                                               // 0x0098 (size: 0x8)
    bool __BoolProperty_99;                                                           // 0x00A0 (size: 0x1)
    EAlphaBlendOption __EnumProperty_100;                                             // 0x00A1 (size: 0x1)
    EBlendListTransitionType __EnumProperty_101;                                      // 0x00A2 (size: 0x1)
    TArray<float> __ArrayProperty_102;                                                // 0x00A8 (size: 0x10)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00B8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0138 (size: 0x18)

}; // Size: 0x150

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    float __FloatProperty_0;                                                          // 0x0004 (size: 0x4)
    bool __BoolProperty_1;                                                            // 0x0008 (size: 0x1)

}; // Size: 0x9

class UABP_TopGoblin_Movement_Asmon_C : public UGoblinAnimInstance
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
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x2D00 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x2E28 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x2F50 (size: 0x128)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x3078 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x30C0 (size: 0x48)
    double Speed;                                                                     // 0x3108 (size: 0x8)
    FVector Velocity;                                                                 // 0x3110 (size: 0x18)
    double Wobblinness;                                                               // 0x3128 (size: 0x8)
    double TiltAmount;                                                                // 0x3130 (size: 0x8)
    int32 GoblinIndex;                                                                // 0x3138 (size: 0x4)
    bool IsPreview;                                                                   // 0x313C (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TopGoblin_Movement_Asmon_AnimGraphNode_BlendListByBool_886DF16D79F24029AF8701EDE1BB19DF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TopGoblin_Movement_Asmon_AnimGraphNode_SequencePlayer_1A924D5B8D984B76977B732E233CC44F();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_TopGoblin_Movement_Asmon(int32 EntryPoint);
}; // Size: 0x313D

#endif
