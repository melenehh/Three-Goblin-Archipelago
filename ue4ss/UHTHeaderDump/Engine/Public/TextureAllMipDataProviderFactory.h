#pragma once
#include "CoreMinimal.h"
#include "TextureMipDataProviderFactory.h"
#include "TextureAllMipDataProviderFactory.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UTextureAllMipDataProviderFactory : public UTextureMipDataProviderFactory {
    GENERATED_BODY()
public:
    UTextureAllMipDataProviderFactory();

};

