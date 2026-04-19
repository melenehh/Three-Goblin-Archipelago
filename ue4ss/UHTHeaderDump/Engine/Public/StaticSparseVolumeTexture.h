#pragma once
#include "CoreMinimal.h"
#include "StreamableSparseVolumeTexture.h"
#include "StaticSparseVolumeTexture.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UStaticSparseVolumeTexture : public UStreamableSparseVolumeTexture {
    GENERATED_BODY()
public:
    UStaticSparseVolumeTexture();

};

