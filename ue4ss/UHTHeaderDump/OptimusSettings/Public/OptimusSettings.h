#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "EOptimusDefaultDeformerMode.h"
#include "OptimusSettings.generated.h"

class UMeshDeformer;

UCLASS(Blueprintable, DefaultConfig, Config=DeformerGraph)
class OPTIMUSSETTINGS_API UOptimusSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptimusDefaultDeformerMode DefaultMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMeshDeformer> DefaultDeformer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMeshDeformer> DefaultRecomputeTangentDeformer;
    
    UOptimusSettings();

};

