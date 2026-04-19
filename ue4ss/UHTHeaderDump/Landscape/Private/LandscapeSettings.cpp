#include "LandscapeSettings.h"

ULandscapeSettings::ULandscapeSettings() {
    this->MaxNumberOfLayers = 8;
    this->MaxComponents = 256;
    this->MaxImageImportCacheSizeMegaBytes = 256;
    this->PaintStrengthGamma = 2.20f;
    this->bDisablePaintingStartupSlowdown = true;
    this->LandscapeDirtyingMode = ELandscapeDirtyingMode::Auto;
    this->SideResolutionLimit = 2048;
    this->bRestrictiveMode = false;
}


