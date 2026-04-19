#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MetasoundFrontend -ObjectName=MetaSoundFrontendDocumentBuilder -FallbackName=MetaSoundFrontendDocumentBuilder
//CROSS-MODULE INCLUDE V2: -ModuleName=MetasoundFrontend -ObjectName=MetasoundFrontendClassName -FallbackName=MetasoundFrontendClassName
//CROSS-MODULE INCLUDE V2: -ModuleName=MetasoundFrontend -ObjectName=MetasoundFrontendLiteral -FallbackName=MetasoundFrontendLiteral
//CROSS-MODULE INCLUDE V2: -ModuleName=MetasoundFrontend -ObjectName=MetasoundFrontendVersion -FallbackName=MetasoundFrontendVersion
#include "EMetaSoundBuilderResult.h"
#include "MetaSoundBuilderNodeInputHandle.h"
#include "MetaSoundBuilderNodeOutputHandle.h"
#include "MetaSoundNodeHandle.h"
#include "MetaSoundBuilderBase.generated.h"

class IMetaSoundDocumentInterface;
class UMetaSoundDocumentInterface;

UCLASS(Abstract, Blueprintable)
class METASOUNDENGINE_API UMetaSoundBuilderBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaSoundFrontendDocumentBuilder Builder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttached;
    
public:
    UMetaSoundBuilderBase();

    UFUNCTION(BlueprintCallable)
    void SetNodeInputDefault(const FMetaSoundBuilderNodeInputHandle& NodeInputHandle, const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void SetGraphInputDefault(FName InputName, const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNodeInputDefault(const FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNode(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGraphOutput(FName Name, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGraphInput(FName Name, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NodesAreConnected(const FMetaSoundBuilderNodeOutputHandle& OutputHandle, const FMetaSoundBuilderNodeInputHandle& InputHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NodeOutputIsConnected(const FMetaSoundBuilderNodeOutputHandle& OutputHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NodeInputIsConnected(const FMetaSoundBuilderNodeInputHandle& InputHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InterfaceIsDeclared(FName InterfaceName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetReferencedPresetAsset() const;
    
    UFUNCTION(BlueprintCallable)
    void GetNodeOutputData(const FMetaSoundBuilderNodeOutputHandle& OutputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    FMetasoundFrontendLiteral GetNodeInputDefault(const FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void GetNodeInputData(const FMetaSoundBuilderNodeInputHandle& InputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    FMetasoundFrontendLiteral GetNodeInputClassDefault(const FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMetaSoundBuilderNodeOutputHandle> FindNodeOutputsByDataType(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMetaSoundBuilderNodeOutputHandle> FindNodeOutputs(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    FMetaSoundNodeHandle FindNodeOutputParent(const FMetaSoundBuilderNodeOutputHandle& OutputHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    FMetaSoundBuilderNodeOutputHandle FindNodeOutputByName(const FMetaSoundNodeHandle& NodeHandle, FName OutputName, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMetaSoundBuilderNodeInputHandle> FindNodeInputsByDataType(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMetaSoundBuilderNodeInputHandle> FindNodeInputs(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    FMetaSoundNodeHandle FindNodeInputParent(const FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    FMetaSoundBuilderNodeInputHandle FindNodeInputByName(const FMetaSoundNodeHandle& NodeHandle, FName InputName, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    FMetasoundFrontendVersion FindNodeClassVersion(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMetaSoundNodeHandle> FindInterfaceOutputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMetaSoundNodeHandle> FindInterfaceInputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    FMetaSoundNodeHandle FindGraphOutputNode(FName OutputName, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    FMetaSoundNodeHandle FindGraphInputNode(FName InputName, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void DisconnectNodesByInterfaceBindings(const FMetaSoundNodeHandle& FromNodeHandle, const FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void DisconnectNodes(const FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, const FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void DisconnectNodeOutput(const FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void DisconnectNodeInput(const FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void ConvertToPreset(const TScriptInterface<IMetaSoundDocumentInterface>& ReferencedNodeClass, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void ConvertFromPreset(EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsNodeOutput(const FMetaSoundBuilderNodeOutputHandle& Output) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsNodeInput(const FMetaSoundBuilderNodeInputHandle& Input) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsNode(const FMetaSoundNodeHandle& Node) const;
    
    UFUNCTION(BlueprintCallable)
    void ConnectNodesByInterfaceBindings(const FMetaSoundNodeHandle& FromNodeHandle, const FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void ConnectNodes(const FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, const FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void ConnectNodeOutputToGraphOutput(FName GraphOutputName, const FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMetaSoundBuilderNodeInputHandle> ConnectNodeOutputsToMatchingGraphInterfaceOutputs(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void ConnectNodeInputToGraphInput(FName GraphInputName, const FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMetaSoundBuilderNodeOutputHandle> ConnectNodeInputsToMatchingGraphInterfaceInputs(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    FMetaSoundNodeHandle AddNodeByClassName(const FMetasoundFrontendClassName& ClassName, int32 MajorVersion, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    FMetaSoundNodeHandle AddNode(const TScriptInterface<IMetaSoundDocumentInterface>& NodeClass, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void AddInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    FMetaSoundBuilderNodeInputHandle AddGraphOutputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorOutput);
    
    UFUNCTION(BlueprintCallable)
    FMetaSoundBuilderNodeOutputHandle AddGraphInputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorInput);
    
};

