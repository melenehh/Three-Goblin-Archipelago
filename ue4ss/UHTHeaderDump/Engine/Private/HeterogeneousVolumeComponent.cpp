#include "HeterogeneousVolumeComponent.h"

UHeterogeneousVolumeComponent::UHeterogeneousVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Frame = 0.00f;
    this->FrameRate = 24.00f;
    this->StartFrame = 0.00f;
    this->EndFrame = 0.00f;
    this->bPlaying = false;
    this->bLooping = false;
    this->MipLevel = 0;
    this->bIssueBlockingRequests = false;
    this->StepFactor = 1.00f;
    this->ShadowStepFactor = 8.00f;
    this->ShadowBiasFactor = 0.00f;
    this->LightingDownsampleFactor = 2.00f;
    this->MaterialInstanceDynamic = NULL;
}

void UHeterogeneousVolumeComponent::SetStartFrame(float NewValue) {
}

void UHeterogeneousVolumeComponent::SetPlaying(bool NewValue) {
}

void UHeterogeneousVolumeComponent::SetLooping(bool NewValue) {
}

void UHeterogeneousVolumeComponent::SetFrameRate(float NewValue) {
}

void UHeterogeneousVolumeComponent::SetFrame(float NewValue) {
}

void UHeterogeneousVolumeComponent::SetEndFrame(float NewValue) {
}

void UHeterogeneousVolumeComponent::Play() {
}


