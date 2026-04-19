#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "InterchangePipelineStackOverride.generated.h"

class UInterchangeBlueprintPipelineBase;
class UInterchangePipelineBase;
class UInterchangePythonPipelineBase;

UCLASS(Blueprintable, MinimalAPI, Transient)
class UInterchangePipelineStackOverride : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> OverridePipelines;
    
    UInterchangePipelineStackOverride();

    UFUNCTION(BlueprintCallable)
    void AddPythonPipeline(UInterchangePythonPipelineBase* PipelineBase);
    
    UFUNCTION(BlueprintCallable)
    void AddPipeline(UInterchangePipelineBase* PipelineBase);
    
    UFUNCTION(BlueprintCallable)
    void AddBlueprintPipeline(UInterchangeBlueprintPipelineBase* PipelineBase);
    
};

