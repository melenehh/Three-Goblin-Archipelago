#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=EInterchangeTranslatorAssetType -FallbackName=EInterchangeTranslatorAssetType
#include "InterchangeImportSettings.h"
#include "InterchangeContentImportSettings.generated.h"

USTRUCT(BlueprintType)
struct FInterchangeContentImportSettings : public FInterchangeImportSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInterchangeTranslatorAssetType, FName> DefaultPipelineStackOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInterchangeTranslatorAssetType, bool> ShowPipelineStacksConfigurationDialogOverride;
    
    INTERCHANGEENGINE_API FInterchangeContentImportSettings();
};

