#include "InterchangePipelineConfigurationBase.h"

UInterchangePipelineConfigurationBase::UInterchangePipelineConfigurationBase() {
}

EInterchangePipelineConfigurationDialogResult UInterchangePipelineConfigurationBase::ScriptedShowScenePipelineConfigurationDialog_Implementation(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData) {
    return EInterchangePipelineConfigurationDialogResult::Cancel;
}

EInterchangePipelineConfigurationDialogResult UInterchangePipelineConfigurationBase::ScriptedShowReimportPipelineConfigurationDialog_Implementation(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData) {
    return EInterchangePipelineConfigurationDialogResult::Cancel;
}

EInterchangePipelineConfigurationDialogResult UInterchangePipelineConfigurationBase::ScriptedShowPipelineConfigurationDialog_Implementation(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData) {
    return EInterchangePipelineConfigurationDialogResult::Cancel;
}


