#include "GroomCacheImportSettings.h"

FGroomCacheImportSettings::FGroomCacheImportSettings() {
    this->bImportGroomCache = false;
    this->ImportType = EGroomCacheImportType::None;
    this->FrameStart = 0;
    this->FrameEnd = 0;
    this->bSkipEmptyFrames = false;
    this->bImportGroomAsset = false;
    this->bOverrideConversionSettings = false;
}

