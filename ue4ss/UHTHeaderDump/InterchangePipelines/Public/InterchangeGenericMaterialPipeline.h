#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangePipelineBase -FallbackName=InterchangePipelineBase
#include "EInterchangeMaterialImportOption.h"
#include "InterchangeGenericMaterialPipeline.generated.h"

class UInterchangeBaseNodeContainer;
class UInterchangeGenericTexturePipeline;

UCLASS(Blueprintable, EditInlineNew)
class INTERCHANGEPIPELINES_API UInterchangeGenericMaterialPipeline : public UInterchangePipelineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImportMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInterchangeMaterialImportOption MaterialImport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ParentMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInterchangeGenericTexturePipeline* TexturePipeline;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterchangeBaseNodeContainer* BaseNodeContainer;
    
public:
    UInterchangeGenericMaterialPipeline();

};

