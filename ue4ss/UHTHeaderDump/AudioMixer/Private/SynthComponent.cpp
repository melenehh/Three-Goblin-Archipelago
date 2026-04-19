#include "SynthComponent.h"

USynthComponent::USynthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAttachParentBound = true;
    this->bAutoDestroy = false;
    this->bStopWhenOwnerDestroyed = true;
    this->bAllowSpatialization = false;
    this->bOverrideAttenuation = false;
    this->bEnableBusSends = true;
    this->bEnableBaseSubmix = true;
    this->bEnableSubmixSends = true;
    this->AttenuationSettings = NULL;
    this->ConcurrencySettings = NULL;
    this->SoundClass = NULL;
    this->SourceEffectChain = NULL;
    this->SoundSubmix = NULL;
    this->bIsUISound = false;
    this->bIsPreviewSound = false;
    this->EnvelopeFollowerAttackTime = 0;
    this->EnvelopeFollowerReleaseTime = 0;
    this->Synth = NULL;
    this->AudioComponent = NULL;
}

void USynthComponent::Stop() {
}

void USynthComponent::Start() {
}

void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier) {
}

void USynthComponent::SetSubmixSend(USoundSubmixBase* Submix, float SendLevel) {
}

void USynthComponent::SetSourceBusSendPreEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel) {
}

void USynthComponent::SetSourceBusSendPostEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel) {
}

void USynthComponent::SetOutputToBusOnly(bool bInOutputToBusOnly) {
}

void USynthComponent::SetModulationRouting(const TSet<USoundModulatorBase*>& Modulators, const EModulationDestination Destination, const EModulationRouting RoutingMethod) {
}

void USynthComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency) {
}

void USynthComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled) {
}

void USynthComponent::SetAudioBusSendPreEffect(UAudioBus* AudioBus, float AudioBusSendLevel) {
}

void USynthComponent::SetAudioBusSendPostEffect(UAudioBus* AudioBus, float AudioBusSendLevel) {
}

bool USynthComponent::IsPlaying() const {
    return false;
}

TSet<USoundModulatorBase*> USynthComponent::GetModulators(const EModulationDestination Destination) {
    return TSet<USoundModulatorBase*>();
}

void USynthComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel, const EAudioFaderCurve FadeCurve) const {
}

void USynthComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, const EAudioFaderCurve FadeCurve) const {
}

void USynthComponent::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, const EAudioFaderCurve FadeCurve) const {
}


