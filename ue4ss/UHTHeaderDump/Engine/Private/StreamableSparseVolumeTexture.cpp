#include "StreamableSparseVolumeTexture.h"

UStreamableSparseVolumeTexture::UStreamableSparseVolumeTexture() {
    this->NumMipLevels = 0;
    this->NumFrames = 0;
    this->FormatA = PF_Unknown;
    this->FormatB = PF_Unknown;
    this->AddressX = TA_Wrap;
    this->AddressY = TA_Wrap;
    this->AddressZ = TA_Wrap;
    this->bLocalDDCOnly = true;
}


