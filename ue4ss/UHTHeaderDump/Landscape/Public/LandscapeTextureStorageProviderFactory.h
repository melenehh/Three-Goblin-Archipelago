#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureAllMipDataProviderFactory -FallbackName=TextureAllMipDataProviderFactory
#include "LandscapeTextureStorageProviderFactory.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULandscapeTextureStorageProviderFactory : public UTextureAllMipDataProviderFactory {
    GENERATED_BODY()
public:
    ULandscapeTextureStorageProviderFactory();

};

