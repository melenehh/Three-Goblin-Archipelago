#ifndef UE4SS_SDK_ABP_BarbarGuy_Movement_HPP
#define UE4SS_SDK_ABP_BarbarGuy_Movement_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_319;                                                         // 0x0004 (size: 0x8)
    TArray<int32> __ArrayProperty_320;                                                // 0x0010 (size: 0x10)
    float __FloatProperty_321;                                                        // 0x0020 (size: 0x4)
    FName __NameProperty_322;                                                         // 0x0024 (size: 0x8)
    int32 __IntProperty_323;                                                          // 0x002C (size: 0x4)
    float __FloatProperty_324;                                                        // 0x0030 (size: 0x4)
    TArray<float> __ArrayProperty_325;                                                // 0x0038 (size: 0x10)
    TArray<float> __ArrayProperty_326;                                                // 0x0048 (size: 0x10)
    float __FloatProperty_327;                                                        // 0x0058 (size: 0x4)
    bool __BoolProperty_328;                                                          // 0x005C (size: 0x1)
    float __FloatProperty_329;                                                        // 0x0060 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_330;                               // 0x0064 (size: 0x2C)
    float __FloatProperty_331;                                                        // 0x0090 (size: 0x4)
    EAnimSyncMethod __EnumProperty_332;                                               // 0x0094 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_333;                             // 0x0095 (size: 0x1)
    class UBlendProfile* __BlendProfile_334;                                          // 0x0098 (size: 0x8)
    class UCurveFloat* __CurveFloat_335;                                              // 0x00A0 (size: 0x8)
    bool __BoolProperty_336;                                                          // 0x00A8 (size: 0x1)
    EAlphaBlendOption __EnumProperty_337;                                             // 0x00A9 (size: 0x1)
    EBlendListTransitionType __EnumProperty_338;                                      // 0x00AA (size: 0x1)
    TArray<float> __ArrayProperty_339;                                                // 0x00B0 (size: 0x10)
    TArray<int32> __ArrayProperty_340;                                                // 0x00C0 (size: 0x10)
    FName __NameProperty_341;                                                         // 0x00D0 (size: 0x8)
    FName __NameProperty_342;                                                         // 0x00D8 (size: 0x8)
    int32 __IntProperty_343;                                                          // 0x00E0 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_344;                                        // 0x00E8 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0108 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0188 (size: 0x18)

}; // Size: 0x1A0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    uint8 __ByteProperty;                                                             // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)
    int32 __IntProperty_1;                                                            // 0x0004 (size: 0x4)
    int32 __IntProperty_2;                                                            // 0x0008 (size: 0x4)
    int32 __IntProperty_3;                                                            // 0x000C (size: 0x4)
    int32 __IntProperty_4;                                                            // 0x0010 (size: 0x4)
    uint8 __ByteProperty_5;                                                           // 0x0014 (size: 0x1)

}; // Size: 0x15

class UABP_BarbarGuy_Movement_C : public UNPCAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0358 (size: 0x18)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0370 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0378 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0380 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x03A0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x03C8 (size: 0x28)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_1;                        // 0x03F0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18;                         // 0x0438 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17;                         // 0x0480 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x04C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16;                         // 0x0510 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0558 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15;                         // 0x0578 (size: 0x48)
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_3;                          // 0x05C0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14;                         // 0x0608 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13;                         // 0x0650 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12;                         // 0x0698 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11;                         // 0x06E0 (size: 0x48)
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_2;                          // 0x0728 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10;                         // 0x0770 (size: 0x48)
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_1;                          // 0x07B8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9;                          // 0x0800 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;                          // 0x0848 (size: 0x48)
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;                            // 0x0890 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x08D8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x0920 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x0968 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x09B0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x09F8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0A40 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0A88 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0AD0 (size: 0x48)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;                          // 0x0B18 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0B60 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0B80 (size: 0xC8)
    double Speed;                                                                     // 0x0C48 (size: 0x8)
    uint8 AIState;                                                                    // 0x0C50 (size: 0x1)
    bool Drunk;                                                                       // 0x0C51 (size: 0x1)
    int32 RandomAnimationIndex;                                                       // 0x0C54 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BarbarGuy_Movement_AnimGraphNode_BlendListByInt_2CF57FAAD8934772AABF92E48B2755A8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BarbarGuy_Movement_AnimGraphNode_BlendListByInt_C26D0ED3EE744859AEE09F52B1EC1E5C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BarbarGuy_Movement_AnimGraphNode_BlendListByInt_8106166E8F72433C88A4051DAA573B49();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BarbarGuy_Movement_AnimGraphNode_BlendListByInt_F1529F1983444DF4A1D9C1CF022DD355();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BarbarGuy_Movement_AnimGraphNode_TransitionResult_B38B97894A93205F59D6ADBB6F06D958();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BarbarGuy_Movement_AnimGraphNode_TransitionResult_2A613D154307ABB1A3787FB227F00B4E();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_Step();
    void ExecuteUbergraph_ABP_BarbarGuy_Movement(int32 EntryPoint);
}; // Size: 0xC58

#endif
