#ifndef UE4SS_SDK_ABP_GoblinMovement_HPP
#define UE4SS_SDK_ABP_GoblinMovement_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_88;                                                          // 0x0004 (size: 0x8)
    class UBlendProfile* __BlendProfile_89;                                           // 0x0010 (size: 0x8)
    class UCurveFloat* __CurveFloat_90;                                               // 0x0018 (size: 0x8)
    EAlphaBlendOption __EnumProperty_91;                                              // 0x0020 (size: 0x1)
    EBlendListTransitionType __EnumProperty_92;                                       // 0x0021 (size: 0x1)
    TArray<float> __ArrayProperty_93;                                                 // 0x0028 (size: 0x10)
    FName __NameProperty_94;                                                          // 0x0038 (size: 0x8)
    int32 __IntProperty_95;                                                           // 0x0040 (size: 0x4)
    bool __BoolProperty_96;                                                           // 0x0044 (size: 0x1)
    float __FloatProperty_97;                                                         // 0x0048 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_98;                                // 0x004C (size: 0x2C)
    float __FloatProperty_99;                                                         // 0x0078 (size: 0x4)
    bool __BoolProperty_100;                                                          // 0x007C (size: 0x1)
    EAnimSyncMethod __EnumProperty_101;                                               // 0x007D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_102;                             // 0x007E (size: 0x1)
    FName __NameProperty_103;                                                         // 0x0080 (size: 0x8)
    FName __NameProperty_104;                                                         // 0x0088 (size: 0x8)
    int32 __IntProperty_105;                                                          // 0x0090 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_106;                                        // 0x0098 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00B8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0138 (size: 0x18)

}; // Size: 0x150

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    float __FloatProperty_0;                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

class UABP_GoblinMovement_C : public UGoblinAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0360 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0368 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0370 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0390 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03B8 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x03E0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0428 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0470 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x04B8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x04D8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0520 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0540 (size: 0xC8)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x0610 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x0DF0 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x15D0 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x1DB0 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x2590 (size: 0x7E0)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x2D70 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x2E98 (size: 0x128)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x2FC0 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x2FE0 (size: 0x20)
    double Speed;                                                                     // 0x3000 (size: 0x8)
    FVector Velocity;                                                                 // 0x3008 (size: 0x18)
    double Wobblinness;                                                               // 0x3020 (size: 0x8)
    double TiltAmount;                                                                // 0x3028 (size: 0x8)
    int32 GoblinIndex;                                                                // 0x3030 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GoblinMovement_AnimGraphNode_BlendListByBool_4B1E7C274ABCC73EACE92F84A3B54122();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GoblinMovement_AnimGraphNode_SequencePlayer_EEB3185741E03EB8084E14A80AB84A01();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GoblinMovement_AnimGraphNode_TransitionResult_F98F50B34FA706F8B45FAAB1CF3A9A7E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GoblinMovement_AnimGraphNode_TransitionResult_75E4E683416E2AFF1942F093C5860233();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_Step();
    void ExecuteUbergraph_ABP_GoblinMovement(int32 EntryPoint);
}; // Size: 0x3034

#endif
