#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ETextureImportFloatingPointFormat.h"
#include "ETextureImportPNGInfill.h"
#include "TextureImportSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Editor)
class UTextureImportSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoVTSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableNormalizeNormals;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFastMipFilter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextureImportFloatingPointFormat CompressedFormatForFloatTextures;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextureImportPNGInfill PNGInfill;
    
    UTextureImportSettings();

};

