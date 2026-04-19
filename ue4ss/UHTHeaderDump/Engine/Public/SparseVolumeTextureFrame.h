#pragma once
#include "CoreMinimal.h"
#include "SparseVolumeTexture.h"
#include "SparseVolumeTextureFrame.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USparseVolumeTextureFrame : public USparseVolumeTexture {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USparseVolumeTexture* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameIndex;
    
public:
    USparseVolumeTextureFrame();

};

