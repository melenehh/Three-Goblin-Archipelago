#include "SparseVolumeTextureViewer.h"
#include "SparseVolumeTextureViewerComponent.h"

ASparseVolumeTextureViewer::ASparseVolumeTextureViewer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USparseVolumeTextureViewerComponent>(TEXT("SparseVolumeTextureViewerComponent"));
    this->SparseVolumeTextureViewerComponent = (USparseVolumeTextureViewerComponent*)RootComponent;
}


