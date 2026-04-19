#ifndef UE4SS_SDK_OptimusCore_HPP
#define UE4SS_SDK_OptimusCore_HPP

#include "OptimusCore_enums.hpp"

struct FOptimusAction
{
}; // Size: 0x18

struct FOptimusAnimAttributeArray
{
    TArray<FOptimusAnimAttributeDescription> InnerArray;                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FOptimusAnimAttributeDescription
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FName BoneName;                                                                   // 0x0010 (size: 0x8)
    FOptimusDataTypeRef DataType;                                                     // 0x0018 (size: 0x10)
    class UOptimusValueContainer* DefaultValue;                                       // 0x0028 (size: 0x8)
    FString HlslId;                                                                   // 0x0030 (size: 0x10)
    FName PinName;                                                                    // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FOptimusComponentBindingAction_AddBinding : public FOptimusAction
{
}; // Size: 0x30

struct FOptimusComponentBindingAction_RemoveBinding : public FOptimusAction
{
}; // Size: 0x48

struct FOptimusComponentBindingAction_RenameBinding : public FOptimusAction
{
}; // Size: 0x28

struct FOptimusComponentBindingAction_SetComponentSource : public FOptimusAction
{
}; // Size: 0x40

struct FOptimusCompoundAction : public FOptimusAction
{
}; // Size: 0x28

struct FOptimusComputeGraphInfo
{
    EOptimusNodeGraphType GraphType;                                                  // 0x0000 (size: 0x4)
    FName GraphName;                                                                  // 0x0004 (size: 0x8)
    class UOptimusComputeGraph* ComputeGraph;                                         // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FOptimusDataDomain
{
    EOptimusDataDomainType Type;                                                      // 0x0000 (size: 0x4)
    TArray<FName> DimensionNames;                                                     // 0x0008 (size: 0x10)
    int32 Multiplier;                                                                 // 0x0018 (size: 0x4)
    FString Expression;                                                               // 0x0020 (size: 0x10)
    TArray<FName> LevelNames;                                                         // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FOptimusDataType
{
    FName TypeName;                                                                   // 0x0000 (size: 0x8)
    FText DisplayName;                                                                // 0x0008 (size: 0x18)
    FShaderValueTypeHandle ShaderValueType;                                           // 0x0020 (size: 0x8)
    int32 ShaderValueSize;                                                            // 0x0028 (size: 0x4)
    FName TypeCategory;                                                               // 0x002C (size: 0x8)
    TWeakObjectPtr<class UObject> TypeObject;                                         // 0x0034 (size: 0x8)
    bool bHasCustomPinColor;                                                          // 0x003C (size: 0x1)
    FLinearColor CustomPinColor;                                                      // 0x0040 (size: 0x10)
    EOptimusDataTypeUsageFlags UsageFlags;                                            // 0x0050 (size: 0x1)
    EOptimusDataTypeFlags TypeFlags;                                                  // 0x0051 (size: 0x1)

}; // Size: 0x58

struct FOptimusDataTypeRef
{
    FName TypeName;                                                                   // 0x0000 (size: 0x8)
    TWeakObjectPtr<class UObject> TypeObject;                                         // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FOptimusDebugDrawParameters
{
    bool bForceEnable;                                                                // 0x0000 (size: 0x1)
    int32 MaxLineCount;                                                               // 0x0004 (size: 0x4)
    int32 MaxTriangleCount;                                                           // 0x0008 (size: 0x4)
    int32 MaxCharacterCount;                                                          // 0x000C (size: 0x4)
    int32 FontSize;                                                                   // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FOptimusDeformerInstanceComponentBinding
{
    FName ProviderName;                                                               // 0x0000 (size: 0x8)
    FName ComponentName;                                                              // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FOptimusDeformerInstanceExecInfo
{
    FName GraphName;                                                                  // 0x0000 (size: 0x8)
    EOptimusNodeGraphType GraphType;                                                  // 0x0008 (size: 0x4)
    class UComputeGraph* ComputeGraph;                                                // 0x0010 (size: 0x8)
    FComputeGraphInstance ComputeGraphInstance;                                       // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FOptimusExecutionDomain
{
    FName Name;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FOptimusGraphVariableDescription
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FShaderValueTypeHandle ValueType;                                                 // 0x0010 (size: 0x8)
    TArray<uint8> Value;                                                              // 0x0018 (size: 0x10)
    int32 Offset;                                                                     // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FOptimusNodeAction_AddGroupingPin : public FOptimusNodeAction_AddRemovePin
{
}; // Size: 0xB8

struct FOptimusNodeAction_AddPin : public FOptimusNodeAction_AddRemovePin
{
}; // Size: 0xB8

struct FOptimusNodeAction_AddRemovePin : public FOptimusAction
{
}; // Size: 0xB8

struct FOptimusNodeAction_MoveNode : public FOptimusAction
{
}; // Size: 0x48

struct FOptimusNodeAction_MovePin : public FOptimusAction
{
}; // Size: 0x48

struct FOptimusNodeAction_RemovePin : public FOptimusNodeAction_AddRemovePin
{
}; // Size: 0xB8

struct FOptimusNodeAction_RenameNode : public FOptimusAction
{
}; // Size: 0x58

struct FOptimusNodeAction_SetPinDataDomain : public FOptimusAction
{
}; // Size: 0xA8

struct FOptimusNodeAction_SetPinName : public FOptimusAction
{
}; // Size: 0x38

struct FOptimusNodeAction_SetPinType : public FOptimusAction
{
}; // Size: 0x38

struct FOptimusNodeAction_SetPinValue : public FOptimusAction
{
}; // Size: 0x48

struct FOptimusNodeGraphAction_AddGraph : public FOptimusAction
{
}; // Size: 0x90

struct FOptimusNodeGraphAction_AddLink : public FOptimusNodeGraphAction_AddRemoveLink
{
}; // Size: 0x40

struct FOptimusNodeGraphAction_AddNode : public FOptimusAction
{
}; // Size: 0xA0

struct FOptimusNodeGraphAction_AddRemoveLink : public FOptimusAction
{
}; // Size: 0x40

struct FOptimusNodeGraphAction_ConnectAdderPin : public FOptimusNodeGraphAction_AddRemoveLink
{
}; // Size: 0xA8

struct FOptimusNodeGraphAction_DuplicateNode : public FOptimusAction
{
}; // Size: 0xA0

struct FOptimusNodeGraphAction_PackageKernelFunction : public FOptimusAction
{
}; // Size: 0xB0

struct FOptimusNodeGraphAction_RemoveGraph : public FOptimusAction
{
}; // Size: 0x58

struct FOptimusNodeGraphAction_RemoveLink : public FOptimusNodeGraphAction_AddRemoveLink
{
}; // Size: 0x40

struct FOptimusNodeGraphAction_RemoveNode : public FOptimusAction
{
}; // Size: 0x60

struct FOptimusNodeGraphAction_RenameGraph : public FOptimusAction
{
}; // Size: 0x38

struct FOptimusNodeGraphAction_UnpackageKernelFunction : public FOptimusAction
{
}; // Size: 0x60

struct FOptimusNode_GetVariable_DuplicationInfo
{
    FName VariableName;                                                               // 0x0000 (size: 0x8)
    FOptimusDataTypeRef DataType;                                                     // 0x0008 (size: 0x10)
    FString DefaultValue;                                                             // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FOptimusNode_ResourceAccessorBase_DuplicationInfo
{
    FName ResourceName;                                                               // 0x0000 (size: 0x8)
    FOptimusDataTypeRef DataType;                                                     // 0x0008 (size: 0x10)
    FOptimusDataDomain DataDomain;                                                    // 0x0018 (size: 0x40)

}; // Size: 0x58

struct FOptimusParameterBinding
{
    FOptimusValidatedName Name;                                                       // 0x0000 (size: 0x8)
    FOptimusDataTypeRef DataType;                                                     // 0x0008 (size: 0x10)
    FOptimusDataDomain DataDomain;                                                    // 0x0018 (size: 0x40)

}; // Size: 0x58

struct FOptimusParameterBindingArray
{
    TArray<FOptimusParameterBinding> InnerArray;                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FOptimusResourceAction_AddResource : public FOptimusAction
{
}; // Size: 0x70

struct FOptimusResourceAction_RemoveResource : public FOptimusAction
{
}; // Size: 0x48

struct FOptimusResourceAction_RenameResource : public FOptimusAction
{
}; // Size: 0x28

struct FOptimusResourceAction_SetDataDomain : public FOptimusAction
{
}; // Size: 0xA0

struct FOptimusResourceAction_SetDataType : public FOptimusAction
{
}; // Size: 0x40

struct FOptimusSecondaryInputBindingsGroup
{
    FOptimusValidatedName GroupName;                                                  // 0x0000 (size: 0x8)
    FOptimusParameterBindingArray BindingArray;                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FOptimusShaderText
{
    FString Declarations;                                                             // 0x0000 (size: 0x10)
    FString ShaderText;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FOptimusValidatedName
{
    FName Name;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FOptimusVariableAction_AddVariable : public FOptimusAction
{
}; // Size: 0x30

struct FOptimusVariableAction_RemoveVariable : public FOptimusAction
{
}; // Size: 0x58

struct FOptimusVariableAction_RenameVariable : public FOptimusAction
{
}; // Size: 0x28

struct FOptimusVariableAction_SetDataType : public FOptimusAction
{
}; // Size: 0x40

struct FOptimusVariableMetaDataEntry
{
    FName Key;                                                                        // 0x0000 (size: 0x8)
    FString Value;                                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FOptimus_ShaderBinding
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FOptimusDataTypeRef DataType;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

class IOptimusComponentBindingProvider : public IInterface
{
}; // Size: 0x28

class IOptimusComputeKernelProvider : public IInterface
{
}; // Size: 0x28

class IOptimusDataInterfaceProvider : public IInterface
{
}; // Size: 0x28

class IOptimusDeprecatedExecutionDataInterface : public IInterface
{
}; // Size: 0x28

class IOptimusExecutionDomainProvider : public IInterface
{
}; // Size: 0x28

class IOptimusGeneratedClassDefiner : public IInterface
{
}; // Size: 0x28

class IOptimusNodeAdderPinProvider : public IInterface
{
}; // Size: 0x28

class IOptimusNodeFunctionLibraryOwner : public IInterface
{
}; // Size: 0x28

class IOptimusNodeGraphCollectionOwner : public IInterface
{
}; // Size: 0x28

class IOptimusNodePinRouter : public IInterface
{
}; // Size: 0x28

class IOptimusParameterBindingProvider : public IInterface
{
}; // Size: 0x28

class IOptimusPathResolver : public IInterface
{
}; // Size: 0x28

class IOptimusShaderTextProvider : public IInterface
{
}; // Size: 0x28

class IOptimusValueProvider : public IInterface
{
}; // Size: 0x28

class UDefault__OptimusNode_ComputeKernelFunctionGeneratorClass
{
}; // Size: 0x0

class UDefault__OptimusNode_ConstantValueGeneratorClass
{
}; // Size: 0x0

class UDefault__OptimusValueContainerGeneratorClass
{
}; // Size: 0x0

class UOptimusActionStack : public UObject
{
    int32 TransactedActionIndex;                                                      // 0x0028 (size: 0x4)

}; // Size: 0xE0

class UOptimusAnimAttributeDataInterface : public UOptimusComputeDataInterface
{
    FOptimusAnimAttributeArray AttributeArray;                                        // 0x0028 (size: 0x10)

}; // Size: 0x38

class UOptimusAnimAttributeDataProvider : public UComputeDataProvider
{
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0028 (size: 0x8)

}; // Size: 0x48

class UOptimusClothDataInterface : public UOptimusComputeDataInterface
{
}; // Size: 0x28

class UOptimusClothDataProvider : public UComputeDataProvider
{
    class USkinnedMeshComponent* SkinnedMesh;                                         // 0x0028 (size: 0x8)

}; // Size: 0x30

class UOptimusComponentSource : public UObject
{
}; // Size: 0x28

class UOptimusComponentSourceBinding : public UObject
{
    FName BindingName;                                                                // 0x0028 (size: 0x8)
    TSubclassOf<class UOptimusComponentSource> ComponentType;                         // 0x0030 (size: 0x8)
    TArray<FName> ComponentTags;                                                      // 0x0038 (size: 0x10)
    bool bIsPrimaryBinding;                                                           // 0x0048 (size: 0x1)

}; // Size: 0x50

class UOptimusComponentSourceBindingContainer : public UObject
{
    TArray<class UOptimusComponentSourceBinding*> Bindings;                           // 0x0028 (size: 0x10)

}; // Size: 0x38

class UOptimusComputeDataInterface : public UComputeDataInterface
{
}; // Size: 0x28

class UOptimusComputeGraph : public UComputeGraph
{
    TArray<TWeakObjectPtr<UOptimusNode>> KernelToNode;                                // 0x0090 (size: 0x10)

}; // Size: 0xA0

class UOptimusConnectivityDataInterface : public UOptimusComputeDataInterface
{
}; // Size: 0x28

class UOptimusConnectivityDataProvider : public UComputeDataProvider
{
    class USkinnedMeshComponent* SkinnedMesh;                                         // 0x0028 (size: 0x8)

}; // Size: 0x40

class UOptimusCustomComputeKernelDataInterface : public UComputeDataInterface
{
    TWeakObjectPtr<class UOptimusComponentSourceBinding> ComponentSourceBinding;      // 0x0028 (size: 0x8)
    FString NumThreadsExpression;                                                     // 0x0030 (size: 0x10)

}; // Size: 0x40

class UOptimusCustomComputeKernelDataProvider : public UComputeDataProvider
{
}; // Size: 0x38

class UOptimusDebugDrawDataInterface : public UOptimusComputeDataInterface
{
    FOptimusDebugDrawParameters DebugDrawParameters;                                  // 0x0028 (size: 0x14)

}; // Size: 0x40

class UOptimusDebugDrawDataProvider : public UComputeDataProvider
{
    class UPrimitiveComponent* PrimitiveComponent;                                    // 0x0028 (size: 0x8)
    FOptimusDebugDrawParameters DebugDrawParameters;                                  // 0x0030 (size: 0x14)

}; // Size: 0x48

class UOptimusDeformer : public UMeshDeformer
{
    class USkeletalMesh* Mesh;                                                        // 0x0048 (size: 0x8)
    TArray<FOptimusComputeGraphInfo> ComputeGraphs;                                   // 0x0050 (size: 0x10)
    class UOptimusActionStack* ActionStack;                                           // 0x0060 (size: 0x8)
    EOptimusDeformerStatus Status;                                                    // 0x0068 (size: 0x4)
    TArray<class UOptimusNodeGraph*> Graphs;                                          // 0x0070 (size: 0x10)
    class UOptimusComponentSourceBindingContainer* Bindings;                          // 0x0080 (size: 0x8)
    class UOptimusVariableContainer* Variables;                                       // 0x0088 (size: 0x8)
    class UOptimusResourceContainer* Resources;                                       // 0x0090 (size: 0x8)

    TArray<class UOptimusVariableDescription*> GetVariables();
    TArray<class UOptimusResourceDescription*> GetResources();
    TArray<class UOptimusComponentSourceBinding*> GetComponentBindings();
}; // Size: 0x128

class UOptimusDeformerInstance : public UMeshDeformerInstance
{
    TWeakObjectPtr<class UMeshComponent> MeshComponent;                               // 0x0028 (size: 0x8)
    TWeakObjectPtr<class UOptimusDeformerInstanceSettings> InstanceSettings;          // 0x0030 (size: 0x8)
    TArray<FOptimusDeformerInstanceExecInfo> ComputeGraphExecInfos;                   // 0x0038 (size: 0x10)
    class UOptimusVariableContainer* Variables;                                       // 0x0048 (size: 0x8)

    bool SetVectorVariable(FName InVariableName, const FVector& InValue);
    bool SetVector4Variable(FName InVariableName, const FVector4& InValue);
    bool SetTransformVariable(FName InVariableName, const FTransform& InValue);
    bool SetIntVariable(FName InVariableName, int32 InValue);
    bool SetFloatVariable(FName InVariableName, double InValue);
    bool SetBoolVariable(FName InVariableName, bool InValue);
    TArray<class UOptimusVariableDescription*> GetVariables();
    bool EnqueueTriggerGraph(FName InTriggerGraphName);
}; // Size: 0xE0

class UOptimusDeformerInstanceSettings : public UMeshDeformerInstanceSettings
{
    TWeakObjectPtr<class UOptimusDeformer> Deformer;                                  // 0x0028 (size: 0x8)
    TArray<FOptimusDeformerInstanceComponentBinding> Bindings;                        // 0x0030 (size: 0x10)

}; // Size: 0x40

class UOptimusDuplicateVerticesDataInterface : public UOptimusComputeDataInterface
{
}; // Size: 0x28

class UOptimusDuplicateVerticesDataProvider : public UComputeDataProvider
{
    class USkinnedMeshComponent* SkinnedMesh;                                         // 0x0028 (size: 0x8)

}; // Size: 0x30

class UOptimusFunctionNodeGraph : public UOptimusNodeSubGraph
{
    FName Category;                                                                   // 0x00B0 (size: 0x8)

}; // Size: 0xB8

class UOptimusGraphDataInterface : public UComputeDataInterface
{
    TArray<FOptimusGraphVariableDescription> Variables;                               // 0x0028 (size: 0x10)
    int32 ParameterBufferSize;                                                        // 0x0038 (size: 0x4)

}; // Size: 0x40

class UOptimusGraphDataProvider : public UComputeDataProvider
{
    class UMeshComponent* MeshComponent;                                              // 0x0028 (size: 0x8)
    class UOptimusDeformerInstance* DeformerInstance;                                 // 0x0030 (size: 0x8)
    TArray<FOptimusGraphVariableDescription> Variables;                               // 0x0038 (size: 0x10)

}; // Size: 0x50

class UOptimusHalfEdgeDataInterface : public UOptimusComputeDataInterface
{
}; // Size: 0x28

class UOptimusHalfEdgeDataProvider : public UComputeDataProvider
{
    class USkinnedMeshComponent* SkinnedMesh;                                         // 0x0028 (size: 0x8)

}; // Size: 0x50

class UOptimusKernelSource : public UComputeKernelSource
{
    FString Source;                                                                   // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UOptimusMorphTargetDataInterface : public UOptimusComputeDataInterface
{
}; // Size: 0x28

class UOptimusMorphTargetDataProvider : public UComputeDataProvider
{
    class USkinnedMeshComponent* SkinnedMesh;                                         // 0x0028 (size: 0x8)

}; // Size: 0x30

class UOptimusNode : public UObject
{
    FText DisplayName;                                                                // 0x0030 (size: 0x18)
    FVector2D GraphPosition;                                                          // 0x0048 (size: 0x10)
    TArray<class UOptimusNodePin*> Pins;                                              // 0x0058 (size: 0x10)
    TSet<FName> ExpandedPins;                                                         // 0x0068 (size: 0x50)
    EOptimusDiagnosticLevel DiagnosticLevel;                                          // 0x00B8 (size: 0x1)

    bool SetGraphPosition(const FVector2D& InPosition);
    FName GetNodeName();
    FName GetNodeCategory();
    FVector2D GetGraphPosition();
    FText GetDisplayName();
}; // Size: 0x110

class UOptimusNodeGraph : public UObject
{
    EOptimusNodeGraphType GraphType;                                                  // 0x0030 (size: 0x4)
    TArray<class UOptimusNode*> Nodes;                                                // 0x0038 (size: 0x10)
    TArray<class UOptimusNodeLink*> Links;                                            // 0x0048 (size: 0x10)
    TArray<class UOptimusNodeGraph*> Subgraphs;                                       // 0x0058 (size: 0x10)

    bool RenameGraph(class UOptimusNodeGraph* InGraph, FString InNewName);
    bool RemoveNodes(const TArray<class UOptimusNode*>& InNodes);
    bool RemoveNode(class UOptimusNode* InNode);
    bool RemoveLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin);
    bool RemoveAllLinks(class UOptimusNodePin* InNodePin);
    bool MoveGraph(class UOptimusNodeGraph* InGraph, int32 InInsertBefore);
    bool IsSubGraphReference(class UOptimusNode* InNode);
    bool IsKernelFunction(class UOptimusNode* InNode);
    bool IsFunctionReference(class UOptimusNode* InNode);
    bool IsFunctionGraph();
    bool IsExecutionGraph();
    bool IsCustomKernel(class UOptimusNode* InNode);
    EOptimusNodeGraphType GetGraphType();
    TArray<class UOptimusNodeGraph*> GetGraphs();
    int32 GetGraphIndex();
    TArray<class UOptimusNode*> ExpandCollapsedNodes(class UOptimusNode* InFunctionNode);
    bool DuplicateNodes(const TArray<class UOptimusNode*>& InNodes, const FVector2D& InPosition);
    class UOptimusNode* DuplicateNode(class UOptimusNode* InNode, const FVector2D& InPosition);
    class UOptimusNode* ConvertFunctionToCustomKernel(class UOptimusNode* InKernelFunction);
    class UOptimusNode* ConvertCustomKernelToFunction(class UOptimusNode* InCustomKernel);
    class UOptimusNode* CollapseNodesToSubGraph(const TArray<class UOptimusNode*>& InNodes);
    class UOptimusNode* CollapseNodesToFunction(const TArray<class UOptimusNode*>& InNodes);
    class UOptimusNode* AddVariableGetNode(class UOptimusVariableDescription* InVariableDesc, const FVector2D& InPosition);
    class UOptimusNode* AddValueNode(FOptimusDataTypeRef InDataTypeRef, const FVector2D& InPosition);
    class UOptimusNode* AddResourceSetNode(class UOptimusResourceDescription* InResourceDesc, const FVector2D& InPosition);
    class UOptimusNode* AddResourceNode(class UOptimusResourceDescription* InResourceDesc, const FVector2D& InPosition);
    class UOptimusNode* AddResourceGetNode(class UOptimusResourceDescription* InResourceDesc, const FVector2D& InPosition);
    class UOptimusNode* AddNode(const TSubclassOf<class UOptimusNode> InNodeClass, const FVector2D& InPosition);
    bool AddLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin);
    class UOptimusNode* AddDataInterfaceNode(const TSubclassOf<class UOptimusComputeDataInterface> InDataInterfaceClass, const FVector2D& InPosition);
    class UOptimusNode* AddComponentBindingGetNode(class UOptimusComponentSourceBinding* InComponentBinding, const FVector2D& InPosition);
}; // Size: 0x80

class UOptimusNodeLink : public UObject
{
    class UOptimusNodePin* NodeOutputPin;                                             // 0x0028 (size: 0x8)
    class UOptimusNodePin* NodeInputPin;                                              // 0x0030 (size: 0x8)

}; // Size: 0x38

class UOptimusNodePin : public UObject
{
    bool bIsGroupingPin;                                                              // 0x0028 (size: 0x1)
    EOptimusNodePinDirection Direction;                                               // 0x0029 (size: 0x1)
    EOptimusNodePinStorageType StorageType;                                           // 0x002A (size: 0x1)
    FOptimusDataDomain DataDomain;                                                    // 0x0030 (size: 0x40)
    FOptimusDataTypeRef DataType;                                                     // 0x0070 (size: 0x10)
    TArray<class UOptimusNodePin*> SubPins;                                           // 0x0080 (size: 0x10)

}; // Size: 0x90

class UOptimusNodeSubGraph : public UOptimusNodeGraph
{
    TArray<FOptimusParameterBinding> InputBindings;                                   // 0x0080 (size: 0x10)
    TArray<FOptimusParameterBinding> OutputBindings;                                  // 0x0090 (size: 0x10)
    TWeakObjectPtr<class UOptimusNode_GraphTerminal> EntryNode;                       // 0x00A0 (size: 0x8)
    TWeakObjectPtr<class UOptimusNode_GraphTerminal> ReturnNode;                      // 0x00A8 (size: 0x8)

}; // Size: 0xB0

class UOptimusNode_AnimAttributeDataInterface : public UOptimusNode_DataInterface
{
}; // Size: 0x128

class UOptimusNode_ComponentSource : public UOptimusNode
{
    class UOptimusComponentSourceBinding* Binding;                                    // 0x0118 (size: 0x8)

}; // Size: 0x120

class UOptimusNode_ComputeKernelBase : public UOptimusNode
{
}; // Size: 0x118

class UOptimusNode_ComputeKernelFunction : public UOptimusNode_ComputeKernelBase
{
}; // Size: 0x118

class UOptimusNode_ComputeKernelFunctionGeneratorClass : public UClass
{
    FName Category;                                                                   // 0x0200 (size: 0x8)
    FName KernelName;                                                                 // 0x0208 (size: 0x8)
    FOptimusExecutionDomain ExecutionDomain;                                          // 0x0210 (size: 0x8)
    FIntVector GroupSize;                                                             // 0x0218 (size: 0xC)
    TArray<FOptimusParameterBinding> InputBindings;                                   // 0x0228 (size: 0x10)
    TArray<FOptimusParameterBinding> OutputBindings;                                  // 0x0238 (size: 0x10)
    FString ShaderSource;                                                             // 0x0248 (size: 0x10)

}; // Size: 0x258

class UOptimusNode_ConstantValue : public UOptimusNode
{
}; // Size: 0x120

class UOptimusNode_ConstantValueGeneratorClass : public UClass
{
    FOptimusDataTypeRef DataType;                                                     // 0x0200 (size: 0x10)

}; // Size: 0x210

class UOptimusNode_CustomComputeKernel : public UOptimusNode_ComputeKernelBase
{
    FName Category;                                                                   // 0x0138 (size: 0x8)
    FOptimusValidatedName KernelName;                                                 // 0x0140 (size: 0x8)
    FOptimusExecutionDomain ExecutionDomain;                                          // 0x0148 (size: 0x8)
    FIntVector GroupSize;                                                             // 0x0150 (size: 0xC)
    TArray<FOptimus_ShaderBinding> Parameters;                                        // 0x0160 (size: 0x10)
    TArray<FOptimusParameterBinding> InputBindings;                                   // 0x0170 (size: 0x10)
    TArray<FOptimusParameterBinding> OutputBindings;                                  // 0x0180 (size: 0x10)
    FOptimusParameterBindingArray InputBindingArray;                                  // 0x0190 (size: 0x10)
    FOptimusParameterBindingArray OutputBindingArray;                                 // 0x01A0 (size: 0x10)
    TArray<FOptimusSecondaryInputBindingsGroup> SecondaryInputBindingGroups;          // 0x01B0 (size: 0x10)
    TArray<class UComputeSource*> AdditionalSources;                                  // 0x01C0 (size: 0x10)
    FOptimusShaderText ShaderSource;                                                  // 0x01D0 (size: 0x20)

}; // Size: 0x1F0

class UOptimusNode_DataInterface : public UOptimusNode
{
    UClass* DataInterfaceClass;                                                       // 0x0118 (size: 0x8)
    class UOptimusComputeDataInterface* DataInterfaceData;                            // 0x0120 (size: 0x8)

}; // Size: 0x128

class UOptimusNode_FunctionReference : public UOptimusNode
{
    class UOptimusFunctionNodeGraph* FunctionGraph;                                   // 0x0118 (size: 0x8)

}; // Size: 0x120

class UOptimusNode_GetResource : public UOptimusNode_ResourceAccessorBase
{
}; // Size: 0x188

class UOptimusNode_GetVariable : public UOptimusNode
{
    TWeakObjectPtr<class UOptimusVariableDescription> VariableDesc;                   // 0x0118 (size: 0x8)
    FOptimusNode_GetVariable_DuplicationInfo DuplicationInfo;                         // 0x0120 (size: 0x28)

}; // Size: 0x148

class UOptimusNode_GraphTerminal : public UOptimusNode
{
    EOptimusTerminalType TerminalType;                                                // 0x0118 (size: 0x4)
    TWeakObjectPtr<class UOptimusNodeSubGraph> OwningGraph;                           // 0x011C (size: 0x8)

}; // Size: 0x128

class UOptimusNode_Resource : public UOptimusNode_ResourceAccessorBase
{
}; // Size: 0x188

class UOptimusNode_ResourceAccessorBase : public UOptimusNode
{
    TWeakObjectPtr<class UOptimusResourceDescription> ResourceDesc;                   // 0x0120 (size: 0x8)
    EOptimusBufferWriteType WriteType;                                                // 0x0128 (size: 0x1)
    FOptimusNode_ResourceAccessorBase_DuplicationInfo DuplicationInfo;                // 0x0130 (size: 0x58)

}; // Size: 0x188

class UOptimusNode_SetResource : public UOptimusNode_ResourceAccessorBase
{
}; // Size: 0x188

class UOptimusNode_SubGraphReference : public UOptimusNode
{
    class UOptimusNodeSubGraph* SubGraph;                                             // 0x0118 (size: 0x8)

}; // Size: 0x120

class UOptimusPersistentBufferDataInterface : public UOptimusRawBufferDataInterface
{
    FName ResourceName;                                                               // 0x0078 (size: 0x8)

}; // Size: 0x80

class UOptimusPersistentBufferDataProvider : public UOptimusRawBufferDataProvider
{
}; // Size: 0x98

class UOptimusRawBufferDataInterface : public UOptimusComputeDataInterface
{
    FShaderValueTypeHandle ValueType;                                                 // 0x0028 (size: 0x8)
    FOptimusDataDomain DataDomain;                                                    // 0x0030 (size: 0x40)
    TWeakObjectPtr<class UOptimusComponentSourceBinding> ComponentSourceBinding;      // 0x0070 (size: 0x8)

}; // Size: 0x78

class UOptimusRawBufferDataProvider : public UComputeDataProvider
{
    TWeakObjectPtr<class UActorComponent> Component;                                  // 0x0028 (size: 0x8)
    TWeakObjectPtr<class UOptimusComponentSource> ComponentSource;                    // 0x0030 (size: 0x8)
    FOptimusDataDomain DataDomain;                                                    // 0x0038 (size: 0x40)
    int32 ElementStride;                                                              // 0x0078 (size: 0x4)
    int32 RawStride;                                                                  // 0x007C (size: 0x4)

}; // Size: 0x80

class UOptimusResourceContainer : public UObject
{
    TArray<class UOptimusResourceDescription*> Descriptions;                          // 0x0028 (size: 0x10)

}; // Size: 0x38

class UOptimusResourceDescription : public UObject
{
    FName ResourceName;                                                               // 0x0028 (size: 0x8)
    FOptimusDataTypeRef DataType;                                                     // 0x0030 (size: 0x10)
    TWeakObjectPtr<class UOptimusComponentSourceBinding> ComponentBinding;            // 0x0040 (size: 0x8)
    FOptimusDataDomain DataDomain;                                                    // 0x0048 (size: 0x40)
    class UOptimusPersistentBufferDataInterface* DataInterface;                       // 0x0088 (size: 0x8)

}; // Size: 0x90

class UOptimusSceneComponentSource : public UOptimusComponentSource
{
}; // Size: 0x28

class UOptimusSceneDataInterface : public UOptimusComputeDataInterface
{
}; // Size: 0x28

class UOptimusSceneDataProvider : public UComputeDataProvider
{
    class USceneComponent* SceneComponent;                                            // 0x0028 (size: 0x8)

}; // Size: 0x30

class UOptimusSkeletalMeshComponentSource : public UOptimusSkinnedMeshComponentSource
{
}; // Size: 0x28

class UOptimusSkeletonDataInterface : public UOptimusComputeDataInterface
{
}; // Size: 0x28

class UOptimusSkeletonDataProvider : public UComputeDataProvider
{
    class USkinnedMeshComponent* SkinnedMesh;                                         // 0x0028 (size: 0x8)

}; // Size: 0x30

class UOptimusSkinnedMeshComponentSource : public UOptimusComponentSource
{
}; // Size: 0x28

class UOptimusSkinnedMeshDataInterface : public UOptimusComputeDataInterface
{
}; // Size: 0x28

class UOptimusSkinnedMeshDataProvider : public UComputeDataProvider
{
    class USkinnedMeshComponent* SkinnedMesh;                                         // 0x0028 (size: 0x8)

}; // Size: 0x30

class UOptimusSkinnedMeshExecDataInterface : public UOptimusComputeDataInterface
{
    EOptimusSkinnedMeshExecDomain Domain;                                             // 0x0030 (size: 0x1)

}; // Size: 0x38

class UOptimusSkinnedMeshExecDataProvider : public UComputeDataProvider
{
    class USkinnedMeshComponent* SkinnedMesh;                                         // 0x0028 (size: 0x8)
    EOptimusSkinnedMeshExecDomain Domain;                                             // 0x0030 (size: 0x1)

}; // Size: 0x38

class UOptimusSkinnedMeshVertexAttributeDataInterface : public UOptimusComputeDataInterface
{
    FName AttributeName;                                                              // 0x0028 (size: 0x8)

}; // Size: 0x30

class UOptimusSkinnedMeshVertexAttributeDataProvider : public UComputeDataProvider
{
    class USkinnedMeshComponent* SkinnedMeshComponent;                                // 0x0028 (size: 0x8)
    FName AttributeName;                                                              // 0x0030 (size: 0x8)

}; // Size: 0x38

class UOptimusSkinnedMeshWriteDataInterface : public UOptimusComputeDataInterface
{
}; // Size: 0x28

class UOptimusSkinnedMeshWriteDataProvider : public UComputeDataProvider
{
    class USkinnedMeshComponent* SkinnedMesh;                                         // 0x0028 (size: 0x8)

}; // Size: 0x38

class UOptimusSource : public UComputeSource
{
    FString SourceText;                                                               // 0x0040 (size: 0x10)

}; // Size: 0x50

class UOptimusTransientBufferDataInterface : public UOptimusRawBufferDataInterface
{
}; // Size: 0x78

class UOptimusTransientBufferDataProvider : public UOptimusRawBufferDataProvider
{
}; // Size: 0x80

class UOptimusValueContainer : public UObject
{
}; // Size: 0x28

class UOptimusValueContainerGeneratorClass : public UClass
{
    FOptimusDataTypeRef DataType;                                                     // 0x0200 (size: 0x10)

}; // Size: 0x210

class UOptimusVariableContainer : public UObject
{
    TArray<class UOptimusVariableDescription*> Descriptions;                          // 0x0028 (size: 0x10)

}; // Size: 0x38

class UOptimusVariableDescription : public UObject
{
    FGuid Guid;                                                                       // 0x0028 (size: 0x10)
    FName VariableName;                                                               // 0x0038 (size: 0x8)
    FOptimusDataTypeRef DataType;                                                     // 0x0040 (size: 0x10)
    class UOptimusValueContainer* DefaultValue;                                       // 0x0050 (size: 0x8)
    TArray<uint8> ValueData;                                                          // 0x0058 (size: 0x10)

}; // Size: 0x68

#endif
