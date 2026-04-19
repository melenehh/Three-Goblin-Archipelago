#pragma once
#include "CoreMinimal.h"
#include "AssetUserData.h"
#include "TextureMipDataProviderFactory.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UTextureMipDataProviderFactory : public UAssetUserData {
    GENERATED_BODY()
public:
    UTextureMipDataProviderFactory();

};

