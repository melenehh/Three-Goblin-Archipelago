#include "InterchangePipelineBase.h"

UInterchangePipelineBase::UInterchangePipelineBase() {
    this->Results = NULL;
}

void UInterchangePipelineBase::ScriptedSetReimportSourceIndex_Implementation(UClass* ReimportObjectClass, const int32 SourceFileIndex) {
}

void UInterchangePipelineBase::ScriptedExecutePreImportPipeline_Implementation(UInterchangeBaseNodeContainer* BaseNodeContainer, const TArray<UInterchangeSourceData*>& SourceDatas) {
}

void UInterchangePipelineBase::ScriptedExecutePostImportPipeline_Implementation(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport) {
}

void UInterchangePipelineBase::ScriptedExecutePostFactoryPipeline_Implementation(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport) {
}

void UInterchangePipelineBase::ScriptedExecutePipeline_Implementation(UInterchangeBaseNodeContainer* BaseNodeContainer, const TArray<UInterchangeSourceData*>& SourceDatas) {
}

void UInterchangePipelineBase::ScriptedExecuteExportPipeline_Implementation(UInterchangeBaseNodeContainer* BaseNodeContainer) {
}

bool UInterchangePipelineBase::ScriptedCanExecuteOnAnyThread_Implementation(EInterchangePipelineTask PipelineTask) {
    return false;
}

FInterchangePipelinePropertyStates UInterchangePipelineBase::FindOrAddPropertyStates(const FName PropertyPath) {
    return FInterchangePipelinePropertyStates{};
}

bool UInterchangePipelineBase::DoesPropertyStatesExist(const FName PropertyPath) const {
    return false;
}


