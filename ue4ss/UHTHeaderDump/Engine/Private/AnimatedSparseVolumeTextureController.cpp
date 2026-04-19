#include "AnimatedSparseVolumeTextureController.h"

UAnimatedSparseVolumeTextureController::UAnimatedSparseVolumeTextureController() {
    this->SparseVolumeTexture = NULL;
    this->Time = 0.00f;
    this->bIsPlaying = false;
    this->FrameRate = 24.00f;
    this->MipLevel = 0;
    this->bBlockingStreamingRequests = false;
}

void UAnimatedSparseVolumeTextureController::Update(float DeltaTime) {
}

void UAnimatedSparseVolumeTextureController::Stop() {
}

void UAnimatedSparseVolumeTextureController::Play() {
}

void UAnimatedSparseVolumeTextureController::Pause() {
}

USparseVolumeTextureFrame* UAnimatedSparseVolumeTextureController::GetFrameByIndex(int32 FrameIndex) {
    return NULL;
}

float UAnimatedSparseVolumeTextureController::GetFractionalFrameIndex() {
    return 0.0f;
}

float UAnimatedSparseVolumeTextureController::GetDuration() {
    return 0.0f;
}

void UAnimatedSparseVolumeTextureController::GetCurrentFramesForInterpolation(USparseVolumeTextureFrame*& Frame0, USparseVolumeTextureFrame*& Frame1, float& LerpAlpha) {
}

USparseVolumeTextureFrame* UAnimatedSparseVolumeTextureController::GetCurrentFrame() {
    return NULL;
}


