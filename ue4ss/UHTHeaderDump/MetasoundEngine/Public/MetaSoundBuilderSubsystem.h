#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=AudioParameter -FallbackName=AudioParameter
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=MetasoundFrontend -ObjectName=MetasoundFrontendLiteral -FallbackName=MetasoundFrontendLiteral
#include "EMetaSoundBuilderResult.h"
#include "EMetaSoundOutputAudioFormat.h"
#include "MetaSoundBuilderNodeInputHandle.h"
#include "MetaSoundBuilderNodeOutputHandle.h"
#include "MetaSoundBuilderSubsystem.generated.h"

class IMetaSoundDocumentInterface;
class UMetaSoundDocumentInterface;
class UMetaSoundBuilderBase;
class UMetaSoundPatchBuilder;
class UMetaSoundSourceBuilder;
class UObject;

UCLASS(Blueprintable)
class METASOUNDENGINE_API UMetaSoundBuilderSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMetaSoundBuilderBase*> NamedBuilders;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TWeakObjectPtr<UMetaSoundBuilderBase>> AssetBuilders;
    
public:
    UMetaSoundBuilderSubsystem();

    UFUNCTION(BlueprintCallable)
    bool UnregisterSourceBuilder(FName BuilderName);
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterPatchBuilder(FName BuilderName);
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterBuilder(FName BuilderName);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSourceBuilder(FName BuilderName, UMetaSoundSourceBuilder* Builder);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPatchBuilder(FName BuilderName, UMetaSoundPatchBuilder* Builder);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBuilder(FName BuilderName, UMetaSoundBuilderBase* Builder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterfaceRegistered(FName InInterfaceName) const;
    
    UFUNCTION(BlueprintCallable)
    UMetaSoundSourceBuilder* FindSourceBuilder(FName BuilderName);
    
    UFUNCTION(BlueprintCallable)
    UMetaSoundPatchBuilder* FindPatchBuilder(FName BuilderName);
    
    UFUNCTION(BlueprintCallable)
    UMetaSoundBuilderBase* FindBuilder(FName BuilderName);
    
    UFUNCTION(BlueprintCallable)
    FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(const FString& Value, FName& DataType);
    
    UFUNCTION(BlueprintCallable)
    FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(const TArray<FString>& Value, FName& DataType);
    
    UFUNCTION(BlueprintCallable)
    UMetaSoundSourceBuilder* CreateSourcePresetBuilder(FName BuilderName, const TScriptInterface<IMetaSoundDocumentInterface>& ReferencedSourceClass, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    UMetaSoundSourceBuilder* CreateSourceBuilder(FName BuilderName, FMetaSoundBuilderNodeOutputHandle& OnPlayNodeOutput, FMetaSoundBuilderNodeInputHandle& OnFinishedNodeInput, TArray<FMetaSoundBuilderNodeInputHandle>& AudioOutNodeInputs, EMetaSoundBuilderResult& OutResult, EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot);
    
    UFUNCTION(BlueprintCallable)
    UMetaSoundPatchBuilder* CreatePatchPresetBuilder(FName BuilderName, const TScriptInterface<IMetaSoundDocumentInterface>& ReferencedPatchClass, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    UMetaSoundPatchBuilder* CreatePatchBuilder(FName BuilderName, EMetaSoundBuilderResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(const TArray<UObject*>& Value);
    
    UFUNCTION(BlueprintCallable)
    FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(const FAudioParameter& Param);
    
    UFUNCTION(BlueprintCallable)
    FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32 Value, FName& DataType);
    
    UFUNCTION(BlueprintCallable)
    FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(const TArray<int32>& Value, FName& DataType);
    
    UFUNCTION(BlueprintCallable)
    FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value, FName& DataType);
    
    UFUNCTION(BlueprintCallable)
    FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(const TArray<float>& Value, FName& DataType);
    
    UFUNCTION(BlueprintCallable)
    FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value, FName& DataType);
    
    UFUNCTION(BlueprintCallable)
    FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(const TArray<bool>& Value, FName& DataType);
    
};

