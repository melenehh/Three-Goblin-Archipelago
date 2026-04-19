#pragma once
#include "CoreMinimal.h"
#include "StreamableSparseVolumeTexture.h"
#include "AnimatedSparseVolumeTexture.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAnimatedSparseVolumeTexture : public UStreamableSparseVolumeTexture {
    GENERATED_BODY()
public:
    UAnimatedSparseVolumeTexture();

};

