#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterchangePythonPipelineAsset.generated.h"

class UInterchangePythonPipelineBase;

UCLASS(Blueprintable, MinimalAPI)
class UInterchangePythonPipelineAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UInterchangePythonPipelineBase> PythonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterchangePythonPipelineBase* GeneratedPipeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JsonDefaultProperties;
    
    UInterchangePythonPipelineAsset();

};

