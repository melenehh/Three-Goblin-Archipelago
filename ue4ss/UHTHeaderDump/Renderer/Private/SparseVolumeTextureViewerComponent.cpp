#include "SparseVolumeTextureViewerComponent.h"

USparseVolumeTextureViewerComponent::USparseVolumeTextureViewerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SparseVolumeTexturePreview = NULL;
    this->bAnimate = false;
    this->bReversePlayback = false;
    this->bBlockingStreamingRequests = false;
    this->AnimationFrame = 0.00f;
    this->FrameRate = 24.00f;
    this->AnimationTime = 0.00f;
    this->PreviewAttribute = ESVTPA_AttributesA_R;
    this->MipLevel = 0;
    this->Extinction = 0.03f;
}


