#include "MovieSceneAudioSection.h"

UMovieSceneAudioSection::UMovieSceneAudioSection() {
    this->Sound = NULL;
    this->StartOffset = -340282346638528859811704183484516925440.00f;
    this->AudioStartTime = -340282346638528859811704183484516925440.00f;
    this->AudioDilationFactor = -340282346638528859811704183484516925440.00f;
    this->AudioVolume = -340282346638528859811704183484516925440.00f;
    this->bLooping = true;
    this->bSuppressSubtitles = false;
    this->bOverrideAttenuation = false;
    this->AttenuationSettings = NULL;
}

void UMovieSceneAudioSection::SetSuppressSubtitles(bool bInSuppressSubtitles) {
}

void UMovieSceneAudioSection::SetStartOffset(FFrameNumber InStartOffset) {
}

void UMovieSceneAudioSection::SetSound(USoundBase* InSound) {
}

void UMovieSceneAudioSection::SetOverrideAttenuation(bool bInOverrideAttenuation) {
}

void UMovieSceneAudioSection::SetLooping(bool bInLooping) {
}

void UMovieSceneAudioSection::SetAttenuationSettings(USoundAttenuation* InAttenuationSettings) {
}

bool UMovieSceneAudioSection::GetSuppressSubtitles() const {
    return false;
}

FFrameNumber UMovieSceneAudioSection::GetStartOffset() const {
    return FFrameNumber{};
}

USoundBase* UMovieSceneAudioSection::GetSound() const {
    return NULL;
}

bool UMovieSceneAudioSection::GetOverrideAttenuation() const {
    return false;
}

bool UMovieSceneAudioSection::GetLooping() const {
    return false;
}

USoundAttenuation* UMovieSceneAudioSection::GetAttenuationSettings() const {
    return NULL;
}


