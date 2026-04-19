#include "TextureImportSettings.h"

UTextureImportSettings::UTextureImportSettings() {
    this->AutoVTSize = 4096;
    this->bEnableNormalizeNormals = true;
    this->bEnableFastMipFilter = true;
    this->CompressedFormatForFloatTextures = ETextureImportFloatingPointFormat::PreviousDefault;
    this->PNGInfill = ETextureImportPNGInfill::Default;
}


