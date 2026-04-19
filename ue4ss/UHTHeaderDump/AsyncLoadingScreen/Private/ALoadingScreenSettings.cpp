#include "ALoadingScreenSettings.h"

FALoadingScreenSettings::FALoadingScreenSettings() {
    this->MinimumLoadingScreenDisplayTime = 0.00f;
    this->bAutoCompleteWhenLoadingCompletes = false;
    this->bMoviesAreSkippable = false;
    this->bWaitForManualStop = false;
    this->bAllowInEarlyStartup = false;
    this->bAllowEngineTick = false;
    this->PlaybackType = MT_Normal;
    this->bShuffle = false;
    this->bSetDisplayMovieIndexManually = false;
    this->bShowWidgetOverlay = false;
    this->bShowLoadingCompleteText = false;
    this->Layout = EAsyncLoadingScreenLayout::ALSL_Classic;
}

