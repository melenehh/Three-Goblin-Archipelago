#include "MovieSceneMetaData.h"

UMovieSceneMetaData::UMovieSceneMetaData() {
}

void UMovieSceneMetaData::SetNotes(const FString& InNotes) {
}

void UMovieSceneMetaData::SetCreated(FDateTime InCreated) {
}

void UMovieSceneMetaData::SetAuthor(const FString& InAuthor) {
}

FString UMovieSceneMetaData::GetNotes() const {
    return TEXT("");
}

FDateTime UMovieSceneMetaData::GetCreated() const {
    return FDateTime{};
}

FString UMovieSceneMetaData::GetAuthor() const {
    return TEXT("");
}


