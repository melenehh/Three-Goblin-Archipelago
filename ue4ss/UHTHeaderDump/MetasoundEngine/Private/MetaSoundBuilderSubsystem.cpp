#include "MetaSoundBuilderSubsystem.h"

UMetaSoundBuilderSubsystem::UMetaSoundBuilderSubsystem() {
}

bool UMetaSoundBuilderSubsystem::UnregisterSourceBuilder(FName BuilderName) {
    return false;
}

bool UMetaSoundBuilderSubsystem::UnregisterPatchBuilder(FName BuilderName) {
    return false;
}

bool UMetaSoundBuilderSubsystem::UnregisterBuilder(FName BuilderName) {
    return false;
}

void UMetaSoundBuilderSubsystem::RegisterSourceBuilder(FName BuilderName, UMetaSoundSourceBuilder* Builder) {
}

void UMetaSoundBuilderSubsystem::RegisterPatchBuilder(FName BuilderName, UMetaSoundPatchBuilder* Builder) {
}

void UMetaSoundBuilderSubsystem::RegisterBuilder(FName BuilderName, UMetaSoundBuilderBase* Builder) {
}

bool UMetaSoundBuilderSubsystem::IsInterfaceRegistered(FName InInterfaceName) const {
    return false;
}

UMetaSoundSourceBuilder* UMetaSoundBuilderSubsystem::FindSourceBuilder(FName BuilderName) {
    return NULL;
}

UMetaSoundPatchBuilder* UMetaSoundBuilderSubsystem::FindPatchBuilder(FName BuilderName) {
    return NULL;
}

UMetaSoundBuilderBase* UMetaSoundBuilderSubsystem::FindBuilder(FName BuilderName) {
    return NULL;
}

FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateStringMetaSoundLiteral(const FString& Value, FName& DataType) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateStringArrayMetaSoundLiteral(const TArray<FString>& Value, FName& DataType) {
    return FMetasoundFrontendLiteral{};
}

UMetaSoundSourceBuilder* UMetaSoundBuilderSubsystem::CreateSourcePresetBuilder(FName BuilderName, const TScriptInterface<IMetaSoundDocumentInterface>& ReferencedSourceClass, EMetaSoundBuilderResult& OutResult) {
    return NULL;
}

UMetaSoundSourceBuilder* UMetaSoundBuilderSubsystem::CreateSourceBuilder(FName BuilderName, FMetaSoundBuilderNodeOutputHandle& OnPlayNodeOutput, FMetaSoundBuilderNodeInputHandle& OnFinishedNodeInput, TArray<FMetaSoundBuilderNodeInputHandle>& AudioOutNodeInputs, EMetaSoundBuilderResult& OutResult, EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot) {
    return NULL;
}

UMetaSoundPatchBuilder* UMetaSoundBuilderSubsystem::CreatePatchPresetBuilder(FName BuilderName, const TScriptInterface<IMetaSoundDocumentInterface>& ReferencedPatchClass, EMetaSoundBuilderResult& OutResult) {
    return NULL;
}

UMetaSoundPatchBuilder* UMetaSoundBuilderSubsystem::CreatePatchBuilder(FName BuilderName, EMetaSoundBuilderResult& OutResult) {
    return NULL;
}

FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateObjectMetaSoundLiteral(UObject* Value) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateObjectArrayMetaSoundLiteral(const TArray<UObject*>& Value) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateMetaSoundLiteralFromParam(const FAudioParameter& Param) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateIntMetaSoundLiteral(int32 Value, FName& DataType) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateIntArrayMetaSoundLiteral(const TArray<int32>& Value, FName& DataType) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateFloatMetaSoundLiteral(float Value, FName& DataType) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateFloatArrayMetaSoundLiteral(const TArray<float>& Value, FName& DataType) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateBoolMetaSoundLiteral(bool Value, FName& DataType) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetaSoundBuilderSubsystem::CreateBoolArrayMetaSoundLiteral(const TArray<bool>& Value, FName& DataType) {
    return FMetasoundFrontendLiteral{};
}


