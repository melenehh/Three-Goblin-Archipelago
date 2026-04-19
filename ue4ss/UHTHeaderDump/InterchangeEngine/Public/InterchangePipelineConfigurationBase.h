#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EInterchangePipelineConfigurationDialogResult.h"
#include "InterchangeStackInfo.h"
#include "InterchangePipelineConfigurationBase.generated.h"

class UInterchangePipelineBase;
class UInterchangeSourceData;

UCLASS(Blueprintable, MinimalAPI)
class UInterchangePipelineConfigurationBase : public UObject {
    GENERATED_BODY()
public:
    UInterchangePipelineConfigurationBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInterchangePipelineConfigurationDialogResult ScriptedShowScenePipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInterchangePipelineConfigurationDialogResult ScriptedShowReimportPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInterchangePipelineConfigurationDialogResult ScriptedShowPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData);
    
};

