#ifndef UE4SS_SDK_ABP_MiddleGoblin_Movement_HPP
#define UE4SS_SDK_ABP_MiddleGoblin_Movement_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_61;                                                          // 0x0004 (size: 0x8)
    class UBlendProfile* __BlendProfile_62;                                           // 0x0010 (size: 0x8)
    class UCurveFloat* __CurveFloat_63;                                               // 0x0018 (size: 0x8)
    EAlphaBlendOption __EnumProperty_64;                                              // 0x0020 (size: 0x1)
    EBlendListTransitionType __EnumProperty_65;                                       // 0x0021 (size: 0x1)
    TArray<float> __ArrayProperty_66;                                                 // 0x0028 (size: 0x10)
    bool __BoolProperty_67;                                                           // 0x0038 (size: 0x1)
    float __FloatProperty_68;                                                         // 0x003C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_69;                                // 0x0040 (size: 0x2C)
    float __FloatProperty_70;                                                         // 0x006C (size: 0x4)
    bool __BoolProperty_71;                                                           // 0x0070 (size: 0x1)
    EAnimSyncMethod __EnumProperty_72;                                                // 0x0071 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_73;                              // 0x0072 (size: 0x1)
    FName __NameProperty_74;                                                          // 0x0074 (size: 0x8)
    FName __NameProperty_75;                                                          // 0x007C (size: 0x8)
    int32 __IntProperty_76;                                                           // 0x0084 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_77;                                         // 0x0088 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0128 (size: 0x18)

}; // Size: 0x140

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    float __FloatProperty_0;                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

class UABP_MiddleGoblin_Movement_C : public UGoblinAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0360 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0368 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0370 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0390 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x03D8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0420 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0468 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0488 (size: 0xC8)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x0550 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x0D30 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x1510 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x1CF0 (size: 0x7E0)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x24D0 (size: 0x7E0)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x2CB0 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x2DD8 (size: 0x128)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x2F00 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x2F20 (size: 0x20)
    double Speed;                                                                     // 0x2F40 (size: 0x8)
    FVector Velocity;                                                                 // 0x2F48 (size: 0x18)
    double Wobblinness;                                                               // 0x2F60 (size: 0x8)
    double TiltAmount;                                                                // 0x2F68 (size: 0x8)
    int32 GoblinIndex;                                                                // 0x2F70 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiddleGoblin_Movement_AnimGraphNode_BlendListByBool_953A872844AB23B59435DDA55E4FC500();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiddleGoblin_Movement_AnimGraphNode_SequencePlayer_3478FAC04DF5C00466A8FE907E1E0317();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_MiddleGoblin_Movement(int32 EntryPoint);
}; // Size: 0x2F74

#endif
