#include "NetObjectGridFilterConfig.h"

UNetObjectGridFilterConfig::UNetObjectGridFilterConfig() {
    this->ViewPosRelevancyFrameCount = 2;
    this->CellSizeX = 20000.00f;
    this->CellSizeY = 20000.00f;
    this->MaxCullDistance = 20000.00f;
    this->DefaultCullDistance = 15000.00f;
}


