#include "MovieSceneSkeletalAnimationTrack.h"

UMovieSceneSkeletalAnimationTrack::UMovieSceneSkeletalAnimationTrack() {
    this->bUseLegacySectionIndexBlend = false;
    this->bBlendFirstChildOfRoot = false;
    this->SwapRootBone = ESwapRootBone::SwapRootBone_None;
}

void UMovieSceneSkeletalAnimationTrack::SetSwapRootBone(ESwapRootBone InValue) {
}

ESwapRootBone UMovieSceneSkeletalAnimationTrack::GetSwapRootBone() const {
    return ESwapRootBone::SwapRootBone_Component;
}


