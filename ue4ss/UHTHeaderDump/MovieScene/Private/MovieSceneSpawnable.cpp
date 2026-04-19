#include "MovieSceneSpawnable.h"

FMovieSceneSpawnable::FMovieSceneSpawnable() {
    this->bContinuouslyRespawn = false;
    this->bNetAddressableName = false;
    this->ObjectTemplate = NULL;
    this->Ownership = ESpawnOwnership::InnerSequence;
}

