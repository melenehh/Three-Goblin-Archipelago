#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MaterialQualityOverrides.h"
#include "ShaderPlatformQualitySettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, PerObjectConfig, Config=Engine)
class UShaderPlatformQualitySettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialQualityOverrides QualityOverrides[4];
    
    UShaderPlatformQualitySettings();

};

