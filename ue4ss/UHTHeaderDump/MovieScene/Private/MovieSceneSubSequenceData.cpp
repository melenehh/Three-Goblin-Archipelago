#include "MovieSceneSubSequenceData.h"

FMovieSceneSubSequenceData::FMovieSceneSubSequenceData() {
    this->bCanLoop = false;
    this->HierarchicalBias = 0;
    this->AccumulatedFlags = EMovieSceneSubSectionFlags::None;
}

