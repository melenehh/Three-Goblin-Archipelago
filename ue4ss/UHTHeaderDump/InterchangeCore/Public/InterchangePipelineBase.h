#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EInterchangePipelineTask.h"
#include "InterchangePipelinePropertyStates.h"
#include "InterchangePipelineBase.generated.h"

class UInterchangeBaseNodeContainer;
class UInterchangeResultsContainer;
class UInterchangeSourceData;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UInterchangePipelineBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterchangeResultsContainer* Results;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FInterchangePipelinePropertyStates> PropertiesStates;
    
public:
    UInterchangePipelineBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScriptedSetReimportSourceIndex(UClass* ReimportObjectClass, const int32 SourceFileIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScriptedExecutePreImportPipeline(UInterchangeBaseNodeContainer* BaseNodeContainer, const TArray<UInterchangeSourceData*>& SourceDatas);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScriptedExecutePostImportPipeline(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScriptedExecutePostFactoryPipeline(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScriptedExecutePipeline(UInterchangeBaseNodeContainer* BaseNodeContainer, const TArray<UInterchangeSourceData*>& SourceDatas);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScriptedExecuteExportPipeline(UInterchangeBaseNodeContainer* BaseNodeContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ScriptedCanExecuteOnAnyThread(EInterchangePipelineTask PipelineTask);
    
    UFUNCTION(BlueprintCallable)
    FInterchangePipelinePropertyStates FindOrAddPropertyStates(const FName PropertyPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesPropertyStatesExist(const FName PropertyPath) const;
    
};

