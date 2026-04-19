#include "MovieSceneMediaSection.h"

UMovieSceneMediaSection::UMovieSceneMediaSection() {
    this->MediaSource = NULL;
    this->MediaSourceProxyIndex = 0;
    this->bLooping = true;
    this->MediaTexture = NULL;
    this->MediaSoundComponent = NULL;
    this->bUseExternalMediaPlayer = false;
    this->ExternalMediaPlayer = NULL;
    this->TextureIndex = 0;
    this->bHasMediaPlayerProxy = false;
}


